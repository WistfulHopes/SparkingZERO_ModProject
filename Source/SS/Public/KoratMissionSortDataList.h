#pragma once
#include "CoreMinimal.h"
#include "KoratMissionSortDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMissionSortDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratMissionSortDataList();
};

