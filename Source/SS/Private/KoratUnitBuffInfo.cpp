#include "KoratUnitBuffInfo.h"

FKoratUnitBuffInfo::FKoratUnitBuffInfo() {
    this->BuffIndex = 0;
    this->PhaseIndex = 0;
    this->bIsB2UBAction = false;
    this->ProgressSec = 0.00f;
    this->ProgressSecCountUpScale = 0.00f;
    this->EffectiveCount = 0;
    this->bSparkingEnd = false;
    this->bDamageReaction = false;
    this->bEndUltimateBlast = false;
    this->bZeroSP = false;
    this->bAscertainCountered = false;
    this->bSuperCountered = false;
}

