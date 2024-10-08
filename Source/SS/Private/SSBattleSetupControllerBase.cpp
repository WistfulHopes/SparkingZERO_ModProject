#include "SSBattleSetupControllerBase.h"

ASSBattleSetupControllerBase::ASSBattleSetupControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterDitherFadeInSec = 0.50f;
    this->CharacterDitherFadeOutSec = 0.50f;
    this->TeamMemberEntryDelaySec = 0.10f;
    this->bIsEnableCharaEntryCamera = false;
    this->IdleMotionChangeMinSec = 5.00f;
    this->IdleMotionChangeMaxSec = 8.00f;
    this->IdleMotionChangeCostumeChangedDelay = 0.10f;
    this->IdleMotionChangeNormalBackTransitionOffsetSec = 0.75f;
    this->PreviewMotionIdleKeepSec = 1.00f;
    this->PreviewToWaitTransitionOffset = 0.15f;
    this->PreviewCameraTurnSensitivity = 4.00f;
    this->PreviewCameraTurnInputAnalogThresholdMin = 0.40f;
    this->PreviewCameraTurnInputAnalogThresholdMax = 0.80f;
    this->PreviewCameraAnalogTurnSpeed = 120.00f;
    this->PreviewCameraZoomSensitivity = 0.10f;
    this->PreviewCameraAnalogZoomSpeed = 1.00f;
    this->PreviewCameraAnalogZoomEndSec = 0.20f;
    this->DbgIsAllTeamMemberEntry = true;
    this->DbgTeamMemberEntryIsStopUiAction = false;
    this->DbgTeamMemberEntryIsCancelAfterDelay = false;
    this->IdleMotionMLS = NULL;
    this->ExhibitionTeamMemberNumRestrict = 3;
    this->GuideWidget = NULL;
    this->SortFilterDialog = NULL;
    this->RollbackCharaReader = NULL;
    this->ManualCameraActor = NULL;
    this->rollbackBeforeCharacter = NULL;
    this->CurrentCharaSelectPlaceIndex = 0;
    this->BlindEffectSequenceActor = NULL;
    this->TeamTalkSequenceActor = NULL;
    this->TeamLightSequenceActor = NULL;
}

void ASSBattleSetupControllerBase::EffectBlindedSignal() {
}


