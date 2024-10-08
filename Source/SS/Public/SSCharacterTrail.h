#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HighSpeedMoveMaterialInstance.h"
#include "SplineMeshTrailMaterialInstance.h"
#include "SSCharacterTrail.generated.h"

class USSTrailDataAsset;

UCLASS(Blueprintable)
class USSCharacterTrail : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSTrailDataAsset* TrailData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSplineMeshTrailMaterialInstance SplineMeshTrailMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHighSpeedMoveMaterialInstance HighSpeedMoveTrailMaterials;
    
public:
    USSCharacterTrail();

};

