#include "KoratPoolableRebindActor.h"
#include "Components/SceneComponent.h"

AKoratPoolableRebindActor::AKoratPoolableRebindActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("OverrideTransform"));
    this->MyRootComponent = (USceneComponent*)RootComponent;
    this->bOwnerSequencerDestroy = false;
    this->bNeedCheckAttachObjects = false;
}


