#pragma once
#include "CoreMinimal.h"
#include "Units/RigUnit.h"
#include "KoratRigUnit_MathFootIK_Alpha.generated.h"

USTRUCT(BlueprintType)
struct FKoratRigUnit_MathFootIK_Alpha : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnkleHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetargetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
	KORATCONTROLRIGEXTENSION_API FKoratRigUnit_MathFootIK_Alpha();
	
	RIGVM_METHOD()
	virtual void Execute(const FRigUnitContext& Context) override;
};

