#include "SSWarpRequestInfo.h"

FSSWarpRequestInfo::FSSWarpRequestInfo() {
    this->PlayerSide = 0;
    this->bIkOnOffMiniWarp = false;
    this->bWarpInSD = false;
    this->bWarpInHD = false;
    this->bImpactProcedureDelegate = false;
    this->BattleImpactTriggerEventOpt = EBattleImpactTriggerEventOpt::kCurrentTarget;
    this->bReturnIgnoreCharaOffset = false;
}

