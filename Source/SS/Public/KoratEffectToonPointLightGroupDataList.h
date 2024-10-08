#pragma once
#include "CoreMinimal.h"
#include "KoratEffectToonPointLightGroupDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectToonPointLightGroupDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectToonPointLightGroupDataList();
};

