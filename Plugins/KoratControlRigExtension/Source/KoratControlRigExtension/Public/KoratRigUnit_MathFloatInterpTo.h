#pragma once
#include "CoreMinimal.h"
#include "Units/RigUnit.h"
#include "KoratRigUnit_MathFloatInterpTo.generated.h"

USTRUCT(BlueprintType)
struct FKoratRigUnit_MathFloatInterpTo : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
	KORATCONTROLRIGEXTENSION_API FKoratRigUnit_MathFloatInterpTo();
	
	RIGVM_METHOD()
	virtual void Execute(const FRigUnitContext& Context) override;
};

