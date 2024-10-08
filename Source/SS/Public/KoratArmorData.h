#pragma once
#include "CoreMinimal.h"
#include "EKoratArmorHitEffectType.h"
#include "KoratArmorData.generated.h"

USTRUCT(BlueprintType)
struct FKoratArmorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotThrowable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncreaseSmashLevelGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratArmorHitEffectType ArmorHitEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUseArmorBreakEffectSe;
    
    SS_API FKoratArmorData();
};

