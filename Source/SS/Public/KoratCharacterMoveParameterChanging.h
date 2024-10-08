#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterMoveParameterChanging.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterMoveParameterChanging {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakeScale;
    
    SS_API FKoratCharacterMoveParameterChanging();
};

