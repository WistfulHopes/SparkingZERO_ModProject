#pragma once
#include "CoreMinimal.h"
#include "SSSubLevelTransitionData.h"
#include "SSOPMOVIETransitionWorkerData.generated.h"

USTRUCT(BlueprintType)
struct FSSOPMOVIETransitionWorkerData : public FSSSubLevelTransitionData {
    GENERATED_BODY()
public:
    SS_API FSSOPMOVIETransitionWorkerData();
};

