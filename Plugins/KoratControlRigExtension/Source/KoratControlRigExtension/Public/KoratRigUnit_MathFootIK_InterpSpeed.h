#pragma once
#include "CoreMinimal.h"
#include "Units/RigUnit.h"
#include "KoratRigUnit_MathFootIK_InterpSpeed.generated.h"

USTRUCT(BlueprintType)
struct FKoratRigUnit_MathFootIK_InterpSpeed : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    KORATCONTROLRIGEXTENSION_API FKoratRigUnit_MathFootIK_InterpSpeed();
};

