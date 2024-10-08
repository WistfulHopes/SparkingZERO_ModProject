#include "SSSaveDataManager.h"

USSSaveDataManager::USSSaveDataManager() {
    this->GameInstance = NULL;
    this->SystemSaveData = NULL;
    this->MainGameSaveData = NULL;
    this->MenuGeneralDialog = NULL;
    this->DramaticEditImageSaveDataCount = 0;
    this->SystemSaveDataFileChk = false;
    this->MainGameSaveDataFileChk = false;
    this->SystemSaveDataLoadEnd = false;
    this->MainGameSaveDataLoadEnd = false;
    this->bSystemSaveDataLoadReq = false;
    this->bMainGameSaveDataLoadReq = false;
    this->bSystemSaveDataSaveReq = false;
    this->bMainGameSaveDataSaveReq = false;
    this->bSystemSaveDataLoadErrorStartFlgReq = false;
    this->bMainGameSaveDataLoadErrorStartFlgReq = false;
    this->bSystemSaveDataSaveErrorStartFlgReq = false;
    this->bMainGameSaveDataSaveStartFlgReq = false;
    this->bLoadDebug = false;
    this->bErrorStartFlg = true;
    this->bRestoreFocusErrorEnd = false;
}

void USSSaveDataManager::StartFileChkSaveData() {
}

void USSSaveDataManager::StartErrorDialog(bool InRestoreFocusErrorEnd) {
}

void USSSaveDataManager::StartDelSaveData() {
}

bool USSSaveDataManager::StartDelDramaticEditImageSaveData(TArray<FString> InSlotName) {
    return false;
}

void USSSaveDataManager::SaveSystemSaveData(bool InErrorStartFlg, bool InRestoreFocusErrorEnd) {
}

void USSSaveDataManager::SaveMainGameSaveData(EKoratMainGameSaveMode InMode, bool InErrorStartFlg, bool InRestoreFocusErrorEnd) {
}

bool USSSaveDataManager::SaveDramaticEditImageSaveData(TArray<USSDramaticEditImageSaveData*> InDramaticEditImageSaveData) {
    return false;
}

void USSSaveDataManager::ResetSaveDataFLag() {
}

void USSSaveDataManager::ResetSaveData(USSGameInstance* IngameInstance) {
}

bool USSSaveDataManager::ReLoadMainGameSaveData(EKoratMainGameSaveMode InMode) {
    return false;
}

void USSSaveDataManager::LoadSystemSaveData(bool InLoadDebug, bool InErrorStartFlg, bool InRestoreFocusErrorEnd) {
}

void USSSaveDataManager::LoadMainGameSaveData(bool InLoadDebug, bool InErrorStartFlg, bool InRestoreFocusErrorEnd) {
}

bool USSSaveDataManager::LoadDramaticEditImageSaveData(TArray<USSDramaticEditImageSaveData*> InDramaticEditImageSaveData) {
    return false;
}

bool USSSaveDataManager::IsStatusError() const {
    return false;
}

bool USSSaveDataManager::IsSaveEnd() {
    return false;
}

bool USSSaveDataManager::IsLoadEnd() {
    return false;
}

bool USSSaveDataManager::IsError() {
    return false;
}

void USSSaveDataManager::InitializeSaveData(USSGameInstance* IngameInstance) {
}

USSSystemSaveData* USSSaveDataManager::GetSystemSavedata() {
    return NULL;
}

USSMainGameSaveData* USSSaveDataManager::GetMainGameSavedata() {
    return NULL;
}

bool USSSaveDataManager::GetErrorStartFlg() const {
    return false;
}


