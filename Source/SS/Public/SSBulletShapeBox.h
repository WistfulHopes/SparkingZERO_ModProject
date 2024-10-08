#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SSBulletShapeBase.h"
#include "SSBulletShapeBox.generated.h"

UCLASS(Blueprintable, HideDropdown)
class USSBulletShapeBox : public USSBulletShapeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxHalfExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform BoxTransform;
    
    USSBulletShapeBox();

};

