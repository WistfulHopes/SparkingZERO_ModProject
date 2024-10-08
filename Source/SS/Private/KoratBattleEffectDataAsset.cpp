#include "KoratBattleEffectDataAsset.h"

UKoratBattleEffectDataAsset::UKoratBattleEffectDataAsset() {
    this->bUnblockableWarningTimingInDemo = true;
    this->bUnblockableWarningTimingInGame = true;
    this->bUnblockableWarningTimingInFullCharge = true;
    this->bUnbreakableThrow = true;
    this->bEnableHyperSmashSequence = false;
    this->bEnableBlastBoostSequence = false;
    this->HitEffectDirectionRate = 0.50f;
}


