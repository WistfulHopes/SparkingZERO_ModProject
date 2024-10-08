#pragma once
#include "CoreMinimal.h"
#include "LookUpEnemySection.generated.h"

USTRUCT(BlueprintType)
struct FLookUpEnemySection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookUpEnemyArgorizum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookUpEnemyAngleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugLookUpEnemyLine;
    
    SS_API FLookUpEnemySection();
};

