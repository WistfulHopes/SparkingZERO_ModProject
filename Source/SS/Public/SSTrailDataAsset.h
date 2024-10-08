#pragma once
#include "CoreMinimal.h"
#include "HighSpeedMoveMaterialInstance.h"
#include "MutualDataAsset.h"
#include "SplineMeshTrailMaterialInstance.h"
#include "SSTrailDataAsset.generated.h"

UCLASS(Blueprintable)
class USSTrailDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineMeshTrailMaterialInstance SplineMeshTrailMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHighSpeedMoveMaterialInstance HighSpeedMoveTrailMaterials;
    
public:
    USSTrailDataAsset();

};

