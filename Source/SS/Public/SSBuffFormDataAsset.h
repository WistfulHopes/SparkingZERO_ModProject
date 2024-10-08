#pragma once
#include "CoreMinimal.h"
#include "EKoratActionCategoryType.h"
#include "MutualDataAsset.h"
#include "SSBuffFormDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSBuffFormDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> ColorChangeSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> EffectSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFormResetActionCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EKoratActionCategoryType> FormResetActionCategories;
    
    USSBuffFormDataAsset();

};

