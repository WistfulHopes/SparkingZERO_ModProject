#include "KoratWeatherControllerComp.h"

UKoratWeatherControllerComp::UKoratWeatherControllerComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 127;
    this->BattleLevelScriptActor = NULL;
    this->ActiveCharacterUniqueID = -1;
    this->NextPhase = EKoratWeatherRequestPhase::PhaseNormal;
    this->OverrideSaveChargeValue = 0.00f;
    this->FadeOutTime = 0.50f;
}

void UKoratWeatherControllerComp::OnSpDown2P(float InDownValue) {
}

void UKoratWeatherControllerComp::OnSpDown1P(float InDownValue) {
}

void UKoratWeatherControllerComp::OnSetup() {
}

void UKoratWeatherControllerComp::OnEnd() {
}

void UKoratWeatherControllerComp::OnCharacterBattleStateChanged2P(const ECharacterBattleState InOldState, const ECharacterBattleState InNewState) {
}

void UKoratWeatherControllerComp::OnCharacterBattleStateChanged1P(const ECharacterBattleState InOldState, const ECharacterBattleState InNewState) {
}


