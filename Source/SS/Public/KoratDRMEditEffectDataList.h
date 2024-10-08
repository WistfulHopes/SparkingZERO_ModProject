#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditEffectDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDRMEditEffectDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDRMEditEffectDataList();
};

