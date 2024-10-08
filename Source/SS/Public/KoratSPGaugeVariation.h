#pragma once
#include "CoreMinimal.h"
#include "KoratSPGaugeVariation.generated.h"

USTRUCT(BlueprintType)
struct FKoratSPGaugeVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Damage;
    
    SS_API FKoratSPGaugeVariation();
};

