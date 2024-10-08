#include "SSCutCameraDirector.h"
#include "Components/SceneComponent.h"

ASSCutCameraDirector::ASSCutCameraDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->DirectorID = 0;
    this->PlayerControllerID = 0;
    this->MainCameraViewSlot = ECameraGlobalSlot::MAIN_SLOT;
    this->LagWeightPosToAng = 0.50f;
    this->bLagPosEnable = false;
    this->bLagPosLimitEnable = true;
    this->LagPosLimitFront = 1000.00f;
    this->LagPosLimitBack = 200.00f;
    this->LagPosLimitRight = 250.00f;
    this->LagPosLimitUp = 250.00f;
    this->LagPosSpeedMax = 1000.00f;
    this->LagPosSpeedMin = 100.00f;
    this->LagPosMaxDistance = 100.00f;
    this->LagPosMinDistance = 10.00f;
    this->LagPosLerpType = ELerpType::Linear;
    this->LagPosLerpExp = 2.00f;
    this->bCentrifugalForceAccumlator = false;
    this->CentrifugalForceAccumlatorMin = 5.00f;
    this->CentrifugalForceAccumlatorMax = 30.00f;
    this->CentrifugalForceAccumlatorDecayRate = 0.90f;
    this->CentrifugalForceAccumlatorScale = 50.00f;
    this->PrevMaxPosSpeed = 100000.00f;
    this->bLagCamRollEnable = true;
    this->DelayPitchCamEnable = false;
    this->DelayPitchSpeedMaxCam = 0.00f;
    this->bLagLatPosEnable = false;
    this->EnableNewLagLatPos = true;
    this->bLagFilmbackScale = true;
    this->bLagFilmbackScaleDelayCam = false;
    this->LagLatPosCalibrationFov = 60.00f;
    this->LagLatPosCalibrationLength = 1000.00f;
    this->LagLatPosCalibrationLengthW = 1000.00f;
    this->LagLatPosCalibrationNowLength = 0.00f;
    this->LagLatPosCalibrationSpeed = 6000.00f;
    this->FovLimitAngleLatNear = 0.00f;
    this->FovLimitAngleLatFar = 15.00f;
    this->FovLimitAngleLatNearRange = 600.00f;
    this->FovLimitAngleLatFarRange = 1500.00f;
    this->DebugFovLimitAngleLat = false;
    this->LagLatPosMaxDistance = 1000.00f;
    this->LagLatPosMinDistance = 100.00f;
    this->LagLatPosSpeedMax = 10000.00f;
    this->LagLatPosSpeedMin = 400.00f;
    this->LagLatSpeedBlendRate = 0.00f;
    this->PrevMaxLatPosSpeed = 30000.00f;
    this->DelayRollCamRate = 0.20f;
    this->bRollMaxScaleCamEnable = true;
    this->RollMaxScaleCam = 1.00f;
    this->bNewFilmbackArgorizm = false;
    this->bDebugVirtualFrame = false;
    this->bCalcAdjustSplitHVBaseCut = true;
    this->bCalcAdjustSplitHVDelayCut = true;
    this->bCalcAdjustSplitHVAfterLagScale = false;
    this->DebugNormalShakeScale = 1.00f;
    this->DebugHandyShakeScale = 1.00f;
    this->bDebugHandyShakeInGameOnly = true;
    this->DebugShakeForceShape = false;
    this->bForceShakeManual = true;
    this->bDrawDebugLine = false;
    this->bDrawDebugLineWithCamera = false;
    this->DrawDebugLifetime = 0.00f;
    this->DrawDebugThickness = 1.00f;
    this->DebugNoizeCheckLength = 0.00f;
    this->DebugNoizeCheckLagBaseWeightLength = 0.00f;
    this->CameraManagerLocal = NULL;
    this->CameraManagerHandyLocal = NULL;
    this->bAdditiveInputAngularVelocityInertia = false;
    this->AdditiveInputAngularVelocityInertiaNoNeutralModeDecayScale = 0.75f;
    this->AnimePersComponent = NULL;
    this->PhysicalDisparityDecayScales.AddDefaulted(12);
    this->PhysicalDisparityDecayHeightScales.AddDefaulted(12);
    this->PhysicalDisparityDecayWidthScales.AddDefaulted(12);
    this->bEnablePhysicalDisparityCamAddTargeDistanceAuto = false;
    this->bEnablePhysicalDisparityCamAddHeightAssumptionHeightScaleAuto = false;
    this->bDebugPhysicalDisparity = false;
    this->DebugPhysicalDisparityAddCamLength = 0.00f;
    this->DebugPhysicalDisparityAddFocalLength = 0.00f;
    this->SecondBlend = true;
    this->SecondMutiBlend = false;
    this->bEnableNewSubSlotArgorizm = true;
    this->SlotParameterStatic.AddDefaulted(10);
}

