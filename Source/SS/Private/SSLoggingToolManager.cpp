#include "SSLoggingToolManager.h"

USSLoggingToolManager::USSLoggingToolManager() {
    this->EnableAutoGuard = false;
    this->EnableSprakingMode = false;
    this->EnableChange2PCharacter = false;
    this->StartCharacterIndex = 0;
}

void USSLoggingToolManager::SetIsEnable(bool IsEnable) {
}

void USSLoggingToolManager::OnEndMontageSequence(FKoratActionDataList InAction, EKoratCharacterActionFinishReason InActionFinishReason) {
}

void USSLoggingToolManager::OnBeginMontageSequence(FKoratActionDataList InAction) {
}

void USSLoggingToolManager::InitSettingCharacters(const int32 Index) {
}

bool USSLoggingToolManager::GetIsEnable() {
    return false;
}


