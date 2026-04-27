#include "SSDebugBattleSetupLvScriptActor.h"

ASSDebugBattleSetupLvScriptActor::ASSDebugBattleSetupLvScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultBattleCpuLevel = EKoratBattleCpuLevel::Usual;
    this->DefaultBattleCpuOptimize = EKoratBattleCpuOptimize::Disable;
}


