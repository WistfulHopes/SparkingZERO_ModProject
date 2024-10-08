#include "KoratLevelSequenceInstanceData.h"

UKoratLevelSequenceInstanceData::UKoratLevelSequenceInstanceData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableLocation = true;
    this->bEnableRotation = true;
    this->bEnableScale = true;
    this->bEnablePostOverrideLocation = false;
    this->bEnablePostOverrideRotation = false;
    this->bEnablePostOverrideScale = false;
    this->TransformOriginComponent = NULL;
}

USceneComponent* UKoratLevelSequenceInstanceData::FindTransformOriginComponent(AActor* InParentActor, const FName& InComponentName, const FName& InSocketName) const {
    return NULL;
}


