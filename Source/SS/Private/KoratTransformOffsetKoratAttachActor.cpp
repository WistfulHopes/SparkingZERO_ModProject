#include "KoratTransformOffsetKoratAttachActor.h"

AKoratTransformOffsetKoratAttachActor::AKoratTransformOffsetKoratAttachActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOwnerSequencerDestroy = false;
    this->bNeedCheckAttachObjects = false;
}


