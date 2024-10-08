#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "Animation/BoneSocketReference.h"
#include "SSAnimNode_ModifyBoneForLookat.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAnimNode_ModifyBoneForLookat : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtLocation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BoneToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Clamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneSocketTarget EffectorTarget;
    
    FSSAnimNode_ModifyBoneForLookat();
};

