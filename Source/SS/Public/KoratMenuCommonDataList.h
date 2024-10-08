#pragma once
#include "CoreMinimal.h"
#include "KoratMenuCommonDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMenuCommonDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratMenuCommonDataList();
};

