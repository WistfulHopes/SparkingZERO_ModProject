#include "SSWarpRequestInfo.h"

FSSWarpRequestInfo::FSSWarpRequestInfo() {
    this->PlayerSide = 0;
    this->bImpactProcedureDelegate = false;
    this->BattleImpactTriggerEventOpt = EBattleImpactTriggerEventOpt::kCurrentTarget;
    this->bReturnIgnoreCharaOffset = false;
}

