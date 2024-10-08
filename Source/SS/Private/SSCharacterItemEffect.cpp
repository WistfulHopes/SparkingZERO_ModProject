#include "SSCharacterItemEffect.h"

FSSCharacterItemEffect::FSSCharacterItemEffect() {
    this->Target = ESSCharacterItemTarget::Myself;
    this->Buff = NULL;
    this->AccessoryValue = 0;
    this->bEnableCustomEffectColorSetting = false;
    this->ActionMLSData = NULL;
    this->InGameActionMLSData = NULL;
    this->DemoActionMLSData = NULL;
    this->VoiceSoundCueID = 0;
    this->EmoteIndex = 0;
    this->AiLevel = 0;
    this->DestroyThisItem = false;
    this->DestroySameItemInTeam = false;
}

