#include "SSEventSceneLocator.h"
#include "Components/SceneComponent.h"

ASSEventSceneLocator::ASSEventSceneLocator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->SceneComponent = (USceneComponent*)RootComponent;
}


