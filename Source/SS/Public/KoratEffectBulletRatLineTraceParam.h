#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratEffectBulletRatLineTraceParam.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectBulletRatLineTraceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndPos;
    
    SS_API FKoratEffectBulletRatLineTraceParam();
};

