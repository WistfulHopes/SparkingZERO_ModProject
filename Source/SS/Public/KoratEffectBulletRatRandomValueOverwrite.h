#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBulletRatRandomValue.h"
#include "KoratEffectBulletRatRandomValueOverwrite.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectBulletRatRandomValueOverwrite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatRandomValue RandomValue;
    
    SS_API FKoratEffectBulletRatRandomValueOverwrite();
};

