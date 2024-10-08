#pragma once
#include "CoreMinimal.h"
#include "ESSBlastDemoBranchType.h"
#include "SSSupportAnimationAsset.h"
#include "SSBlastDemoBranchSupportAnimation.generated.h"

USTRUCT(BlueprintType)
struct FSSBlastDemoBranchSupportAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSBlastDemoBranchType BranchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplaceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSSupportAnimationAsset AnimationAsset;
    
    SS_API FSSBlastDemoBranchSupportAnimation();
};

