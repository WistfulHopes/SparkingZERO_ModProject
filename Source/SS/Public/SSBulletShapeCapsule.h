#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSBulletShapeBase.h"
#include "SSBulletShapeCapsule.generated.h"

UCLASS(Blueprintable, HideDropdown)
class USSBulletShapeCapsule : public USSBulletShapeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CapsuleTransform;
    
    USSBulletShapeCapsule();

};

