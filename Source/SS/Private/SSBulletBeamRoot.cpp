#include "SSBulletBeamRoot.h"
#include "Components/SceneComponent.h"

ASSBulletBeamRoot::ASSBulletBeamRoot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootCompo"));
    this->RootCompo = (USceneComponent*)RootComponent;
}


