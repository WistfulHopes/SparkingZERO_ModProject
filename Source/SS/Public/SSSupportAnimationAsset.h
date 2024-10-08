#pragma once
#include "CoreMinimal.h"
#include "SSPartsAnimationAsset.h"
#include "SSSupportAnimationAsset.generated.h"

class UAnimMontage;
class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSSupportAnimationAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSPartsAnimationAsset> PartsAnimations;
    
    SS_API FSSSupportAnimationAsset();
};

