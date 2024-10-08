#include "SSStageSelectController.h"

ASSStageSelectController::ASSStageSelectController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StageSelectShakeBlendStartTime = 0.50f;
    this->StageSelectShakeBlendEndTime = 0.50f;
    this->StageSelectStopShakeBlendStartTime = 0.50f;
    this->StageSelectStopShakeBlendEndTime = 0.50f;
    this->StartUIFadeSecond = 0.50f;
    this->StagePreviewChangeDelaySecond = 0.10f;
    this->TimeLimitDefaultSetting = EKoratTimeLimitType::NoLimit;
    this->AllComLevelDefaultSetting = EKoratAllComLevelSetting::None;
    this->AllCombineDefaultSetting = EKoratCommonOnOffType::None;
    this->AllFormChangeDefaultSetting = EKoratCommonOnOffType::None;
    this->SwitchDefaultSetting = EKoratCommonOnOffType::ON;
    this->FlyDefaultSetting = EKoratCommonOnOffType::ON;
    this->OutFieldDefaultSetting = EKoratCommonOnOffType::OFF;
    this->BattleRuleDefaultSetting = EKoratBattleOfflineMode::TeamBattle;
    this->BattleMemberRuleDefaultSetting = EKoratBattleMemberRule::Team;
    this->ExhibitionDefaultTimeLimit = EKoratTimeLimitType::LimitSec240;
    this->ExhibitionDefaultBattleRule = EKoratBattleOfflineMode::TeamBattle;
    this->ExhibitionDefaultBattleMemberRule = EKoratBattleMemberRule::Team;
    this->ExhibitionDefaultPowerupItem = EKoratCommonOnOffType::OFF;
    this->ExhibitionDefaultOutField = EKoratCommonOnOffType::OFF;
    this->ExhibitionDefaultComLevel = EKoratAllComLevelSetting::Middle;
    this->ClassWaitDialog = NULL;
    this->ClassStageListWidget = NULL;
    this->ClassStageNameWidget = NULL;
    this->ClassPageChangeWidget = NULL;
    this->ClassBgmListWidget = NULL;
    this->ClassRuleListWidget = NULL;
    this->GuideWidget = NULL;
    this->MenuGeneralDialog = NULL;
    this->WaitDialog = NULL;
    this->StageListWidget = NULL;
    this->StageNameWidget = NULL;
    this->PageChangeWidget = NULL;
    this->BgmListWidget = NULL;
    this->RuleListWidget = NULL;
    this->FaderHUD = NULL;
    this->TimerUi = NULL;
    this->ManualCameraActor = NULL;
    this->StagePreviewPlayer = NULL;
    this->CriMediaPlayer = NULL;
}

void ASSStageSelectController::UpdateCameraAttachTransform() {
}

void ASSStageSelectController::ChangeStageListButtonContents(USSMenuButton* InHitButton, int32 InDataIndex) {
}

void ASSStageSelectController::ChangeStageListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void ASSStageSelectController::ChangeRuleListButtonContents(USSMenuButton* InHitButton, int32 InDataIndex) {
}

void ASSStageSelectController::ChangeRuleListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void ASSStageSelectController::ChangeBgmListButton(USSRemoteButton* InButton, int32 InDataIndex) {
}


