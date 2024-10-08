#pragma once
#include "CoreMinimal.h"
#include "SSBlastDemoBranchSupportAnimation.h"
#include "SSPartsAnimationAsset.h"
#include "SSSupportAnimationAsset.h"
#include "SSMontageLevelSequence.generated.h"

class UAnimMontage;
class ULevelSequence;
class USSActionCameraDataAsset;

USTRUCT(BlueprintType)
struct FSSMontageLevelSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSActionCameraDataAsset* ActionCameraAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSPartsAnimationAsset> PartsAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> AddtiveReactionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> ArmorAddtiveReactionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSSupportAnimationAsset> SupportAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBlastDemoBranchSupportAnimation> BranchSupportAnimations;
    
    SS_API FSSMontageLevelSequence();
};

