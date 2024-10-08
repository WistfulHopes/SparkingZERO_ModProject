#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBulletRatExistLimitParam.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectBulletRatExistLimitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExistLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpanAppliedExistLimit;
    
    SS_API FKoratEffectBulletRatExistLimitParam();
};

