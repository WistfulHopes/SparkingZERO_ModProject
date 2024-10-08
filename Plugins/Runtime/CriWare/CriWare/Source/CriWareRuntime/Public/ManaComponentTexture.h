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

};

