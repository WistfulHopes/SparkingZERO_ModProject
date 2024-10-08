#include "KoratBattleConversation.h"

FKoratBattleConversation::FKoratBattleConversation() {
    this->BattleConversationMode = EKoratBattleConversationMode::Character;
    this->Time = 0.00f;
    this->Volume = 0.00f;
    this->Interval = 0.00f;
    this->IsBattleVoice = false;
    this->HiddenSubtitles = false;
    this->HiddenSubtitlesOnly2P = false;
    this->IsLipsSyncroSupportCharacter = false;
}

