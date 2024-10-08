#pragma once
#include "CoreMinimal.h"
#include "KoratAuraPointLightDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratAuraPointLightDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratAuraPointLightDataList();
};

