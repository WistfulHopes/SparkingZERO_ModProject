#include "KoratMovieSceneVisibilitySectionTemplate.h"
#include "Sections/MovieSceneBoolSection.h"
#include "Tracks/MovieScenePropertyTrack.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "MovieSceneExecutionToken.h"
#include "IMovieScenePlayer.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSequenceID.h"

FKoratMovieSceneVisibilitySectionTemplate::FKoratMovieSceneVisibilitySectionTemplate() {
}

FKoratMovieSceneVisibilitySectionTemplate::FKoratMovieSceneVisibilitySectionTemplate(
	const UMovieSceneBoolSection& Section, const UMovieScenePropertyTrack& Track)
	: FMovieScenePropertySectionTemplate(FName("HiddenInGameSequencer"), FString("bHiddenInGameSequencer"))
	, BoolCurve(Section.GetChannel())
{
}

struct FVisibilityAnimType
{
    static FMovieSceneAnimTypeID GetAnimTypeID()
    {
        static FMovieSceneAnimTypeID AnimTypeID = FMovieSceneAnimTypeID::Unique();
        return AnimTypeID;
    }
};


// --- token + producer (replace your existing ones) ---

struct FPreAnimatedVisibilityToken : IMovieScenePreAnimatedToken
{
    bool bLocalVisibleFlag;
    bool bIsVisible;
    bool bHiddenInGame;
    bool bOwnerHidden;

    FPreAnimatedVisibilityToken(bool InLocalVisibleFlag, bool InIsVisible, bool InHiddenInGame, bool InOwnerHidden)
        : bLocalVisibleFlag(InLocalVisibleFlag)
        , bIsVisible(InIsVisible)
        , bHiddenInGame(InHiddenInGame)
        , bOwnerHidden(InOwnerHidden)
    {}

    virtual void RestoreState(UObject& Object, const UE::MovieScene::FRestoreStateParams& Params) override
    {
        if (UPrimitiveComponent* Prim = Cast<UPrimitiveComponent>(&Object))
        {
            // Restore actor hidden state (if owner exists)
            if (AActor* Owner = Prim->GetOwner())
            {
                Owner->SetActorHiddenInGame(bOwnerHidden);
            }

            // Shadow meshes remain forced-hidden
            if (USkeletalMeshComponent* SkeletalMeshComp = Cast<USkeletalMeshComponent>(Prim))
            {
                if (SkeletalMeshComp->bCastHiddenShadow || SkeletalMeshComp->GetName().Contains(TEXT("Shadow_")))
                {
                    SkeletalMeshComp->SetVisibility(false, /*bPropagateToChildren=*/false);
                    SkeletalMeshComp->bHiddenInGame = true;
                    return;
                }
            }

            // Restore component visibility and hidden-in-game
            Prim->SetVisibility(bLocalVisibleFlag, /*bPropagateToChildren=*/false);
            Prim->bHiddenInGame = bHiddenInGame;

            UE_LOG(LogTemp, Verbose, TEXT("RestoreState: %s -> localVisible=%d hiddenInGame=%d ownerHidden=%d"),
                *Prim->GetName(), bLocalVisibleFlag, bHiddenInGame, bOwnerHidden);
        }
    }
};

struct FVisibilityTokenProducer : IMovieScenePreAnimatedTokenProducer
{
    virtual IMovieScenePreAnimatedTokenPtr CacheExistingState(UObject& InObject) const override
    {
        if (UPrimitiveComponent* Prim = Cast<UPrimitiveComponent>(&InObject))
        {
            const bool bLocalVisible = Prim->GetVisibleFlag();
            const bool bIsVisible = Prim->IsVisible();
            const bool bHiddenInGame = Prim->bHiddenInGame;

            bool bOwnerHidden = false;
            if (AActor* Owner = Prim->GetOwner())
            {
                bOwnerHidden = Owner->IsHidden(); // store actor hidden state
            }

            UE_LOG(LogTemp, Verbose, TEXT("CacheExistingState: %s localVisible=%d isVisible=%d hiddenInGame=%d ownerHidden=%d"),
                *Prim->GetName(), bLocalVisible, bIsVisible, bHiddenInGame, bOwnerHidden);

            // Return ownership-correct unique pointer token
            return IMovieScenePreAnimatedTokenPtr(FPreAnimatedVisibilityToken(
                bLocalVisible,
                bIsVisible,
                bHiddenInGame,
                bOwnerHidden
            ));
        }

        return IMovieScenePreAnimatedTokenPtr();
    }
};


