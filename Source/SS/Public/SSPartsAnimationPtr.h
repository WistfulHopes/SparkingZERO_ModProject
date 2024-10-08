#pragma once
#include "CoreMinimal.h"
#include "SSPartsAnimationPtr.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSSPartsAnimationPtr {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    SS_API FSSPartsAnimationPtr();
};

