#pragma once
#include "CoreMinimal.h"
#include "KoratMissionTargetDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMissionTargetDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratMissionTargetDataList();
};

