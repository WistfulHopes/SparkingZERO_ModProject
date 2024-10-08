#include "SSMapLevelScriptActor.h"

ASSMapLevelScriptActor::ASSMapLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LevelLoadingProxy = NULL;
    this->BlackoutTheBackground = NULL;
    this->MpcPriorityManager = NULL;
    this->MapBackGroundActor = NULL;
    this->EffectMapData = NULL;
    this->TestPlayMapSW = 0;
    this->EraseTheBackgroundDrawingCounter = 0;
}

void ASSMapLevelScriptActor::UnloadWorldLevelStreamingsExceptKeep(const TArray<FString>& InKeepLevelPackageNames) {
}

void ASSMapLevelScriptActor::UnloadWorldLevelStreamings() {
}

void ASSMapLevelScriptActor::UnloadPlayMapAsync() {
}

void ASSMapLevelScriptActor::UnloadPlayMap() {
}

void ASSMapLevelScriptActor::TestSwitchPlayMap() {
}

bool ASSMapLevelScriptActor::SwitchPlayMap(const FKoratMapDataList& InMapDataList, bool bInKeepSameSublevel, bool bInSpawnMapCharacter) {
    return false;
}

void ASSMapLevelScriptActor::SublevelShownCallback() {
}

void ASSMapLevelScriptActor::StepLoadSublevelShownCallback() {
}

void ASSMapLevelScriptActor::SpawnMpcPriorityManager() {
}

void ASSMapLevelScriptActor::SpawnBlackoutTheBackground() {
}

void ASSMapLevelScriptActor::ShowAllSubLevel() {
}

void ASSMapLevelScriptActor::SetShouldBeVisibleForDisplaySubLevel(bool bInShouldBeVisible) {
}

void ASSMapLevelScriptActor::SetEraseTheBackgroundDrawing(bool bHide) {
}

void ASSMapLevelScriptActor::SaveLoadedLevelInfo(const FString& Filename) {
}

void ASSMapLevelScriptActor::SaveActiveLevelDumpInfo(const FString& Filename) {
}

void ASSMapLevelScriptActor::LightScenarioShownCallback() {
}

bool ASSMapLevelScriptActor::IsVictoryAppealPositionTheStartingPosition() {
    return false;
}

bool ASSMapLevelScriptActor::IsPlayMapSwitched() const {
    return false;
}

bool ASSMapLevelScriptActor::IsAllSubLevelVisible() {
    return false;
}

bool ASSMapLevelScriptActor::IsAllSubLevelLoaded() {
    return false;
}

void ASSMapLevelScriptActor::HideAllSubLevel() {
}

TArray<ASSCharacter*> ASSMapLevelScriptActor::GetMapCharacters() {
    return TArray<ASSCharacter*>();
}

UKoratEffectMapData* ASSMapLevelScriptActor::GetEffectMapDataCallBP() {
    return NULL;
}

FKoratMapDataList ASSMapLevelScriptActor::GetCurrentPlayMap() const {
    return FKoratMapDataList{};
}

void ASSMapLevelScriptActor::EraseTheBackgroundDrawing(bool bVisibility) {
}

void ASSMapLevelScriptActor::BurstLoadAllMapsIncludedLightScenario(const TArray<FString>& LevelNames) {
}


