#pragma once
#include "CoreMinimal.h"
#include "KoratPlatformImageDataAssetRecord.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FKoratPlatformImageDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DefaultSoftTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> XSXSoftTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> PS5SoftTexture;
    
    SS_API FKoratPlatformImageDataAssetRecord();
};

