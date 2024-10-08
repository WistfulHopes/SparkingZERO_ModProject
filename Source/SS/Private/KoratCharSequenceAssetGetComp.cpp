#include "KoratCharSequenceAssetGetComp.h"

UKoratCharSequenceAssetGetComp::UKoratCharSequenceAssetGetComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InstanceData = NULL;
    this->CurrentTimelineType = EKoratFreeTimelineType::None;
}