void ASSCutCameraDirector::UpdateMainCamera(ECameraGlobalSlot InSlot, const FSSCutCameraBlendFactor& InBlendFactor, float InDeltaTime, double InWorldTime) {
}

void ASSCutCameraDirector::UpdateBlendSecond(float InDeltaTime, ECameraGlobalSlot InSlot, const TArray<FSSCutCameraBlendFactor> InBlendFactors, float InBlendRate, ESSCutCameraBlendRateType InBlendRateType, ESSCutCameraBlendLineType InBlendLineType, FSSCutCameraBlendFactor& OutBlendFactor, const double InWorldTime) {
}

void ASSCutCameraDirector::UpdateBlend(float InDeltaTime, ECameraGlobalSlot InSlot, ESSCutCameraBlendRateType InBlendRateType, ESSCutCameraBlendLineType InBlendLineType, const FSSCameraConnectedQueue& connectedQueue, TArray<FSSCutCameraBlendFactor>& OutSecondBlendFactors, float& OutSecondBlendRate, double InWorldTime) {
}


void ASSCutCameraDirector::SetPlayerControllerID(int32 InPlayerControllerID) {
}

void ASSCutCameraDirector::SetManualCamera(ASSCutCameraActor* InCameraInstance) {
}

void ASSCutCameraDirector::SetMainCameraViewSlot(ECameraGlobalSlot InSlot) {
}

void ASSCutCameraDirector::SetForcePriorityDownDelay(ECameraGlobalSlot InSlot) {
}

void ASSCutCameraDirector::SetForcePriorityDown(ECameraGlobalSlot InSlot) {
}

void ASSCutCameraDirector::ResetSlot(ECameraGlobalSlot InSlot, bool InResetLag) {
}

void ASSCutCameraDirector::ReleaseLookAtTargetToPool(const int32 InLookAtTargetHandle) {
}

void ASSCutCameraDirector::ReleaseLookAtTargetLocatorToPool(const int32 InLookAtTargetLocatorHandle) {
}

void ASSCutCameraDirector::ReleaseFocusTargetToPool(const int32 InFocusTargetHandle) {
}

void ASSCutCameraDirector::ReleaseCameraToPool(const int32 InCameraHandle, const ECameraType InCameraType) {
}

void ASSCutCameraDirector::ReleaseCameraManagerToPool(const int32 InCameraManagerHandle) {
}

void ASSCutCameraDirector::ReleaseCameraLocatorToPool(const int32 InCameraLocatorHandle) {
}

void ASSCutCameraDirector::ReleaseBindingOriginToPool(const int32 InBindingOriginHandle) {
}

void ASSCutCameraDirector::ReconnectManualCamera(ECameraGlobalSlot InSlot, float InLerpTimeCam, float InLerpTimeLat) {
}

void ASSCutCameraDirector::OnPlayShakeGlobal(int32 InShakeAssetIDOrigin, ASSCameraManager* InCameraManager) {
}

ASSCutCameraActor* ASSCutCameraDirector::OnNewCameraFromPool_Implementation(const ECameraType InCameraType) {
    return NULL;
}

bool ASSCutCameraDirector::IsSecondBlend() {
    return false;
}

bool ASSCutCameraDirector::IsMyDirector(int32 InRootPlayerControllerID) {
    return false;
}

bool ASSCutCameraDirector::IsDisableReconnectManualCamera(ECameraGlobalSlot InSlot) {
    return false;
}

int32 ASSCutCameraDirector::GetPlayerControllerID() {
    return 0;
}

ASSLookAtTargetLocator* ASSCutCameraDirector::GetNewLookAtTargetLocatorFromPool(const ELookAtTargetLocatorType InLookAtTargetLocatorType) {
    return NULL;
}

ASSLookAtTargetActor* ASSCutCameraDirector::GetNewLookAtTargetFromPool(const ELookAtTargetType InLookAtTargetType) {
    return NULL;
}

ASSFocusTargetActor* ASSCutCameraDirector::GetNewFocusTargetFromPool(const EFocusTargetType InFocusTargetType) {
    return NULL;
}

