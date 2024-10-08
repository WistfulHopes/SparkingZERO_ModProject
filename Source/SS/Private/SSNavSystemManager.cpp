#include "SSNavSystemManager.h"

ASSNavSystemManager::ASSNavSystemManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseFilterClass = NULL;
    this->bDrawPath = false;
}

void ASSNavSystemManager::TestPathfinding() {
}


bool ASSNavSystemManager::LineTraceMulti(FVector& OutLocation, const FVector& InStart, const FVector& InGoal, const bool InPush) {
    return false;
}

bool ASSNavSystemManager::IsLineTraceDestructible(const FVector& InStart, const FVector& InGoal) {
    return false;
}

void ASSNavSystemManager::ExecutePathfinding(TArray<FVector>& OutPathResult, const FVector& InStart, const FVector& InGoal) {
}

void ASSNavSystemManager::DrawPath(const TArray<FVector>& InPathArray, const FColor InColor) {
}

bool ASSNavSystemManager::DoesNavDataExist() {
    return false;
}

void ASSNavSystemManager::CheckPad() {
}


