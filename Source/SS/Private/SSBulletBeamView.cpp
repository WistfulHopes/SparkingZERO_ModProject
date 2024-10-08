#include "SSBulletBeamView.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

ASSBulletBeamView::ASSBulletBeamView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootCompo"));
    this->BeamUpdateCounter = 0.00f;
    this->TransformHistoryIntervalLength = 100.00f;
    this->RootCompo = (USceneComponent*)RootComponent;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent0"));
    this->LoopSplineCalcCompo = CreateDefaultSubobject<USplineComponent>(TEXT("LoopSplineCalc"));
    this->OverrideScaleType = ESSBulletBeamViewOverrideScaleType::None;
    this->TopEffectLocComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TopEffectCompo"));
    this->BottomEffectLocComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BottomEffectCompo"));
    this->TopOffsetEffectLocComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TopOffsetEffectCompo"));
    this->TopAtbEffectLocComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TopAtbEffectCompo"));
    this->BottomOffsetEffectLocComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BottomOffsetEffectCompo"));
    this->ContactPointComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ContactPoint"));
    this->TopLocatorOffset = 0.00f;
    this->BottomLocatorOffset = 0.00f;
    this->ScaleTop = 1.00f;
    this->ScaleBottom = 1.00f;
    this->CapLength = 100.00f;
    this->MaterialLoopLength = 200.00f;
    this->MeshComponentNum = 10;
    this->MaterialOffsetV = 0.00f;
    this->bLoopOnly = true;
    this->LoopEffectRayHeight = 200.00f;
    this->LoopEndEffectStartOffset = 0.00f;
    this->bStopScalingLoopAddEffects = false;
    this->bReserveDeactivateLoopAddEffect = false;
    this->bEndMeshFlg = false;
    this->DebugSplineLength = 0.00f;
    this->DebugSplineMeshLoopLength = 0.00f;
    this->bUseSpline = false;
    this->bUpdateSpline = true;
    this->bIsBeam = false;
    this->bReflected = false;
    this->SelectEffectColorComponent = NULL;
    this->BulletRatFreeTimeline = NULL;
    this->BulletRatSpawnActorManager = NULL;
    this->DebugLength = 0.00f;
    this->BottomEffectLocComponent->SetupAttachment(RootComponent);
    this->BottomOffsetEffectLocComponent->SetupAttachment(RootComponent);
    this->ContactPointComponent->SetupAttachment(TopEffectLocComponent);
    this->LoopSplineCalcCompo->SetupAttachment(RootComponent);
    this->SplineComponent->SetupAttachment(RootComponent);
    this->TopAtbEffectLocComponent->SetupAttachment(RootComponent);
    this->TopEffectLocComponent->SetupAttachment(RootComponent);
    this->TopOffsetEffectLocComponent->SetupAttachment(RootComponent);
}

void ASSBulletBeamView::SetExecuteActor(AActor* InActor) {
}

USplineComponent* ASSBulletBeamView::GetBeamSplineComponent() const {
    return NULL;
}


