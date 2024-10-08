#include "SSTimeLineUiDrawSetting.h"

FSSTimeLineUiDrawSetting::FSSTimeLineUiDrawSetting() {
    this->StartTimePosition = 0.00f;
    this->EndTimePosition = 0.00f;
    this->SeekBarSecond = 0.00f;
    this->bIsDispSeekBar = false;
    this->SlowStartSecond = 0.00f;
    this->SlowSpeed = 0.00f;
    this->bIsEnableSlow = false;
    this->StartTransitionSecond = 0.00f;
    this->EndLineSecond = 0.00f;
}

