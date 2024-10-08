#include "SSCharacterToonPointLightCtrlNative.h"

ASSCharacterToonPointLightCtrlNative::ASSCharacterToonPointLightCtrlNative(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ToonShadingMPC = NULL;
    this->PointLightCurve = NULL;
    this->LightControlSettingTableAtCameraSequence = NULL;
    this->DirectionalLightSettingTablePerLevel = NULL;
}

bool ASSCharacterToonPointLightCtrlNative::IsGameWorldRuntime() {
    return false;
}


