#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleSingleImageData.generated.h"

class UTexture2DDynamic;

USTRUCT(BlueprintType)
struct FKoratDramaticBattleSingleImageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> BinaryImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PresetImageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNotResisted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2DDynamic* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CutId;
    
    SS_API FKoratDramaticBattleSingleImageData();
};

