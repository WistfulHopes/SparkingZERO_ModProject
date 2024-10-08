#pragma once
#include "CoreMinimal.h"
#include "SSBulletShapeBase.h"
#include "SSBulletShapeMesh.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, HideDropdown)
class USSBulletShapeMesh : public USSBulletShapeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CollisionMesh;
    
    USSBulletShapeMesh();

};

