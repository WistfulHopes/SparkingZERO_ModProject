#pragma once
#include "CoreMinimal.h"
#include "KoratWorldPointLightDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratWorldPointLightDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratWorldPointLightDataList();
};

