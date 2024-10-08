#include "KoratCompositeTimeRate.h"
#include "Components/SceneComponent.h"

AKoratCompositeTimeRate::AKoratCompositeTimeRate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->CompositeTimeRate = 1.00f;
    this->ValueReset = false;
}


