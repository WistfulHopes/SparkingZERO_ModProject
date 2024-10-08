#pragma once
#include "CoreMinimal.h"
#include "SSCharacterGiantCharaCapsulePushingParam.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterGiantCharaCapsulePushingParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetRootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetEndBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleRadius;
    
    SS_API FSSCharacterGiantCharaCapsulePushingParam();
};

