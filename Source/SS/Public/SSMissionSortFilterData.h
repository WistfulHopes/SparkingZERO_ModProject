#pragma once
#include "CoreMinimal.h"
#include "SSMissionSortFilterData.generated.h"

USTRUCT(BlueprintType)
struct FSSMissionSortFilterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FilterIndexArray;
    
    SS_API FSSMissionSortFilterData();
};

