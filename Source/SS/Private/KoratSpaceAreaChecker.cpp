#include "KoratSpaceAreaChecker.h"
#include "Components/SceneComponent.h"

AKoratSpaceAreaChecker::AKoratSpaceAreaChecker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