void ApplyVisibilityToVisibleSkeletalMeshChildren(USceneComponent* Component, bool bVisible, IMovieScenePlayer& Player)
{
    if (!Component)
        return;

    if (USkeletalMeshComponent* SkeletalMesh = Cast<USkeletalMeshComponent>(Component))
    {
        // Always save pre-animated state before applying changes
        Player.SavePreAnimatedState(
            *SkeletalMesh,
            FVisibilityAnimType::GetAnimTypeID(),
            FVisibilityTokenProducer()
        );

        if (SkeletalMesh->bCastHiddenShadow ||
            SkeletalMesh->GetName().Contains(TEXT("Shadow_")))
        {
            SkeletalMesh->SetVisibility(false, /*bPropagateToChildren=*/false);
            SkeletalMesh->bHiddenInGame = true;
        }
        else
        {
            SkeletalMesh->SetVisibility(bVisible, /*bPropagateToChildren=*/false);
            SkeletalMesh->bHiddenInGame = !bVisible;
        }
    }
    else if (UPrimitiveComponent* Prim = Cast<UPrimitiveComponent>(Component))
    {
        // Save and set for non-skeletal primitives as well
        Player.SavePreAnimatedState(*Prim, FVisibilityAnimType::GetAnimTypeID(), FVisibilityTokenProducer());
        Prim->SetVisibility(bVisible, /*bPropagateToChildren=*/false);
        Prim->bHiddenInGame = !bVisible;
    }

    // Recurse into children explicitly (no implicit propagation)
    for (USceneComponent* Child : Component->GetAttachChildren())
    {
        ApplyVisibilityToVisibleSkeletalMeshChildren(Child, bVisible, Player);
    }
}

EMovieSceneCompletionMode FKoratMovieSceneVisibilitySectionTemplate::GetCompletionMode() const
{
	return EMovieSceneCompletionMode::KeepState;
}

struct FKoratVisibilityExecutionToken : IMovieSceneExecutionToken
{
	FMovieSceneBoolChannel BoolCurve;
	FFrameTime EvalTime;

	FKoratVisibilityExecutionToken(const FMovieSceneBoolChannel& InBoolCurve, FFrameTime InEvalTime)
		: BoolCurve(InBoolCurve), EvalTime(InEvalTime)
	{}

    // Helper: Recursively set visibility on initially-visible SkeletalMeshComponents
    void ApplyVisibilityToVisibleSkeletalMeshChildren(USceneComponent* Component, bool bVisible, IMovieScenePlayer& Player)
    {
        if (!Component)
            return;
    
        if (USkeletalMeshComponent* SkeletalMesh = Cast<USkeletalMeshComponent>(Component))
        {
            // Always save pre-animated state before applying changes
            Player.SavePreAnimatedState(
                *SkeletalMesh,
                FVisibilityAnimType::GetAnimTypeID(),
                FVisibilityTokenProducer()
            );
    
            if (SkeletalMesh->bCastHiddenShadow ||
                SkeletalMesh->GetName().Contains(TEXT("Shadow_")))
            {
                SkeletalMesh->SetVisibility(false, /*bPropagateToChildren=*/false);
                SkeletalMesh->bHiddenInGame = true;
            }
            else
            {
                SkeletalMesh->SetVisibility(bVisible, /*bPropagateToChildren=*/false);
                SkeletalMesh->bHiddenInGame = !bVisible;
            }
        }
        else if (UPrimitiveComponent* Prim = Cast<UPrimitiveComponent>(Component))
        {
            // Save and set for non-skeletal primitives as well
            Player.SavePreAnimatedState(*Prim, FVisibilityAnimType::GetAnimTypeID(), FVisibilityTokenProducer());
            Prim->SetVisibility(bVisible, /*bPropagateToChildren=*/false);
            Prim->bHiddenInGame = !bVisible;
        }
    
        // Recurse into children explicitly (no implicit propagation)
        for (USceneComponent* Child : Component->GetAttachChildren())
        {
            ApplyVisibilityToVisibleSkeletalMeshChildren(Child, bVisible, Player);
        }
    }

