#pragma once
#include "CoreMinimal.h"
#include "SSMediaPlayerSetupParameter.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMediaTexture;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct SS_API FSSMediaPlayerSetupParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaTexture* MediaTextureA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaTexture* MediaTextureB;
    
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
    
    FSSMediaPlayerSetupParameter();
};

