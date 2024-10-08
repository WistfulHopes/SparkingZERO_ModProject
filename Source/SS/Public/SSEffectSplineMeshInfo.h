#pragma once
#include "CoreMinimal.h"
#include "SSEffectSplineMeshInfo.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FSSEffectSplineMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TuningParameter;
    
    SS_API FSSEffectSplineMeshInfo();
};

