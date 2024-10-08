#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture.h"
#include "Engine/Texture.h"
#include "ManaTexture.generated.h"

class UManaComponent;
class UManaComponentTexture;
class UManaSource;
class UManaTexture;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UManaTexture : public UTexture {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTextureUpdated, UManaTexture*, ManaTexture);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaSource* MovieSource;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MovieFilePath;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRenderToTexture: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetGamma;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHDR: 1;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressY;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ClearColor;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideDimensions: 1;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint TargetDimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPixelFormat> OverrideFormat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextureUpdated OnTextureUpdated;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UManaComponentTexture*> ComponentTextures;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UManaComponentTexture*> AlphaComponentTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UManaComponent> ManaPlayer;
    
public:
    UManaTexture();

    UFUNCTION(BlueprintCallable)
    void SetMovieSource(UManaSource* InSource);
    
};

