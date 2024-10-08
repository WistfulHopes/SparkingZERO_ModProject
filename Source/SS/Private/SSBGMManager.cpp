#include "SSBGMManager.h"
#include "Components/SceneComponent.h"

ASSBGMManager::ASSBGMManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->BattleLevelScriptActor = NULL;
    this->ActiveCharacterUniqueID = -1;
}

void ASSBGMManager::OnCharacterBattleStateChanged2P(const ECharacterBattleState InOldState, const ECharacterBattleState InNewState) {
}

void ASSBGMManager::OnCharacterBattleStateChanged1P(const ECharacterBattleState InOldState, const ECharacterBattleState InNewState) {
}

void ASSBGMManager::AddCharacter(const int32 InPlayerNumber, ASSCharacter* InCharacter) {
}


