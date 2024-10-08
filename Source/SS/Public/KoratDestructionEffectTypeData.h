#pragma once
#include "CoreMinimal.h"
#include "EKoratDestructionEffectType.h"
#include "EKoratDestructionSEType.h"
#include "KoratDestructionEffectTypeData.generated.h"

USTRUCT(BlueprintType)
struct FKoratDestructionEffectTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDestructionEffectType EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDestructionEffectType LowSpecEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDestructionSEType SEType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDestructionSEType LowSpecSEType;
    
    SS_API FKoratDestructionEffectTypeData();
};

