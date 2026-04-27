#include "SSAiDataAsset.h"

USSAiDataAsset::USSAiDataAsset() {
    this->bPartialMatch = true;
    this->ProbabilityTypeEnum = NULL;
    this->DefenseProbabilityTypeEnum = NULL;
    this->BlastTypeEnum = NULL;
    this->AiLevelTypeEnum = NULL;
    this->AiOptimizeTypeEnum = NULL;
    this->BehaviorTree = NULL;
    this->ProbabilityClass = NULL;
    this->DefaultAiLevel = 1;
    this->DefaultRepeatedInterval = 12;
    this->SpeedImpactTargetMinCurve = NULL;
    this->SpeedImpactTargetMaxCurve = NULL;
    this->PowerImpactTargetMinCurve = NULL;
    this->PowerImpactTargetMaxCurve = NULL;
    this->PowerImpactImpactBoostCurve = NULL;
    this->BlastImpactMinRate = 0.50f;
    this->BlastImpactMaxRate = 0.90f;
}

void USSAiDataAsset::SortItemDataMap() {
}

void USSAiDataAsset::SortActionDataMap() {
}

void USSAiDataAsset::SetupSortId() {
}

void USSAiDataAsset::Search() {
}

void USSAiDataAsset::OutputTimeOutZero() {
}

void USSAiDataAsset::OutputDisablesInterruptsOtherTrees() {
}

void USSAiDataAsset::GetTypeNameArray(TArray<FName>& OutNames) const {
}

void USSAiDataAsset::GetCommandNameArray(TArray<FName>& OutNames) const {
}

void USSAiDataAsset::DuplicationActionDataItem() {
}


