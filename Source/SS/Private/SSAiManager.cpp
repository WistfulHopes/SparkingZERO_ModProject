#include "SSAiManager.h"

ASSAiManager::ASSAiManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseBehaviorTree = NULL;
    this->bOptimizationEnabled = false;
}

void ASSAiManager::SetBehaviorTreeAsset(UBehaviorTree* InBehaviorTreeAsset) {
}

void ASSAiManager::OptimizeBehaviorTree(const int32 InPlaySide) {
}

void ASSAiManager::OnPureBattleStartNoClear() {
}


