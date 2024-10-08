#include "SSMpcPriorityManager.h"

ASSMpcPriorityManager::ASSMpcPriorityManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlackoutLerpSlope = 4.00f;
    this->BlackoutMpc = NULL;
}

void ASSMpcPriorityManager::Update(const float InDeltaTime) {
}

void ASSMpcPriorityManager::SetFalseUpdateFlagMonitoringActors() {
}

bool ASSMpcPriorityManager::GetTopPriorityInfo(TArray<ASSMpcPriorityActorBase*>& OutActors) {
    return false;
}

bool ASSMpcPriorityManager::GetDebugCommandFlag() const {
    return false;
}

void ASSMpcPriorityManager::CleanMonitoringActors() {
}

bool ASSMpcPriorityManager::CheckExistAndAddActor(ASSMpcPriorityActorBase*& InActor) {
    return false;
}


