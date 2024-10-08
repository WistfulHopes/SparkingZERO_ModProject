#pragma once
#include "CoreMinimal.h"
#include "SSPartsAnimationAsset.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSSPartsAnimationAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> Montage;
    
    SS_API FSSPartsAnimationAsset();
};

