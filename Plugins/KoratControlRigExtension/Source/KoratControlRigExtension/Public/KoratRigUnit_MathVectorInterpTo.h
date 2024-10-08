#pragma once
#include "CoreMinimal.h"
#include "Units/RigUnit.h"
#include "UObject/NoExportTypes.h"
#include "KoratRigUnit_MathVectorInterpTo.generated.h"

USTRUCT(BlueprintType)
struct FKoratRigUnit_MathVectorInterpTo : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Result;
    
    KORATCONTROLRIGEXTENSION_API FKoratRigUnit_MathVectorInterpTo();
};

