#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditLocatorDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDRMEditLocatorDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDRMEditLocatorDataList();
};

