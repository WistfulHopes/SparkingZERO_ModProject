#include "SSCutCameraActor.h"

ASSCutCameraActor::ASSCutCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShakeAssetID = 0;
    this->ShakeForceType = EShakeForceType::None;
    this->lifeTime = 0.00f;
    this->StartBlendTimeCam = 0.00f;
    this->StartBlendTimeLat = 0.00f;
    this->EndBlendTimeCam = 0.00f;
    this->EndBlendTimeLat = 0.00f;
    this->StartBlendFloatCurveCam = TEXT("Curve_BlendRateTypeDefault");
    this->StartBlendFloatCurveLat = TEXT("Curve_BlendRateTypeDefault");
    this->EndBlendFloatCurveCam = TEXT("Curve_BlendRateTypeDefault");
    this->EndBlendFloatCurveLat = TEXT("Curve_BlendRateTypeDefault");
    this->Priority = -1.00f;
    this->CameraSlot = 0;
    this->PhysicalDisparityType = ECameraPhysicalDisparityType::None;
    this->PhysicalDisparityDecayType = ECameraPhysicalDisparityDecayType::Normal;
    this->PhysicalDisparityDecayTypeHeight = ECameraPhysicalDisparityDecayType::Normal;
    this->PhysicalDisparityDecayTypeWidth = ECameraPhysicalDisparityDecayType::Normal;
    this->PhysicalDisparityAddHeightDecayScale = 0.00f;
    this->PhysicalDisparityCamAddLengthTargetDistance = 0.00f;
    this->PhysicalDisparityTargetType = ECameraPhysicalDisparityTargetType::Player;
    this->PhysicalDisparityTargetTypeSrc = ECameraLocatorTargetType::None;
    this->PhysicalDisparityTargetTypeDst = ECameraLocatorTargetType::None;
    this->PhysicalDisparityTargetWeightAddLength = 0.50f;
    this->PhysicalDisparityTargetWeightAddHeight = 0.50f;
    this->PhysicalDisparityTargetWeightAddWidth = 0.50f;
    this->bCameraRelativeMode = false;
    this->CameraRelativeModeTargetType = ECameraLocatorTargetType::None;
    this->CameraRelativeModeSocketType = ECameraLocatorSocketType::Null;
    this->bStartAutoDetourCamera = false;
    this->bEndAutoDetourCamera = false;
    this->bEndFilmbackDisable = false;
    this->bStartFilmbackDisable = false;
    this->FakeFocalLength = 0.00f;
    this->FakeEndInterpolationDistance = 0.00f;
    this->InterpolationProportion = 0.00f;
    this->DofBlurSizeNear = 0.00f;
    this->DofBlurSizeFar = 0.00f;
    this->DiaphragmBladeCount = 0;
    this->AvoidTerrainCamPosWidthScale = 8.00f;
    this->bDebugDrawUnderTerrain = false;
    this->bDrawDebugLine = false;
    this->DrawDebugLifetime = 0.00f;
    this->DrawDebugThickness = 0.00f;
}


void ASSCutCameraActor::SetManualBlendTime(float InBlendTimeCam, float InBlendTimeLat) {
}

bool ASSCutCameraActor::IsBakedLastParameter(bool InReverseTrack) {
    return false;
}

float ASSCutCameraActor::GetStartBlendTimeOrigin(bool InLookAtTarget, FString& OutDebugBlendProfile) {
    return 0.0f;
}

FString ASSCutCameraActor::GetStartBlendCurveNameOrigin(bool InLookAtTarget) {
    return TEXT("");
}

float ASSCutCameraActor::GetRestTimeInStartBlendNative(bool InLookAtTarget, bool InReverseTrack, int32 InSectionEndFrame, ASSCutCameraActor* InSrcCamera, bool InCinemaBlendZero) {
    return 0.0f;
}

float ASSCutCameraActor::GetRestTimeInStartBlendManual(bool InLookAtTarget, double InWorldTime, double InSequencerStartTime, ASSCutCameraActor* InSrcCamera, bool InCinemaBlendZero) {
    return 0.0f;
}

float ASSCutCameraActor::GetPhysicalDisparityTargetWeightAddWidth() {
    return 0.0f;
}

float ASSCutCameraActor::GetPhysicalDisparityTargetWeightAddLength() {
    return 0.0f;
}

float ASSCutCameraActor::GetPhysicalDisparityTargetWeightAddHeight() {
    return 0.0f;
}

float ASSCutCameraActor::GetManualBlendTime(bool InLookAtTarget, FString& OutDebugBlendProfile) {
    return 0.0f;
}

float ASSCutCameraActor::GetFovVertical(bool InNoViewportResolution) {
    return 0.0f;
}

float ASSCutCameraActor::GetFovHorizon() {
    return 0.0f;
}

float ASSCutCameraActor::GetEndBlendTimeOrigin(bool InLookAtTarget, FString& OutDebugBlendProfile) {
    return 0.0f;
}

FString ASSCutCameraActor::GetEndBlendCurveNameOrigin(bool InLookAtTarget) {
    return TEXT("");
}

float ASSCutCameraActor::GetElapsedTimeInStartBlendNative(bool InLookAtTarget, bool InReverseTrack, int32 InSectionEndFrame, ASSCutCameraActor* InSrcCamera, bool InCinemaBlendZero) {
    return 0.0f;
}

FSSCameraLastParameter ASSCutCameraActor::GetBakedParameter() {
    return FSSCameraLastParameter{};
}

void ASSCutCameraActor::BakeLastParameter(bool InReverseTrack, bool InForceBake) {
}


