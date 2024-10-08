#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterHandIK.generated.h"

USTRUCT(BlueprintType)
struct FCharacterHandIK {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LeftLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector RightLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnablePowerImpactHandIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnablePowerImpactHandIKRight;
    
    SS_API FCharacterHandIK();
};

