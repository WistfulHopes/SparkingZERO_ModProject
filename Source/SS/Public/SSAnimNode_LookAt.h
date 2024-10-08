#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_LookAt.h"
#include "SSAnimNode_LookAt.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAnimNode_LookAt : public FAnimNode_LookAt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InLookAtClamp;
    
    FSSAnimNode_LookAt();
};

