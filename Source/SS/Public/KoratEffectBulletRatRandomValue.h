#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBulletRatRandomValue.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectBulletRatRandomValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomMin;
    
    SS_API FKoratEffectBulletRatRandomValue();
};

