#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBulletRatFloatOverwrite.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectBulletRatFloatOverwrite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    SS_API FKoratEffectBulletRatFloatOverwrite();
};

