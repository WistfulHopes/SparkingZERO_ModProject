#include "KoratEmitter.h"
#include "Components/SceneComponent.h"
#include "KoratDefaultIdData.h"
#include "KoratInteractAtbComponent.h"

AKoratEmitter::AKoratEmitter(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    // Explicitly create a stable component hierarchy instead of overriding default subobject class
    AttachRootCompo = CreateDefaultSubobject<USceneComponent>(TEXT("AttachCompo"));
    RootComponent = AttachRootCompo;

    TransformAdjustCompo = CreateDefaultSubobject<USceneComponent>(TEXT("TransformAdjustComponent"));
    TransformAdjustCompo->SetupAttachment(RootComponent);

    IdDataInstance = CreateDefaultSubobject<UKoratDefaultIdData>(TEXT("IdData"));
    InteractAtbComponent = CreateDefaultSubobject<UKoratInteractAtbComponent>(TEXT("InteractAtbCompo"));

    // Default values
    bUseTerrainRay = false;
    TerrainSocketName = TEXT("NULL");
    bSynchronizeWithOwnerActorVisibility = false;
    ParticleSystemForFinishedEffect = nullptr;
    EmitterForFinishedEffect = nullptr;
    SequenceForFinishedEffect = nullptr;
    UtilityCompo = nullptr;
    SelectEffectColorComponent = nullptr;
    ExecuteActor = nullptr;
    bEnableDitherAlpha = true;
    bEnableDitherAlphaAutoCtrl = false;
    bCheckedVisibleValueMaterials = false;
    DitherComponent = nullptr;
    VisibleValue = 1.0f;
    bEnableShowingCheckByBlastImpact = false;
    bForceDestroyByWarpCharacter = false;
    ToonPointLightComponent = nullptr;
    AfterimageComponent = nullptr;

    ParticleLineCheckIgnoreActorClass.AddDefaulted(1);
}

void AKoratEmitter::PostDuplicate(EDuplicateMode::Type DuplicateMode)
{
    Super::PostDuplicate(DuplicateMode);

    // Prevent duplication loops by clearing any references that point into a sequence or parent graph
    SequenceForFinishedEffect = nullptr;
    ExecuteActorInGame.Reset();
    ParentActorForTickCheck.Reset();
}

void AKoratEmitter::UnregisterCustomTimeDilationDelegate() {}
void AKoratEmitter::SetVisibleValue(const float InValue) {}
void AKoratEmitter::SetExecuteActor(AActor* InActor) {}
void AKoratEmitter::RegisterCustomTimeDilationDelegate() {}
void AKoratEmitter::OnSpawnFinishedEffect() {}
void AKoratEmitter::OnSetCustomTimeDilation(const float, const EKoratSetCustomTimeDilationReason) {}
void AKoratEmitter::EditorParticleBranchRestore_Implementation() {}

// --- Interface Implementations ---

void AKoratEmitter::SetOwnerSequenceInterface(UMovieSceneSequence* InSequence)
{
#if WITH_EDITOR
    // Prevent self-reference loops
    if (SequenceForFinishedEffect == Cast<ULevelSequence>(InSequence))
    {
        return;
    }
#endif
    SequenceForFinishedEffect = Cast<ULevelSequence>(InSequence);
}

UMovieSceneSequence* AKoratEmitter::GetOnewrSequenceInterface() const
{
    return Cast<UMovieSceneSequence>(SequenceForFinishedEffect);
}

void AKoratEmitter::SetExecuteActorInterface(AActor* InExecuteActor)
{
    ExecuteActor = InExecuteActor;
}

void AKoratEmitter::SetEditorExecuteActorInterface(AActor* InEditorExecuteActor)
{
#if WITH_EDITOR
    ExecuteActorInGame = InEditorExecuteActor;
#endif
}

AActor* AKoratEmitter::GetExecuteActorInterface() const
{
    return ExecuteActor;
}