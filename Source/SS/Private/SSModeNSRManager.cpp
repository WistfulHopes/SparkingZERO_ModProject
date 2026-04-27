#include "SSModeNSRManager.h"

USSModeNSRManager::USSModeNSRManager() {
    this->SelectMode = EKoratModeNSRSelectMode::None;
    this->Rezult_NewWinStreak = false;
    this->Rezult_NewDp = false;
}

void USSModeNSRManager::SetNSRSelectMode(EKoratModeNSRSelectMode InSelectMode) {
}

int32 USSModeNSRManager::GetWinStreak() const {
    return 0;
}

EKoratModeNSRSelectMode USSModeNSRManager::GetNSRSelectMode() {
    return EKoratModeNSRSelectMode::None;
}


