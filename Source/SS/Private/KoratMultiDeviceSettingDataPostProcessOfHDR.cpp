#include "KoratMultiDeviceSettingDataPostProcessOfHDR.h"

FKoratMultiDeviceSettingDataPostProcessOfHDR::FKoratMultiDeviceSettingDataPostProcessOfHDR() {
    this->bOverride_BlueCorrection = false;
    this->bOverride_ExpandGamut = false;
    this->bOverride_ToneCurveAmount = false;
    this->BlueCorrection = 0.00f;
    this->ExpandGamut = 0.00f;
    this->ToneCurveAmount = 0.00f;
}

