#include "KoratConditionPlayVoiceData.h"

FKoratConditionPlayVoiceData::FKoratConditionPlayVoiceData() {
    this->ConditionalTyoe = EKoratPlayVoiceConditionalType::RemainingHP;
    this->SettingValue = 0;
    this->IsWinnerVoice = false;
    this->Priority = 0;
    this->PlayAcceptTime = 0.00f;
}

