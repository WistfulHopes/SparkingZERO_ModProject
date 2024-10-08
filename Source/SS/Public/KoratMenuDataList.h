#pragma once
#include "CoreMinimal.h"
#include "KoratMenuDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMenuDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratMenuDataList();
};

