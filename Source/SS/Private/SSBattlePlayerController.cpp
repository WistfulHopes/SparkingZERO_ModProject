#include "SSBattlePlayerController.h"

ASSBattlePlayerController::ASSBattlePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->DebugWidgetName = TEXT("WBP_DebugMainGameUI");
    this->DebugInterfaceName = TEXT("BP_DebugMainGameUIInterface");
    this->DebugExecuteName = TEXT("BP_DebugMainGameUIExecute");
    this->PauseManager = NULL;
    this->PowerGaugeSet = NULL;
    this->SpeedImpactRapidUi = NULL;
    this->SpeedImpactRapidUi1 = NULL;
    this->SpeedImpactRapidUi2 = NULL;
    this->SpeedImpactTimingUi = NULL;
    this->CrashImpactUi = NULL;
    this->CrashImpactBoostUi = NULL;
    this->BlastImpactUi = NULL;
    this->DBEvTriggerUi = NULL;
    this->PerformanceIcon = NULL;
    this->DebugPauseRepeatStartTime = 0.20f;
    this->DebugPauseRepeatStepTime = 0.10f;
    this->GuideWidget = NULL;
    this->GuideWidgetPause = NULL;
    this->TextAreaUi = NULL;
    this->TextAreaUiBattleSetup = NULL;
    this->TextAreaUiMainMenu = NULL;
    this->TextAreaUiBattleSetupSet = NULL;
    this->TextAreaUiMainMenuSet = NULL;
    this->Alert_AreaWidget = NULL;
    this->Alert_TimeWidget = NULL;
    this->WatchingWidget = NULL;
    this->PlayerInfoWidget = NULL;
    this->OptionController = NULL;
    this->ActionListController = NULL;
    this->BattleDetailsController = NULL;
    this->DramaticDetailsController = NULL;
    this->TrainingSettingController = NULL;
    this->GeneralDialogController = NULL;
    this->P1TutorialHelpWidget = NULL;
    this->P2TutorialHelpWidget = NULL;
    this->AnnouncementWidget = NULL;
    this->Chameleon = NULL;
}

bool ASSBattlePlayerController::WasInputKeyJustPressedDebugSaveP2() const {
    return false;
}

bool ASSBattlePlayerController::WasInputKeyJustPressedDebugSaveP1() const {
    return false;
}

bool ASSBattlePlayerController::WasInputKeyJustPressedDebugReplayP2() const {
    return false;
}

bool ASSBattlePlayerController::WasInputKeyJustPressedDebugReplayP1() const {
    return false;
}

bool ASSBattlePlayerController::WasInputKeyJustPressedDebugLockOnChange() const {
    return false;
}

void ASSBattlePlayerController::UpdateWidget_Implementation(FName InName) {
}

void ASSBattlePlayerController::ShowWidget_Implementation(FName InName) {
}

void ASSBattlePlayerController::ResetCameraFade() {
}

bool ASSBattlePlayerController::IsUseSpDebugMenuUI() {
    return false;
}

void ASSBattlePlayerController::HideWidget_Implementation(FName InName) {
}

int32 ASSBattlePlayerController::GetPlaySide() const {
    return 0;
}

ASSBattlePlayerController* ASSBattlePlayerController::GetMainPlayerController() const {
    return NULL;
}

void ASSBattlePlayerController::CheckPadControllEnable(EKoratBranch& OutResult) {
}


