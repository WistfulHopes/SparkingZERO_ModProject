#pragma once
#include "CoreMinimal.h"
#include "SSCriMediaPlayerSetupParameter.generated.h"

class UImage;
class UManaTexture;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct SS_API FSSCriMediaPlayerSetupParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaTexture* ManaTextureA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaTexture* ManaTextureB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MaterialParameterNameTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialParameterNameAlpha;
    
    FSSCriMediaPlayerSetupParameter();
};

