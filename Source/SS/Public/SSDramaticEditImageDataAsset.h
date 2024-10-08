#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDramaticEditImageDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class USSDramaticEditImageDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> DramaticImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> EditImageForCreateNew;
    
    USSDramaticEditImageDataAsset();

};