    virtual void Execute(
        const FMovieSceneContext& Context,
        const FMovieSceneEvaluationOperand& Operand,
        FPersistentEvaluationData& PersistentData,
        IMovieScenePlayer& Player) override
    {
        bool bResult = false;
        BoolCurve.Evaluate(EvalTime, bResult);
    
        TArrayView<TWeakObjectPtr<UObject>> BoundObjects = Player.FindBoundObjects(Operand);
        if (!BoundObjects.IsValidIndex(0)) return;
    
        UObject* BoundObject = BoundObjects[0].Get();
        if (!BoundObject) return;
        
        // Optional: Debug print
        // UE_LOG(LogTemp, Warning, TEXT("BoundObject: %s (%s)"), *BoundObject->GetName(), *BoundObject->GetClass()->GetName());
        
        bool bHandled = false;
        
        // First try: If it's an actor, search for the specific component hierarchy
        if (AActor* Actor = Cast<AActor>(BoundObject))
        {
            for (UActorComponent* Component : Actor->GetComponents())
            {
                if (Component && Component->GetClass()->GetName() == TEXT("SSCharacterCapsuleComponent"))
                {
                    UCapsuleComponent* Capsule = Cast<UCapsuleComponent>(Component);
                    if (!Capsule) continue;
        
                    for (USceneComponent* Child : Capsule->GetAttachChildren())
                    {
                        if (Child && Child->GetName() == TEXT("CharacterMesh0"))
                        {
                            ApplyVisibilityToVisibleSkeletalMeshChildren(Child, bResult, Player);
                            bHandled = true;
                            break;
                        }
                    }
        
                    if (bHandled) break;
                }
            }
        }
        
        if (!bHandled)
        {
            // Try fallback if the expected hierarchy isn't found
        
            // 1. Bound directly to a SkeletalMeshComponent
            if (USkeletalMeshComponent* SkeletalMesh = Cast<USkeletalMeshComponent>(BoundObject))
            {
                ApplyVisibilityToVisibleSkeletalMeshChildren(SkeletalMesh, bResult, Player);
            }
            // 2. Bound to a scene component (may be parent of skeletal meshes)
            else if (USceneComponent* SceneComp = Cast<USceneComponent>(BoundObject))
            {
                ApplyVisibilityToVisibleSkeletalMeshChildren(SceneComp, bResult, Player);
            }
            // 3. Last resort: check all actor components
            else if (AActor* FallbackActor = Cast<AActor>(BoundObject))
            {
                bool bFallbackHandled = false;
        
                for (UActorComponent* Component : FallbackActor->GetComponents())
                {
                    if (USkeletalMeshComponent* SkeletalMesh = Cast<USkeletalMeshComponent>(Component))
                    {
                        ApplyVisibilityToVisibleSkeletalMeshChildren(SkeletalMesh, bResult, Player);
                        bFallbackHandled = true;
                        break;
                    }
                }
        
                if (!bFallbackHandled)
                {
                    for (UActorComponent* Component : FallbackActor->GetComponents())
                    {
                        if (UPrimitiveComponent* Prim = Cast<UPrimitiveComponent>(Component))
                        {
                            Player.SavePreAnimatedState(*Prim, FVisibilityAnimType::GetAnimTypeID(), FVisibilityTokenProducer());
                            Prim->SetVisibility(bResult, true);
                            break;
                        }
                    }
                }
            }
        }
    }
};

void FKoratMovieSceneVisibilitySectionTemplate::Evaluate(
	const FMovieSceneEvaluationOperand& Operand,
	const FMovieSceneContext& Context,
	const FPersistentEvaluationData& PersistentData,
	FMovieSceneExecutionTokens& ExecutionTokens) const
{
	const FFrameTime EvalTime = Context.GetTime();

	ExecutionTokens.Add(FKoratVisibilityExecutionToken(BoolCurve, EvalTime));
}
