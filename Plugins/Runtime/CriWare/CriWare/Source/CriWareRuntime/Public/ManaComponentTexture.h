#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture.h"
#include "Engine/Texture.h"
#include "EManaComponentTextureType.h"
#include "ManaComponentTexture.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UManaComponentTexture : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPixelFormat> Format;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaComponentTextureType ComponentType;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressY;
    
    UManaComponentTexture();
    
    virtual ETextureClass GetTextureClass() const override { return ETextureClass::TwoD; }
    virtual class FTextureResource* CreateResource() override { return nullptr; }
    virtual EMaterialValueType GetMaterialType() const override { return MCT_Texture; }
    
    virtual float GetSurfaceWidth() const override { return SizeX; }
    virtual float GetSurfaceHeight() const override { return SizeY; }
    virtual float GetSurfaceDepth() const override { return 0; }
    virtual uint32 GetSurfaceArraySize() const override { return 0; }
};

