#pragma once
#include "CoreMinimal.h"
#include "KoratEffectEnvDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectEnvDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectEnvDataList();
};

