#include "SSSlotParameter.h"

FSSSlotParameter::FSSSlotParameter() {
    this->bResetLag = false;
    this->bDisableReconnectManualCamera = false;
    this->IsDetourFirstCam = false;
    this->IsDetourFirstLat = false;
    this->IsTurnClock = false;
    this->bConnectOptionStartAutoDetourFirst = false;
    this->bConnectOptionEndAutoDetourFirst = false;
    this->IsStartAutoDetourEnable = false;
    this->StartAutoDetourLerpType = EBattleCameraDetourLerpType::None;
    this->IsEndAutoDetourEnable = false;
    this->EndAutoDetourLerpType = EBattleCameraDetourLerpType::None;
    this->bGoalCam = false;
    this->IsChaseStart = false;
    this->ChaseElapsedTimeMax = 0.00f;
    this->ChaseElapsedTime = 0.00f;
    this->bAfterImageCamPosBaked = false;
    this->bAfterImageLatPosBaked = false;
    this->LagConvergence = 0.00f;
    this->InertiaBlockRestTimeCam = 0.00f;
    this->InertiaBlockRestTimeLat = 0.00f;
    this->LastBlendTimeCam = 0.00f;
    this->LastBlendTimeLat = 0.00f;
    this->bAdditiveInputPreUpdatedPitch = false;
    this->bAdditiveInputPreUpdatedYaw = false;
    this->AdditiveInputEnable = false;
    this->bAdditiveInputNoNeutralMode = false;
    this->bAdditiveInputNoNeutralLock = false;
    this->AdditiveInputMode = ECameraAdditiveRotateInputMode::Normal;
    this->SecretHideForceVDisable = false;
    this->SecretHideForceHDisable = false;
    this->bDebugSecretHideBall = false;
    this->DebugSecretHideMinPitch = 0.00f;
    this->DebugSecretHideMinYaw = 0.00f;
    this->DebugSecretHideMaxPitch = 0.00f;
    this->DebugSecretHideMaxYaw = 0.00f;
    this->UpdateAdditiveRotateInputAvoidTerrainLockDirection = 0;
    this->UpdateAdditiveRotateInputAvoidTerrainLockDirectionCount = 0;
    this->RollScaleMax = 0.00f;
    this->DebugFixRollGoalReal = 0.00f;
}

