#include "SSBGMManager.h"
#include "Components/SceneComponent.h"

ASSBGMManager::ASSBGMManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->BattleLevelScriptActor = NULL;
    this->ActiveCharacterUniqueID = -1;
    this->bAutoPlay = true;
}

void ASSBGMManager::OnCharacterBattleStateChanged2P(const ECharacterBattleState InOldState, const ECharacterBattleState InNewState, ASSCharacter* InCharacter) {
}

void ASSBGMManager::OnCharacterBattleStateChanged1P(const ECharacterBattleState InOldState, const ECharacterBattleState InNewState, ASSCharacter* InCharacter) {
}

void ASSBGMManager::AddCharacter(const int32 InPlayerNumber, ASSCharacter* InOldCharacter, ASSCharacter* InNewCharacter, const bool bInSamePerson) {
}