ASSCameraManager* ASSCutCameraDirector::GetNewCameraManagerFromPool(bool InDontIncrease) {
    return NULL;
}

ASSCutCameraLocator* ASSCutCameraDirector::GetNewCameraLocatorFromPool(const ECameraLocatorType InCameraLocatorType) {
    return NULL;
}

ASSBindingOriginActor* ASSCutCameraDirector::GetNewBindingOriginFromPool() {
    return NULL;
}

ASSCutCameraActor* ASSCutCameraDirector::GetManualCamera() {
    return NULL;
}

ECameraGlobalSlot ASSCutCameraDirector::GetMainCameraViewSlot() {
    return ECameraGlobalSlot::MAIN_SLOT;
}

ASSCutCameraActor* ASSCutCameraDirector::GetMainCamera(ECameraGlobalSlot InSlot) {
    return NULL;
}

ASSCutCameraActor* ASSCutCameraDirector::GetLastConnectedCamera(ECameraGlobalSlot Slot) {
    return NULL;
}

float ASSCutCameraDirector::GetLastConnectedBlendTime(bool InLookAtTarget, ECameraGlobalSlot InSlot, FString& OutDebugBlendProfile, FSSCameraConnectOption& OutCameraConnectOption) {
    return 0.0f;
}

bool ASSCutCameraDirector::GetLastConnected(ECameraGlobalSlot Slot, FSSCameraConnected& OutLastConnected) {
    return false;
}

float ASSCutCameraDirector::GetLastBlendRate(ECameraGlobalSlot Slot, double InWorldTime, float& OutDecayRateCam, float& OutDecayRateLat, FVector& OutFilmbackScale) {
    return 0.0f;
}

int32 ASSCutCameraDirector::GetDirectorID() {
    return 0;
}

int32 ASSCutCameraDirector::GetConnectedQueueMax(ECameraGlobalSlot InCameraSlot) {
    return 0;
}

FSSCameraConnectedQueue ASSCutCameraDirector::GetConnected(ECameraGlobalSlot Slot) {
    return FSSCameraConnectedQueue{};
}

void ASSCutCameraDirector::EnableSecondBlend(bool InSecondBlend) {
}

void ASSCutCameraDirector::EmptyConnectReadyQueue() {
}

void ASSCutCameraDirector::DisconnectSlotOld(ECameraGlobalSlot InSlot) {
}

void ASSCutCameraDirector::DisconnectManualCamera(FSSCameraConnected& OutConnectedCamera, double InWorldTime, float InLerpTimeCam, float InLerpTimeLat) {
}

void ASSCutCameraDirector::DisconnectFadeCamera(ECameraGlobalSlot InSlot, double InWorldTime, const float InLerpTimeCam, const float InLrepTimeLat) {
}

void ASSCutCameraDirector::DisconnectAllOneDelayPostPhysics() {
}

void ASSCutCameraDirector::DisconnectAllOne() {
}

void ASSCutCameraDirector::DisconnectAll() {
}

void ASSCutCameraDirector::DisableReconnectManualCameraAllSlot(bool InDisable) {
}

void ASSCutCameraDirector::DisableReconnectManualCamera(ECameraGlobalSlot InSlot, bool InDisable) {
}

void ASSCutCameraDirector::DebugSetViewTargetToManual(const bool InEnable) {
}

void ASSCutCameraDirector::ConnectManualCamera(ECameraGlobalSlot InSlot, double InWorldTime) {
}

void ASSCutCameraDirector::ConnectLatentCamera(ECameraType InCameraType, ECameraGlobalSlot InCameraSlot, double InSequencerStartTime, int32 InSectionStartFrameOrigin, int32 InSectionEndFrameOrigin, bool InReverseTrack) {
}

void ASSCutCameraDirector::ConnectCamera(ASSCutCameraActor* InCameraInstance, ECameraType InCameraType, ECameraGlobalSlot InCameraSlot, bool InForce, double InSequencerStartTime, int32 InSectionStartFrame, int32 InSectionEndFrameCam, int32 InSectionEndFrameLat, bool InReverseTrack, double InDebugWorldTime, bool InThirdCameraCancel, ERootDirectorReconnectPriorityType InReconnectPriorityType) {
}

void ASSCutCameraDirector::CheckReconnectManualCamera(ECameraGlobalSlot Slot, const double InWorldTime) {
}

void ASSCutCameraDirector::CheckLatentConnected(ECameraGlobalSlot Slot, const double InWorldTime) {
}


