#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBulletRatExistLimitParam.h"
#include "KoratEffectBulletRatExistLimitParamOverwrite.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectBulletRatExistLimitParamOverwrite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatExistLimitParam ExistLimitParam;
    
    SS_API FKoratEffectBulletRatExistLimitParamOverwrite();
};

