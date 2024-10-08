#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratDestructionLandedParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratDestructionLandedParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    SS_API FKoratDestructionLandedParameter();
};

