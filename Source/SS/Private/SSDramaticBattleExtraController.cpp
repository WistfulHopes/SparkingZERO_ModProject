#include "SSDramaticBattleExtraController.h"

ASSDramaticBattleExtraController::ASSDramaticBattleExtraController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDebugCharaSelectEnable = false;
    this->bIsOpeningLevelSequenceTest = false;
    this->TimeLimitDefaultSetting = EKoratTimeLimitType::NoLimit;
    this->AllCombineDefaultSetting = EKoratCommonOnOffType::None;
    this->AllFormChangeDefaultSetting = EKoratCommonOnOffType::None;
    this->SwitchDefaultSetting = EKoratCommonOnOffType::ON;
    this->FlyDefaultSetting = EKoratCommonOnOffType::ON;
    this->OutFieldDefaultSetting = EKoratCommonOnOffType::OFF;
    this->TopListUiActor = NULL;
    this->MenuGeneralDialog = NULL;
    this->ReportDialog = NULL;
    this->CameraAttachRootActor = NULL;
    this->ManualCameraActor = NULL;
    this->choiceUI = NULL;
    this->ExTopUi = NULL;
    this->BattleSummuryUi = NULL;
    this->BattleSummuryUi2 = NULL;
    this->DramaticTopUi = NULL;
    this->DramaticTitleUi = NULL;
    this->DramaticSummaryUi = NULL;
    this->ExTopButtonSet = NULL;
    this->ExTopTabSet = NULL;
    this->ExTopBattleList = NULL;
    this->ExTopLeftWindow = NULL;
    this->ExTopRightWindow = NULL;
    this->SelectedBattleData = NULL;
    this->MaterialInstancePrimaryColor = NULL;
    this->BgImageStaticMeshActorPrimaryColor = NULL;
    this->MaterialInstanceHologramTexture = NULL;
    this->BgImageStaticMeshActorHologramTexture = NULL;
    this->BgImageStaticMeshActorMonitorSphere = NULL;
    this->CameraActor = NULL;
    this->EditTopInfo = NULL;
    this->EditTopMenu = NULL;
    this->EditCharaSettingUi = NULL;
    this->EditOpeningUi = NULL;
    this->EditSummaryImageUi = NULL;
    this->EditSummaryTextUi = NULL;
    this->EditSummayTabUi = NULL;
    this->EditSummaryHedderUi = NULL;
    this->EditDirectionUi = NULL;
    this->EditDirectionDetailUi = NULL;
    this->BattleSetupCharaListWidget = NULL;
    this->EditEndingUi = NULL;
    this->EditRuleUi = NULL;
    this->GuideWidget = NULL;
    this->TransitionWidget = NULL;
    this->EditModeFilterWidget = NULL;
    this->FaderHUD = NULL;
    this->ringMEnuUi = NULL;
    this->DramaticListUI = NULL;
    this->SideButtonSetUI = NULL;
    this->BattleDataDisplayUI = NULL;
    this->DramaticBattleDataPtr = NULL;
    this->EditGuestCharaSelectUi = NULL;
    this->DramaticEditTopButtonSetUi = NULL;
    this->DramaticEditImageSelectUi = NULL;
    this->DramaticEditImageAndButtonUi = NULL;
    this->DramaticEditTextSelectUi = NULL;
    this->DramaticEditThumbnailImageAndButtonUi = NULL;
    this->DramaticEditSceneListUi = NULL;
    this->DramaticEditSceneMenuUi = NULL;
    this->DramaticSceneEditUi = NULL;
    this->DramaticEditCutListUi = NULL;
    this->WLibDramaticListUI = NULL;
    this->WLibBattleDataDisplayUI = NULL;
    this->WLibSideButtonSetUI = NULL;
    this->WLibSearchMenu = NULL;
    this->WLibSubMenuWindow = NULL;
    this->WLibTagSearchMenu = NULL;
    this->WLibSearchButtonSet = NULL;
    this->WLibIdSearchMenu = NULL;
    this->WLibDetailSearchMenu = NULL;
    this->WLibFollowSideList = NULL;
    this->SortFilterDialog = NULL;
    this->WLibHelpDialog = NULL;
    this->WaitDialog = NULL;
    this->TipsListUI = NULL;
    this->PlayerCardActor = NULL;
    this->CharaSelectActor = NULL;
    this->DetailSearchActor = NULL;
    this->ReplaySelectActor = NULL;
    this->ChangeCutIndex = 0;
    this->bIsExchanngeCutMode = false;
    this->bIsNeedTransitionCharaSelect = false;
    this->DramaticEditDirection = NULL;
    this->DramaticEditDirectionWindow = NULL;
    this->DramaticDirectionTriggerList = NULL;
    this->DramaticMenuWindow = NULL;
    this->DramaticSpecialEndingEditUi = NULL;
    this->DramaticSceneSettingUi = NULL;
    this->DramaticTemplateSelectUi = NULL;
    this->TextAndPictureFilterUi = NULL;
    this->CustomizeCommonItemMenuWidget = NULL;
    this->EditSimpleCharaSelectUi = NULL;
    this->EditCharaNameDisplayUi = NULL;
    this->EditFilterWidget = NULL;
    this->EditSimpleStageNameUi = NULL;
    this->EditSimpleBattleSettingPageChangeUi = NULL;
    this->EditSimpleStageSelectUi = NULL;
    this->EditSimpleBgmSelectUi = NULL;
    this->EditSimpleRuleSelectUi = NULL;
    this->DramaticExPlanationTextUi = NULL;
    this->LastDiablePostReason = EKoratDramaticEditDisablePost::None;
}

bool ASSDramaticBattleExtraController::SimpleBattleSettingCategoryChange() {
    return false;
}

void ASSDramaticBattleExtraController::SetSceneSettingButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void ASSDramaticBattleExtraController::SetMenuButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void ASSDramaticBattleExtraController::OnTextCategoryChanged() {
}

void ASSDramaticBattleExtraController::OnDecideSimpleCharaSelectRight() {
}

void ASSDramaticBattleExtraController::OnDecideSimpleCharaSelectLeft() {
}

void ASSDramaticBattleExtraController::DecideItemButton(int32 InDecideButtonDataIndex) {
}

void ASSDramaticBattleExtraController::ChangeWLibSubMenuButton(USSMenuButton* InHitButton, USSRemoteButton* InButton, int32 InDataIndex) {
}

void ASSDramaticBattleExtraController::ChangeWLibSearchButton(USSMenuButton* InHitButton, USSRemoteButton* InButton, int32 InDataIndex) {
}

void ASSDramaticBattleExtraController::ChangeStageListButtonContents(USSMenuButton* InHitButton, int32 InDataIndex) {
}

void ASSDramaticBattleExtraController::ChangeStageListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void ASSDramaticBattleExtraController::ChangeRuleListButtonContents(USSMenuButton* InHitButton, int32 InDataIndex) {
}

void ASSDramaticBattleExtraController::ChangeRuleListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void ASSDramaticBattleExtraController::ChangePage(int32 InPageIndex) {
}

void ASSDramaticBattleExtraController::ChangeCharaIconButton(USSRemoteButton* InButton, int32 InDataIndex) {
}

void ASSDramaticBattleExtraController::ChangeBuildupItemIconButton(USSMenuButton* InButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void ASSDramaticBattleExtraController::ChangeBgmListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void ASSDramaticBattleExtraController::ChangeBattleCharaIcon(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}


