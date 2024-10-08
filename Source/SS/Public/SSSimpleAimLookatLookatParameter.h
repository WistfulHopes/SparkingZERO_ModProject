#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSSimpleAimLookatNodeParameter.h"
#include "SSSimpleAimLookatLookatParameter.generated.h"

USTRUCT(BlueprintType)
struct FSSSimpleAimLookatLookatParameter {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSSimpleAimLookatNodeParameter Neck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSSimpleAimLookatNodeParameter Head;
    
    SS_API FSSSimpleAimLookatLookatParameter();
};

