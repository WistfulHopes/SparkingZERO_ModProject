#include "MovieSceneViewSwitchSectionTemplate.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Actor.h"
#include "IMovieScenePlayer.h"
#include "Evaluation/MovieSceneExecutionTokens.h"
#include "Evaluation/MovieScenePreAnimatedState.h"

FMovieSceneViewSwitchSectionTemplate::FMovieSceneViewSwitchSectionTemplate()
{
    CurveValue = 0;
    bLowPriority = false;
}

FMovieSceneViewSwitchSectionTemplate::FMovieSceneViewSwitchSectionTemplate(const UMovieSceneViewSwitchSection& Section)
{
    CurveValue = Section.CurveValue;
    bLowPriority = Section.bLowPriority;
    CurveName = Section.CurveName;
    SectionRange = Section.GetRange();
}


struct FViewSwitchAnimType
{
	static FMovieSceneAnimTypeID GetAnimTypeID()
	{
		static FMovieSceneAnimTypeID AnimTypeID = FMovieSceneAnimTypeID::Unique();
		return AnimTypeID;
	}
};

struct FPreAnimatedViewSwitchToken : IMovieScenePreAnimatedToken
{
	bool bWasVisible;

	FPreAnimatedViewSwitchToken(bool bInWasVisible)
		: bWasVisible(bInWasVisible)
	{}

	virtual void RestoreState(UObject& Object, const UE::MovieScene::FRestoreStateParams& Params) override
	{
		if (USkeletalMeshComponent* Comp = Cast<USkeletalMeshComponent>(&Object))
		{
			Comp->SetVisibility(bWasVisible, true);
		}
	}
};

struct FViewSwitchTokenProducer : IMovieScenePreAnimatedTokenProducer
{
	int32 RestoreCurveValue;
	FName CurveName;

	FViewSwitchTokenProducer(int32 InRestoreCurveValue, FName InCurveName)
		: RestoreCurveValue(InRestoreCurveValue)
		, CurveName(InCurveName)
	{}

	virtual IMovieScenePreAnimatedTokenPtr CacheExistingState(UObject& InObject) const override
	{
		if (USkeletalMeshComponent* Comp = Cast<USkeletalMeshComponent>(&InObject))
		{
			// Recreate the base name logic so we can compute which tag would be visible for RestoreCurveValue
			FString CurveString = CurveName.ToString();
			FString BaseName;

			if (CurveString.StartsWith(TEXT("HairA")))
				BaseName = TEXT("Hair");
			else if (CurveString.StartsWith(TEXT("FaceA")))
				BaseName = TEXT("Face");
			else
				BaseName = CurveString.LeftChop(17); // "_visiblity_switch"

			FString VisibleTagRestore = FString::Printf(TEXT("%s_Switch_%d_Mesh"), *BaseName, RestoreCurveValue);

			bool bRestoreVisible = false;
			for (const FName& Tag : Comp->ComponentTags)
			{
				const FString TagStr = Tag.ToString();
				if (TagStr == VisibleTagRestore)
				{
					bRestoreVisible = true;
					break;
				}
			}

			// Return a token that, when RestoreState is called, will set visibility to bRestoreVisible
			return FPreAnimatedViewSwitchToken(bRestoreVisible);

		}
		return IMovieScenePreAnimatedTokenPtr();
	}
};

struct FViewSwitchExecutionToken : IMovieSceneExecutionToken
{
	FName CurveName;
	int32 CurveValue;
	bool bVisibilityOn;

	FViewSwitchExecutionToken(FName InCurveName, int32 InCurveValue, bool bInVisibilityOn)
		: CurveName(InCurveName)
		, CurveValue(InCurveValue)
		, bVisibilityOn(bInVisibilityOn)
	{}

    virtual void Execute(const FMovieSceneContext& Context,
        const FMovieSceneEvaluationOperand& Operand,
        FPersistentEvaluationData& PersistentData,
        IMovieScenePlayer& Player) override
    {
        TArrayView<TWeakObjectPtr<UObject>> BoundObjects = Player.FindBoundObjects(Operand);
        if (BoundObjects.Num() == 0)
            return;

        AActor* TargetActor = Cast<AActor>(BoundObjects[0].Get());
        if (!TargetActor)
            return;

        TArray<USkeletalMeshComponent*> Components;
        TargetActor->GetComponents(Components);

        FString CurveString = CurveName.ToString();
        FString BaseName;

        if (CurveString.StartsWith(TEXT("HairA")))
            BaseName = TEXT("Hair");
        else if (CurveString.StartsWith(TEXT("FaceA")))
            BaseName = TEXT("Face");
        else
            BaseName = CurveString.LeftChop(17); // "_visiblity_switch"

        FString VisibleMeshTag   = FString::Printf(TEXT("%s_Switch_%d_Mesh"), *BaseName, CurveValue);
        FString VisibleShadowTag = FString::Printf(TEXT("%s_Switch_%d_Shadow"), *BaseName, CurveValue);

        TArray<FString> MeshTagsToHide;
        TArray<FString> ShadowTagsToHide;
        for (int32 i = 0; i < 10; ++i)
        {
            if (i == CurveValue) continue;
            MeshTagsToHide.Add(FString::Printf(TEXT("%s_Switch_%d_Mesh"), *BaseName, i));
            ShadowTagsToHide.Add(FString::Printf(TEXT("%s_Switch_%d_Shadow"), *BaseName, i));
        }

        for (USkeletalMeshComponent* Comp : Components)
        {
            if (!Comp) continue;

            for (const FName& Tag : Comp->ComponentTags)
            {
                const FString& TagStr = Tag.ToString();

                // Handle Mesh Tags
                if (TagStr == VisibleMeshTag || MeshTagsToHide.Contains(TagStr))
                {
                    bool bShouldBeVisible = (TagStr == VisibleMeshTag);

                    // Save pre-animated state for visibility
                    Player.SavePreAnimatedState(*Comp, FViewSwitchAnimType::GetAnimTypeID(), FViewSwitchTokenProducer(0, CurveName));
                    Comp->SetVisibility(bShouldBeVisible && bVisibilityOn, false);
                }

                // Handle Shadow Tags
                else if (TagStr == VisibleShadowTag || ShadowTagsToHide.Contains(TagStr))
                {
                    bool bShouldCastShadow = (TagStr == VisibleShadowTag);

                    // Optional: Save pre-animated state for shadow flags if desired
                    // (You would need a new PreAnimatedTokenProducer for shadows.)

                    Comp->SetCastShadow(bShouldCastShadow && bVisibilityOn);
                    Comp->bCastHiddenShadow = bShouldCastShadow && bVisibilityOn;
                }
            }
        }
    }
};

EMovieSceneCompletionMode FMovieSceneViewSwitchSectionTemplate::GetCompletionMode() const
{
    return EMovieSceneCompletionMode::RestoreState;
}

void FMovieSceneViewSwitchSectionTemplate::Evaluate(
    const FMovieSceneEvaluationOperand& Operand,
    const FMovieSceneContext& Context,
    const FPersistentEvaluationData& PersistentData,
    FMovieSceneExecutionTokens& ExecutionTokens) const
{
    if (Context.IsSilent())
    {
        return;
    }

    FFrameTime CurrentTime = Context.GetTime();
    int32 ValueToApply = CurveValue;

    if (!SectionRange.Contains(CurrentTime.GetFrame()))
    {
        ValueToApply = 0;
    }


    ExecutionTokens.Add(FViewSwitchExecutionToken(CurveName, ValueToApply, true));
}


