#include "KoratArmorData.h"

FKoratArmorData::FKoratArmorData() {
    this->DamageRate = 0.00f;
    this->bNotThrowable = false;
    this->bIncreaseSmashLevelGauge = false;
    this->ArmorHitEffectType = EKoratArmorHitEffectType::Hit;
    this->IsUseArmorBreakEffectSe = false;
}

