#include "SSBattleSetupController.h"

ASSBattleSetupController::ASSBattleSetupController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentTeamDPOver = FText::FromString(TEXT("Team's DP exceeds limit."));
    this->OpponentTeamDPOver = FText::FromString(TEXT("Opposing team's DP exceeds limit."));
    this->BackToTitleText = FText::FromString(TEXT("Return to Title Screen"));
    this->bIsEnableCustomizeCharaEntryCamera = false;
    this->MenuGeneralDialog = NULL;
    this->BattleSetupCharaListWidget = NULL;
    this->NewTopMenuWidget1P = NULL;
    this->NewTopMenuWidget2P = NULL;
    this->OnlineOpponentTeaming = NULL;
    this->TopMenuButtonSetWidget = NULL;
    this->PlayerLabelWidget = NULL;
    this->TrainingWidget = NULL;
    this->CustomizeTopMenuWidget = NULL;
    this->CustomizeCommonItemMenuWidget = NULL;
    this->CustomizeBuildupStatusUiWidget = NULL;
    this->CustomizeBuildupStatusUiFromCharaSelectWidget = NULL;
    this->CustomizeBuildupItemMySetWidget = NULL;
    this->CustomizeCostumeMenuWidget = NULL;
    this->CustomizeDirectionMenuWidget = NULL;
    this->CustomizeAppealMenuWidget = NULL;
    this->CustomizeFusionItemMenuWidget = NULL;
    this->CustomizeBgmMenuWidget = NULL;
    this->CustomizeAiMenuWidget = NULL;
    this->CustomizeAiDescriptionWidget = NULL;
    this->CharaSelectTeamListWidget = NULL;
    this->Notify1PWidget = NULL;
    this->Notify2PWidget = NULL;
    this->TopVsWidget = NULL;
    this->TimerUi = NULL;
    this->WaitDialog = NULL;
    this->CharaNameWidget = NULL;
    this->TransformWidget = NULL;
    this->SkillListWidget = NULL;
    this->CustomizeCharaNameWidget = NULL;
    this->FormSelectWindow = NULL;
    this->OnlineTeamPublicSettingUi = NULL;
    this->TeamingMySetWidget = NULL;
    this->RegulationList = NULL;
    this->OptionController = NULL;
    this->PreviewCharacterItemEquipment = NULL;
    this->ActionListController = NULL;
    this->BattleModeNSRHighScoreManager = NULL;
}

void ASSBattleSetupController::UpdateCameraAttachTransform() {
}

void ASSBattleSetupController::SetStageSelectCharacterHidden(bool bInHidden) {
}

void ASSBattleSetupController::ChangeHoldButtonProgress(USSMenuButton* InButton, float InProgress) {
}

void ASSBattleSetupController::ChangeEnableCombindButtonContents(USSMenuButton* InHitButton, int32 InDataIndex) {
}

void ASSBattleSetupController::ChangeEnableCombindButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void ASSBattleSetupController::ChangeCustomDirButtonContents(USSMenuButton* InHitButton, int32 InDataIndex) {
}

void ASSBattleSetupController::ChangeCustomDirButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void ASSBattleSetupController::ChangeCharaIconButton(USSRemoteButton* InButton, int32 InDataIndex) {
}

void ASSBattleSetupController::ChangeBuildupItemIconButton(USSMenuButton* InHitButton, USSRemoteButton* InButton, int32 InDataIndex) {
}

void ASSBattleSetupController::ChangeBgmItemIconButton(USSRemoteButton* InButton, int32 InDataIndex) {
}

void ASSBattleSetupController::ChangeAppealButtonContents(USSMenuButton* InHitButton, int32 InDataIndex) {
}

void ASSBattleSetupController::ChangeAppealButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void ASSBattleSetupController::ChangeAiTypeButtonContents(USSMenuButton* InHitButton, int32 InDataIndex) {
}

void ASSBattleSetupController::ChangeAiTypeButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void ASSBattleSetupController::BattleSetting() {
}


