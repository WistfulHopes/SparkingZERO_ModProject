#pragma once
#include "CoreMinimal.h"
#include "KoratRewardItemDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratRewardItemDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratRewardItemDataList();
};

