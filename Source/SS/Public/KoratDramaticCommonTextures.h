#pragma once
#include "CoreMinimal.h"
#include "EKortaDramticBattleCategory.h"
#include "KoratDramaticCommonTextures.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FKoratDramaticCommonTextures {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> EditImageForAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> EditImageForDisableAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> EditImageForUnset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKortaDramticBattleCategory, TSoftObjectPtr<UTexture2D>> ExtraCategoryIconImages;
    
    SS_API FKoratDramaticCommonTextures();
};

