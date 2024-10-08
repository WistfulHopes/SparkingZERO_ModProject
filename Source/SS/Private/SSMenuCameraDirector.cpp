#include "SSMenuCameraDirector.h"

ASSMenuCameraDirector::ASSMenuCameraDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhysicalDisparityDecayScales.AddDefaulted(12);
    this->PhysicalDisparityDecayHeightScales.AddDefaulted(12);
    this->PhysicalDisparityDecayWidthScales.AddDefaulted(12);
    this->SlotParameterStatic.AddDefaulted(10);
    this->bDebugPhysicalDisparityEnable = false;
    this->bDebugRelativeMode = false;
    this->bSetLocationFpsCameraLatAndFocusTargetFrameOnce = false;
    this->bAttachedFpsCameraLatAndFocusTarget = false;
}


