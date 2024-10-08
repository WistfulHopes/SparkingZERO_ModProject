#include "SSEffectPedestalActorBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ASSEffectPedestalActorBase::ASSEffectPedestalActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->bIsEnable = true;
    this->bIsPause = false;
    this->ReplayIntervalSeconds = 1.00f;
    this->bIsRotation = false;
    this->RotationPerSeconds = 10.00f;
    this->RotationScale = 10.00f;
    this->Scene = (USceneComponent*)RootComponent;
    this->Bounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
    this->BoundsOffset = CreateDefaultSubobject<USceneComponent>(TEXT("BoundsOffset"));
    this->ProductRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ProductRoot"));
    this->ProductOffset = CreateDefaultSubobject<USceneComponent>(TEXT("ProductOffset"));
    this->Bounds->SetupAttachment(BoundsOffset);
    this->BoundsOffset->SetupAttachment(RootComponent);
    this->ProductOffset->SetupAttachment(ProductRoot);
    this->ProductRoot->SetupAttachment(RootComponent);
}


