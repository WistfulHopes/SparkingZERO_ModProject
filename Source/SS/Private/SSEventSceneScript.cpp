#include "SSEventSceneScript.h"
#include "KoratSoundManageComponent.h"

ASSEventSceneScript::ASSEventSceneScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SoundManageComponent = CreateDefaultSubobject<UKoratSoundManageComponent>(TEXT("SoundManageComponent"));
    this->SceneRoot = NULL;
    this->FaderHUD = NULL;
    this->MessageWidget = NULL;
}

void ASSEventSceneScript::UnequipCharacterItems(const TArray<int32>& InCharacterIds, const TArray<FKoratCharacterItemDataList>& InItems) {
}

void ASSEventSceneScript::SetCharacterCostumeScratchLevel(const TArray<int32>& InCharacterIds, const int32 InLevel) {
}


void ASSEventSceneScript::OnSkipButtonHoldProgress(USSMenuButton* InButton, float InProgress) {
}


int32 ASSEventSceneScript::GetSubsceneNum() const {
    return 0;
}

int32 ASSEventSceneScript::GetCurrentSubscene() const {
    return 0;
}

void ASSEventSceneScript::Exit() {
}

void ASSEventSceneScript::EquipCharacterItems(const TArray<int32>& InCharacterIds, const TArray<FKoratCharacterItemDataList>& InItems) {
}


