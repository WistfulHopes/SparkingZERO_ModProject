#include "SSBattleReplaySaveGame.h"

USSBattleReplaySaveGame::USSBattleReplaySaveGame() {
    this->BattleData.AddDefaulted(1);
}

void USSBattleReplaySaveGame::GetReplayWorldLocation(int32 PlaySideCommon, TArray<FTransform>& Transform1P, TArray<FTransform>& Transform2P) {
}

void USSBattleReplaySaveGame::GetDebugReplayUIInfo(UObject* WorldContextObject, int32 PlaySideCommon, FDebugReplayUIInfo& DebugReplayUIInfo) {
}


