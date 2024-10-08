#pragma once
#include "CoreMinimal.h"
#include "EKoratActionTiltTimingType.h"
#include "KoratActionTiltParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratActionTiltParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratActionTiltTimingType TiltTimingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngle;
    
    SS_API FKoratActionTiltParameter();
};

