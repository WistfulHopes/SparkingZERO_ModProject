#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBulletRatLineTraceParam.h"
#include "KoratEffectBulletRatLineTraceParamOverwrite.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectBulletRatLineTraceParamOverwrite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatLineTraceParam LineTraceParam;
    
    SS_API FKoratEffectBulletRatLineTraceParamOverwrite();
};

