#include "KoratPostProcessAgentVolume.h"

AKoratPostProcessAgentVolume::AKoratPostProcessAgentVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BindType = EKoratPostProcessVolumeBindType::STAGE_POS_00_00;
    this->Manager = NULL;
    this->ManagerActorData = NULL;
}


