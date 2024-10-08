#include "SSCharacterBulletTarget.h"
#include "Components/SphereComponent.h"

ASSCharacterBulletTarget::ASSCharacterBulletTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("DefaultSceneRoot"));
}


