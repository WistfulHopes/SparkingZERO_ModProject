#pragma once
#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "KoratPhysicalMatEffectKeyNameHitResult.generated.h"

USTRUCT(BlueprintType)
struct FKoratPhysicalMatEffectKeyNameHitResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString ActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> PhysicalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName EffectMapAttribute;
    
    SS_API FKoratPhysicalMatEffectKeyNameHitResult();
};

