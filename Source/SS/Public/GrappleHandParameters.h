#pragma once
#include "CoreMinimal.h"
#include "EKoratInverseKinematicsMethod.h"
#include "GrappleHandParameters.generated.h"

USTRUCT(BlueprintType)
struct FGrappleHandParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratInverseKinematicsMethod Method;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OffsetSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlphaCurve;
    
    SS_API FGrappleHandParameters();
};

