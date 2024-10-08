#include "SSPowerImpactProcedureNtoG.h"

ASSPowerImpactProcedureNtoG::ASSPowerImpactProcedureNtoG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FowardSocketNameNormal = TEXT("socket_Act_PwN2G_FrontAdjust_NULL");
    this->FowardSocketNameGiant = TEXT("socket_Act_PwG2N_FrontAdjust_NULL");
    this->RightHandOffsetNameGiant = TEXT("socket_Act_PwG2N_FrontAdjust_WRIST_R");
}


