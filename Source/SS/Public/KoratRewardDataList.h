#pragma once
#include "CoreMinimal.h"
#include "KoratRewardDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratRewardDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratRewardDataList();
};

