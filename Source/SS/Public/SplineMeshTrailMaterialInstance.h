#pragma once
#include "CoreMinimal.h"
#include "CommonTrailDataMaterialInstance.h"
#include "SplineMeshTrailMaterialInstance.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSplineMeshTrailMaterialInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonTrailDataMaterialInstance CommonMaterials;
    
    FSplineMeshTrailMaterialInstance();
};

