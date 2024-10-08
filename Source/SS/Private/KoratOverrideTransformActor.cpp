#include "KoratOverrideTransformActor.h"
#include "Components/SceneComponent.h"
#include "KoratDefaultIdData.h"

AKoratOverrideTransformActor::AKoratOverrideTransformActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("OverrideTransform"));
    this->IdDataInstance = CreateDefaultSubobject<UKoratDefaultIdData>(TEXT("IdData"));
    this->ReferenceActor = NULL;
    this->bOwnerSequencerDestroy = false;
    this->bPossessableObject = false;
    this->bNeedCheckAttachObjects = false;
    this->MyRootComponent = (USceneComponent*)RootComponent;
}


