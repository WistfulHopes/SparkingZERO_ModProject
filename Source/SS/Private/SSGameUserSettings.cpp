#include "SSGameUserSettings.h"

USSGameUserSettings::USSGameUserSettings() {
    this->Option_AntiAliasingQuality = 3;
    this->Option_ShadowQuality = 3;
    this->Option_TextureQuality = 2;
    this->Option_PostProcessingQuality = 2;
    this->Option_VisualEffectQuality = 2;
    this->Option_FoliageQuality = 2;
    this->Option_LodQuality = 2;
    this->Option_ChaosQuality = 1;
    this->Option_DofQuality = 3;
    this->Option_AntiAliasingQualityVs = 2;
    this->Option_ShadowQualityVs = 2;
    this->Option_TextureQualityVs = 1;
    this->Option_PostProcessingQualityVs = 1;
    this->Option_VisualEffectQualityVs = 1;
    this->Option_FoliageQualityVs = 1;
    this->Option_LodQualityVs = 1;
    this->Option_ChaosQualityVs = 0;
    this->Option_DofQualityVs = 1;
    this->Option_ScreenNo = 1;
    this->Option_Vsync = true;
    this->Option_ResolutionX = 1280;
    this->Option_ResolutionY = 720;
}


