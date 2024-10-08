#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSSimpleAimLookatNodeParameter.h"
#include "SSSimpleAimLookatAimParameter.generated.h"

USTRUCT(BlueprintType)
struct FSSSimpleAimLookatAimParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform EffectorTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSSimpleAimLookatNodeParameter Spine1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSSimpleAimLookatNodeParameter Spine2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSSimpleAimLookatNodeParameter Spine3;
    
    SS_API FSSSimpleAimLookatAimParameter();
};

