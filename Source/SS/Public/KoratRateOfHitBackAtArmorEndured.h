#pragma once
#include "CoreMinimal.h"
#include "KoratRateOfHitBackAtArmorEndured.generated.h"

USTRUCT(BlueprintType)
struct FKoratRateOfHitBackAtArmorEndured {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RateAtSuperArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RateAtHyperArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RateAtSparkingArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RateAtReactionArmor;
    
    SS_API FKoratRateOfHitBackAtArmorEndured();
};

