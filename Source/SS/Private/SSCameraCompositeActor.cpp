#include "SSCameraCompositeActor.h"

ASSCameraCompositeActor::ASSCameraCompositeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableAutoReloadAssetFile = true;
    this->bEnableAutoConvert = true;
    this->bEnableAutoHandyShakeConvert = false;
    this->bFixCameraSlot0 = false;
    this->bMenuCameraCompose = false;
    this->bDirtyForCompositePanel = true;
    this->bForceEvaluate = false;
    this->MenuCameraDirectorClass = NULL;
}


