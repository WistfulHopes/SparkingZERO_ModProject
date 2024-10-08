#include "SSDebugBattleSetupMenuManager.h"

USSDebugBattleSetupMenuManager::USSDebugBattleSetupMenuManager() {
    this->SelectedStartButtonOfLastSession = NULL;
}

void USSDebugBattleSetupMenuManager::SetTeamCharacterName(FKoratCharacterDataList In1p0, FKoratCharacterDataList In1p1, FKoratCharacterDataList In1p2, FKoratCharacterDataList In1p3, FKoratCharacterDataList In1p4, FKoratCharacterDataList In2p0, FKoratCharacterDataList In2p1, FKoratCharacterDataList In2p2, FKoratCharacterDataList In2p3, FKoratCharacterDataList In2p4) {
}

void USSDebugBattleSetupMenuManager::SaveMenuSetting(const UWidget* InSelectedButton, const FText& InSelectedMap, const TArray<FText>& InSelectedPlayer1, const TArray<FText>& InSelectedPlayer2, bool bInOnlineBattleFlg, EKoratBattleKeyMode InBattleKeyMode, int32 InOfflineSelectNo, int32 InOnlineSelectNo, const FText& InSelectedBGM, const FText& InSelectedSparkingBGM1P, const FText& InSelectedSparkingBGM2P, int32 InTimeLimitSelectNo, bool InLastMaxMaintain1p, bool InLastMaxMaintain2p, bool InLastOutField, const FText InBattleCpuLevel) {
}

void USSDebugBattleSetupMenuManager::SaveDataReset() {
}

void USSDebugBattleSetupMenuManager::SaveDataOpenShop() {
}

void USSDebugBattleSetupMenuManager::SaveDataOpenAll() {
}

void USSDebugBattleSetupMenuManager::SaveDataLoad() {
}

void USSDebugBattleSetupMenuManager::GetStageSelectParameter(UObject* WorldContextObject, TArray<FText>& OutItems, FText& OutCurrentItem) {
}

EKoratBattleCpuLevel USSDebugBattleSetupMenuManager::GetCurrentBattleCpuLevel(UObject* WorldContextObject, const FText InCurrentCpuLevelText) {
    return EKoratBattleCpuLevel::None;
}

void USSDebugBattleSetupMenuManager::GetCharacter2PSelectParameter(UObject* WorldContextObject, TArray<FText>& OutItems, FText& OutCurrentItem, int32 InMemberNo) {
}

void USSDebugBattleSetupMenuManager::GetCharacter1PSelectParameter(UObject* WorldContextObject, TArray<FText>& OutItems, FText& OutCurrentItem, int32 InMemberNo) {
}

void USSDebugBattleSetupMenuManager::GetBGMSelectParameter(UObject* WorldContextObject, TArray<FText>& OutItems, FText& OutCurrentItem, ESSBGMCategoryType InBGMCategoryType) {
}

void USSDebugBattleSetupMenuManager::GetBattleCpuLevelSelectParameter(UObject* WorldContextObject, TArray<FText>& OutItems, FText& OutCurrentItem) {
}


