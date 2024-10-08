#include "KoratSpaceArea.h"
#include "Components/SceneComponent.h"

AKoratSpaceArea::AKoratSpaceArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bUseOverridingPriority = false;
    this->OverridingPriority = 0.00f;
    this->ActualPriority = 0.00f;
}


