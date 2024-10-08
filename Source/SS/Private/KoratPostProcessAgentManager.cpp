#include "KoratPostProcessAgentManager.h"

UKoratPostProcessAgentManager::UKoratPostProcessAgentManager() {
    this->ChameleonManager = NULL;
    this->VolumeManager = NULL;
    this->clossFadeCurve = NULL;
}

bool UKoratPostProcessAgentManager::IsAgentInfo(FName agentName, const FKoratPostProcessViewAgentItem& ItemAgent) {
    return false;
}

bool UKoratPostProcessAgentManager::IsActorInfo(FName ActorName, const FKoratPostProcessViewActorItem& ItemActor) {
    return false;
}

TArray<FName> UKoratPostProcessAgentManager::GetExistAgentList() {
    return TArray<FName>();
}

TArray<FName> UKoratPostProcessAgentManager::GetExistActorList() {
    return TArray<FName>();
}

FString UKoratPostProcessAgentManager::GetAgentInfoString(FName agentName) {
    return TEXT("");
}

bool UKoratPostProcessAgentManager::GetAgentInfo(FName agentName, FKoratPostProcessViewAgentItem& ItemAgent) {
    return false;
}

FString UKoratPostProcessAgentManager::GetActorInfoString(FName agentName) {
    return TEXT("");
}

bool UKoratPostProcessAgentManager::GetActorInfo(FName ActorName, FKoratPostProcessViewActorItem& ItemActor) {
    return false;
}


