#pragma once
#include "CoreMinimal.h"
#include "KoratAuraRimLightDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratAuraRimLightDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratAuraRimLightDataList();
};

