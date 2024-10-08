#include "SSBattleGameModeBase.h"
#include "SSBattleGameStateBase.h"
#include "SSBattlePlayerController.h"
#include "SSBattlePlayerState.h"
#include "SSMainGameHUD.h"

ASSBattleGameModeBase::ASSBattleGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = ASSBattleGameStateBase::StaticClass();
    this->PlayerControllerClass = ASSBattlePlayerController::StaticClass();
    this->PlayerStateClass = ASSBattlePlayerState::StaticClass();
    this->HUDClass = ASSMainGameHUD::StaticClass();
    this->DefaultPawnClass = NULL;
    this->bEnableSplitScreen = false;
    this->bLaboDevelop = false;
}

void ASSBattleGameModeBase::OnTransitionKoratPreReset() {
}


