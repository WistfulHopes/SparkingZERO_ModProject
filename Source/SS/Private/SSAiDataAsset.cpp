#include "SSAiDataAsset.h"

USSAiDataAsset::USSAiDataAsset() {
    this->bPartialMatch = true;
    this->ProbabilityTypeEnum = NULL;
    this->DefenseProbabilityTypeEnum = NULL;
    this->BlastTypeEnum = NULL;
    this->AiLevelTypeEnum = NULL;
    this->DefaultAiLevel = 1;
    this->DefaultRepeatedInterval = 12;
    this->PowerImpactTargetMinCurve = NULL;
    this->PowerImpactTargetMaxCurve = NULL;
    this->BlastImpactMinRate = 0.50f;
    this->BlastImpactMaxRate = 0.90f;
    this->ShortRangeOfDefaultBodySize = 900.00f;
    this->ShortRangeOfSmallBodySize = 900.00f;
    this->ShortRangeOfGiantBodySize = 900.00f;
    this->MediumRangeOfDefaultBodySize = 3000.00f;
    this->MediumRangeOfSmallBodySize = 3000.00f;
    this->MediumRangeOfGiantBodySize = 3000.00f;
}

void USSAiDataAsset::SortItemDataMap() {
}

void USSAiDataAsset::SortActionDataMap() {
}

void USSAiDataAsset::SetupSortId() {
}

void USSAiDataAsset::Search() {
}

void USSAiDataAsset::GetTypeNameArray(TArray<FName>& OutNames) const {
}

void USSAiDataAsset::GetCommandNameArray(TArray<FName>& OutNames) const {
}

void USSAiDataAsset::DuplicationActionDataItem() {
}


