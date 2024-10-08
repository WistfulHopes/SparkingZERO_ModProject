#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDRMEditPictureDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class USSDRMEditPictureDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 AvailableTypeFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 FilterFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ThumbnailTexture;
    
    USSDRMEditPictureDataAsset();

};

