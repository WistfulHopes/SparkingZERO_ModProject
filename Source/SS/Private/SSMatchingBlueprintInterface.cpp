#include "SSMatchingBlueprintInterface.h"

USSMatchingBlueprintInterface::USSMatchingBlueprintInterface() {
}

void USSMatchingBlueprintInterface::StartPlayerMatchJoinRoom() {
}

void USSMatchingBlueprintInterface::StartPlayerMatchCreateRoom() {
}

void USSMatchingBlueprintInterface::StartOnlineEnable(bool InLoginToServer, bool InMatchingEnable) {
}

void USSMatchingBlueprintInterface::StartMatchingRankMatch() {
}

void USSMatchingBlueprintInterface::StartMatching(const FString& InRequestedMap, const FString& InChara) {
}

void USSMatchingBlueprintInterface::SetOnlineBattleSettingToGameInstance() {
}

bool USSMatchingBlueprintInterface::SetMatchingTeamCharacterName(FKoratCharacterDataList In1p0, FKoratCharacterDataList In1p1, FKoratCharacterDataList In1p2, FKoratCharacterDataList In1p3, FKoratCharacterDataList In1p4) {
    return false;
}

void USSMatchingBlueprintInterface::SetMatchingRoomRerunDummyOpponentChara(const FString& InChara) {
}

bool USSMatchingBlueprintInterface::SetMatchingRoomMyChara(const FString& InChara) {
    return false;
}

bool USSMatchingBlueprintInterface::SetMatchingRoomMeReady() {
    return false;
}

bool USSMatchingBlueprintInterface::SetMatchingRoomMeIdle() {
    return false;
}

bool USSMatchingBlueprintInterface::SetMatchingRoomMap(const FString& InMap) {
    return false;
}

bool USSMatchingBlueprintInterface::IsPlayerMatchJoinRoomSuccess() {
    return false;
}

bool USSMatchingBlueprintInterface::IsPlayerMatchJoinRoomRunning() {
    return false;
}

bool USSMatchingBlueprintInterface::IsPlayerMatchCreateRoomSuccess() {
    return false;
}

bool USSMatchingBlueprintInterface::IsPlayerMatchCreateRoomRunning() {
    return false;
}

bool USSMatchingBlueprintInterface::IsOnlineEnableRunning() {
    return false;
}

bool USSMatchingBlueprintInterface::IsMyMatchingRoomMemberStatePastIdle() {
    return false;
}

bool USSMatchingBlueprintInterface::IsMatchingRunning() {
    return false;
}

bool USSMatchingBlueprintInterface::IsMatchingRoomStatePastIdle() {
    return false;
}

bool USSMatchingBlueprintInterface::IsInMatchingRoom() {
    return false;
}

bool USSMatchingBlueprintInterface::GetMatchingRoomStateString(FString& OutMessage) {
    return false;
}

bool USSMatchingBlueprintInterface::GetMatchingRoomSlaveChara(FString& OutChara) {
    return false;
}

bool USSMatchingBlueprintInterface::GetMatchingRoomMasterChara(FString& OutChara) {
    return false;
}

bool USSMatchingBlueprintInterface::GetMatchingRoomMap(FString& OutMap) {
    return false;
}

bool USSMatchingBlueprintInterface::GetMatchingRoomBattleKeyMode(EKoratBattleKeyMode& OutBattleKeyMode) {
    return false;
}

bool USSMatchingBlueprintInterface::GetMatchingResult(FString& OutMessage) {
    return false;
}

bool USSMatchingBlueprintInterface::GetMatchingJobStateString(FString& OutMessage) {
    return false;
}

void USSMatchingBlueprintInterface::CancelAndResetMatching() {
}

bool USSMatchingBlueprintInterface::AmIMatchingRoomOwner() {
    return false;
}


