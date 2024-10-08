#pragma once
#include "CoreMinimal.h"
#include "KoratHitStopDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratHitStopDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratHitStopDataList();
};

