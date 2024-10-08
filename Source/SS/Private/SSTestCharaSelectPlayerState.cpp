#include "SSTestCharaSelectPlayerState.h"

ASSTestCharaSelectPlayerState::ASSTestCharaSelectPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerController = NULL;
}

void ASSTestCharaSelectPlayerState::SetControllerStop_Implementation(ASSCharacter* InCharacter) {
}

void ASSTestCharaSelectPlayerState::SetControllerReadyForFadeIn_Implementation(ASSBattlePlayerController* InPlayerControlle) {
}

void ASSTestCharaSelectPlayerState::SetControllerPossessedCharacter_Implementation(ASSCharacter* InCharacter) {
}

void ASSTestCharaSelectPlayerState::SetControllerCharacterChange_Implementation(ASSCharacter* InCharacter) {
}


