#pragma once
#include "CoreMinimal.h"
#include "EMenuMissionMode.h"
#include "SSMissionSortFilterData.h"
#include "SSMissionModeSortFilterData.generated.h"

USTRUCT(BlueprintType)
struct FSSMissionModeSortFilterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMenuMissionMode, FSSMissionSortFilterData> MissionSortFilterDatas;
    
    SS_API FSSMissionModeSortFilterData();
};

