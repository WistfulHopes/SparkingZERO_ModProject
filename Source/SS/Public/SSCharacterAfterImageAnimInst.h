#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Animation/PoseSnapshot.h"
#include "SSCharacterAfterImageAnimInst.generated.h"

UCLASS(Blueprintable, NonTransient)
class USSCharacterAfterImageAnimInst : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot PoseSnapshot;
    
    USSCharacterAfterImageAnimInst();

};

