#include "KoratBattleSetupCommonDataAsset.h"

UKoratBattleSetupCommonDataAsset::UKoratBattleSetupCommonDataAsset() {
    this->CharaChangeFadeoutDelaySec = 0.10f;
    this->CharaChangeFadeoutDelaySecFromOutRangeCamera = 0.15f;
    this->SoundIdCustomizePlayerTypeChange = 1005;
    this->TeamLightSeaquenceDelaySec = 0.25f;
    this->TeamLightSeaquenceCharaSelectCameraDelaySec = 0.50f;
    this->CharacterDitherFadeInSec = 0.50f;
    this->CharacterDitherFadeOutSec = 0.50f;
    this->TeamMemberEntryDelaySec = 0.10f;
    this->IdleMotionChangeMinSec = 5.00f;
    this->IdleMotionChangeMaxSec = 8.00f;
    this->IdleMotionChangeCostumeChangedDelay = 0.10f;
    this->IdleMotionChangeNormalBackTransitionOffsetSec = 0.75f;
    this->PreviewMotionIdleKeepSec = 1.00f;
    this->PreviewToWaitTransitionOffset = 0.15f;
    this->PreviewCameraTurnSensitivity = 4.00f;
    this->PreviewCameraAnalogTurnSpeed = 120.00f;
    this->PreviewCameraZoomSensitivity = 0.10f;
    this->PreviewCameraAnalogZoomSpeed = 1.00f;
    this->PreviewCameraAnalogZoomEndSec = 0.20f;
    this->DbgIsAllTeamMemberEntry = true;
    this->DbgTeamMemberEntryIsStopUiAction = false;
    this->DbgTeamMemberEntryIsCancelAfterDelay = false;
    this->IdleMotionMLS = NULL;
    this->ExhibitionTeamMemberNumRestrict = 3;
    this->SyncCharacterToFadeDelaySec = 0.20f;
    this->SyncCharacterFadeOutSec = 0.50f;
    this->SyncCharacterFadeInSec = 0.50f;
    this->DefaultBuildupItemUnlockNum = 7;
    this->OnlineOpponentTeamingSyncInterval = 1.00f;
    this->CharaSelectEntrySequence = NULL;
    this->CharaSelectEntrySequenceLP = NULL;
    this->CharaSelectEntrySequenceLPEmoteBack = NULL;
    this->CharaSelectEntrySequenceLPEmoteEndBack = NULL;
    this->CharaSelectStandSequence = NULL;
    this->CharaSelectStandNonInterpolationSequence = NULL;
    this->CharaSelectWaitChange = NULL;
    this->CharaTopEntrySequence = NULL;
    this->CharaLeaveSequence = NULL;
    this->NoEffectStandSequence = NULL;
    this->WaistAdjustOffsetCameraInterpolateCurve = NULL;
    this->CameraFocusTransformInterpolateCurve = NULL;
    this->CameraFocusTransformInterpolateSec = 0.00f;
    this->TestMaxDP = 0;
}


