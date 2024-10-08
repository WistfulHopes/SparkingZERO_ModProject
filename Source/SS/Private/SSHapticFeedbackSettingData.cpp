#include "SSHapticFeedbackSettingData.h"

FSSHapticFeedbackSettingData::FSSHapticFeedbackSettingData() {
    this->SortId = 0;
    this->CueId = 0;
    this->VibrationTarget = EKoratVibrationTargetType::None;
    this->VibrationLevel = 0.00f;
    this->IsVibration = false;
}

