#include "SSRootCameraDirector.h"

ASSRootCameraDirector::ASSRootCameraDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhysicalDisparityDecayScales.AddDefaulted(12);
    this->PhysicalDisparityDecayHeightScales.AddDefaulted(12);
    this->PhysicalDisparityDecayWidthScales.AddDefaulted(12);
    this->SlotParameterStatic.AddDefaulted(10);
    this->bZeroFrameCamera = false;
    this->BaseLerpWarpLatEternal = true;
    this->BaseLerpTime = 0.50f;
    this->ForceBaseLerpTime = false;
    this->DetourUseAfterImagePos = true;
    this->ForceDetour = false;
    this->bDetourNewArgorizm = true;
    this->DetourCircleBendRate = 0.50f;
    this->DetourCircleDivNum = 16.00f;
    this->DetourCircleRadiusMin = 200.00f;
    this->DetourStartRateCam = 0.20f;
    this->DetourEndRateCam = 0.80f;
    this->DetourCenterEndRateLat = 0.20f;
    this->DetourStartRateLat = 0.80f;
    this->DetourEndRateLat = 1.00f;
    this->bShakeCamRange = true;
    this->ShakeNearCamRange = 1000.00f;
    this->ShakeFarCamRange = 5000.00f;
    this->ShakeNearCamRangeScaleMax = 1.00f;
    this->ShakeFarCamRangeScaleMax = 0.00f;
    this->bDrawDebugShakeCamRange = false;
}

bool ASSRootCameraDirector::IsWatchEnemyCamera() {
    return false;
}

bool ASSRootCameraDirector::IsForceConnectedDirectorMainCamera() {
    return false;
}

bool ASSRootCameraDirector::GetWatchMenuCameraSlot(ECameraGlobalSlot& OutSlot) {
    return false;
}

float ASSRootCameraDirector::GetLastReconnectedBlendTime(bool InLookAtTarget, ASSCutCameraDirector* InDstDirector, ECameraGlobalSlot InDstSlot, FString& OutDebugBlendProfile, FSSCameraConnectOption& OutCameraConnectOption, ASSCutCameraDirector* InSrcDirector, ECameraGlobalSlot InSrcSlot) {
    return 0.0f;
}

void ASSRootCameraDirector::ForceDisconnectDirectorMainCamera() {
}

void ASSRootCameraDirector::ForceDisableHandyShakeManualAll(bool InDisable) {
}

void ASSRootCameraDirector::ForceConnectDirectorMainCamera(EForceConnectDirectorMainCameraType InForceConnectDirectorMainCameraType, int32 InPlayerConotrollerID, ECameraGlobalSlot InSlot, float InLerpTimeCam, float InLerpTimeLat) {
}

void ASSRootCameraDirector::ConnectDirectorMainCamera(ECameraGlobalSlot InSlot, ASSCutCameraDirector* InDirector, float InLerpTime) {
}

void ASSRootCameraDirector::CheckReconnectDirectorMainCamera(double InWorldTime) {
}

bool ASSRootCameraDirector::CheckForceConnectDirectorMainCamera(double InWorldTime) {
    return false;
}

void ASSRootCameraDirector::AddReconnectDirector(ASSCutCameraDirector* InDirector) {
}


