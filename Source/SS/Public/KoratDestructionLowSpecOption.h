#pragma once
#include "CoreMinimal.h"
#include "KoratDestructionLowSpecOption.generated.h"

USTRUCT(BlueprintType)
struct FKoratDestructionLowSpecOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSimulationPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSwitchGeometryCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GCAlternativeFadeDefaultTimeSec;
    
    SS_API FKoratDestructionLowSpecOption();
};

