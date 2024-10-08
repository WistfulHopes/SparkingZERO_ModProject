#include "SSNewBattleCameraDirector.h"

ASSNewBattleCameraDirector::ASSNewBattleCameraDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhysicalDisparityDecayScales.AddDefaulted(12);
    this->PhysicalDisparityDecayHeightScales.AddDefaulted(12);
    this->PhysicalDisparityDecayWidthScales.AddDefaulted(12);
    this->SlotParameterStatic.AddDefaulted(10);
    this->bCancelConnectIdleCamera = true;
    this->CancelConnectLongBlendRestTime = 1.00f;
    this->TurnStartRateCam = 0.20f;
    this->TurnEndRateCam = 0.80f;
    this->TurnCenterEndRateLat = 0.20f;
    this->TurnStartRateLat = 0.80f;
    this->TurnEndRateLat = 1.00f;
    this->ZBurstTypeLat = ELerpType::EaseInOut;
    this->ZBurstExpLat = 0.50f;
    this->ZBurstPositionRateLat = 0.50f;
    this->ZBurstNoSkipRate = false;
    this->ZBurstChaseRange = 1500.00f;
    this->ZBurstChaseTime = 0.50f;
    this->ZBurstTypeCam = ELerpType::EaseInOut;
    this->ZBurstExpCam = 2.00f;
    this->bZBurstArrivalSecondEnable = false;
    this->ZBurstArrivalSecond = 0.20f;
    this->ZBurstArrivalSecondMin = 0.10f;
    this->bZBurstArrived = false;
    this->SwingTypeCam = ELerpType::EaseInOut;
    this->SwingBlendRateCamFirst = 0.50f;
    this->SwingExpCam = 2.00f;
    this->SwingTypeLat = ELerpType::EaseOut;
    this->SwingExpLatFirst = 4.00f;
    this->SwingExpLatSecond = 20.00f;
    this->SwingCenterRateLat = 0.00f;
    this->SwingBackTypeCam = ELerpType::EaseOut;
    this->SwingBackExpCam = 20.00f;
    this->bNewRollArgorizm = true;
    this->bDisablePlayerHorizonCam = false;
    this->DisablePlayerHorizonCamDelayReleaseTime = 0.00f;
    this->PlayerHorizonRoll = 0.00f;
    this->DebugPlayerHorizonRoll = false;
    this->bRollHorizonActionsEnable = true;
    this->bRollIgnoreActionsEnable = true;
    this->AdjustVEnable = false;
    this->AdjustVCompMode = ECameraAdjustCompMode::PLAYER;
    this->AdjustVSplitRateU = 0.00f;
    this->AdjustVSplitRateD = 1.10f;
    this->AdjustVSplitLengthMax = 0.00f;
    this->AdjustSafePositionEnable = true;
    this->AdjustBackEnable = true;
    this->AdjustBackNearLength = 300.00f;
    this->AdjustHEnable = false;
    this->AdjustHCompMode = ECameraAdjustCompMode::PLAYER;
    this->AdjustHSplitRateL = 0.00f;
    this->AdjustHSplitRateR = 1.00f;
    this->AdjustHSplitLengthMax = 0.00f;
    this->DebugAdjustAfter = false;
    this->DebugAdjustSplitLine = false;
    this->DebugRushEventEnable = false;
    this->DebugTraceSpline = false;
    this->LastConnectedPairBlendRate = 0.00f;
    this->bDebugTargetActorDisplay = false;
    this->bDebugDetourLine = false;
}

void ASSNewBattleCameraDirector::SetTargetPawnAll(ASSCharacter* InPawn) {
}

void ASSNewBattleCameraDirector::SetMyPawnAll(ASSCharacter* InPawn) {
}

void ASSNewBattleCameraDirector::OnSetActionCamera(ASSCharacter* InCharacter, ESSSetActionCameraType InSetType, const FSSActionCameraParameterData& InActionCameraParameter) {
}

bool ASSNewBattleCameraDirector::IsPriorityOK(ASSCutCameraActor* InSrcCamera, ASSNewBattleCameraActor* InDstCamera, FSSActionCameraParameterData InActionCameraParameter, bool InForce) {
    return false;
}

bool ASSNewBattleCameraDirector::HasTargetPawnAll() {
    return false;
}

bool ASSNewBattleCameraDirector::HasMyPawnAll() {
    return false;
}

ASSNewBattleCameraActor* ASSNewBattleCameraDirector::GetBattleCamera(ENewBattleCameraType InType) {
    return NULL;
}

void ASSNewBattleCameraDirector::DebugConnectBattleCamera(ENewBattleCameraType InSetType, float InLerpTime) {
}

void ASSNewBattleCameraDirector::ConnectBattleCamera(ECameraGlobalSlot InSlot, ASSCutCameraActor* InSrcCamera, ASSNewBattleCameraActor* InDstCamera, FSSActionCameraParameterData InActionCameraParameter, bool InInitialize, float InLagCovergence) {
}

void ASSNewBattleCameraDirector::AddManualCamera(ENewBattleCameraType InType, FSSManualCameraInfo& manualCameraInfo) {
}


