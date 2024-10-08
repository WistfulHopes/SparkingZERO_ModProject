#pragma once
#include "CoreMinimal.h"
#include "Units/RigUnit.h"
#include "KoratRigUnit_MathFloatAtan2.generated.h"

USTRUCT(BlueprintType)
struct FKoratRigUnit_MathFloatAtan2 : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    KORATCONTROLRIGEXTENSION_API FKoratRigUnit_MathFloatAtan2();
};

