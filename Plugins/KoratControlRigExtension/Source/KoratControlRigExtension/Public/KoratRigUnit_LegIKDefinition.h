#pragma once
#include "CoreMinimal.h"
#include "Rigs/RigHierarchyDefines.h"
#include "UObject/NoExportTypes.h"
#include "KoratRigUnit_LegIKDefinition.generated.h"

USTRUCT(BlueprintType)
struct FKoratRigUnit_LegIKDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey IKFootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey FKFootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBonesInLimb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRotationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> FootBoneForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> HingeRotationAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRotationLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableKneeTwistCorrection;
    
    KORATCONTROLRIGEXTENSION_API FKoratRigUnit_LegIKDefinition();
};

