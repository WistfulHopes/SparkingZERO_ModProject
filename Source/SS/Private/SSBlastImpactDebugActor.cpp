#include "SSBlastImpactDebugActor.h"
#include "Components/SphereComponent.h"

ASSBlastImpactDebugActor::ASSBlastImpactDebugActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    this->bShouldTickIfViewportsOnly = true;
    this->ArrowComponentRoot = NULL;
    this->ArrowComponentTip = NULL;
    this->ArrowComponentTime = NULL;
    this->SpriteComponent = NULL;
    this->SphereComponent = (USphereComponent*)RootComponent;
}


