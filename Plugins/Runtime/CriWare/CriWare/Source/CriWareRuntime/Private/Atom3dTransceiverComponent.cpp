#include "Atom3dTransceiverComponent.h"

UAtom3dTransceiverComponent::UAtom3dTransceiverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputPoint = NULL;
    this->bIsInputCrossfadeFieldDebugSpheresVisible = false;
    this->DefaultDirectAudioRadius = 0.00f;
    this->DefaultCrossfadeDistance = 0.00f;
}


