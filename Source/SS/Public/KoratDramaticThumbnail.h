#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditPictureDataList.h"
#include "KoratDRMEditWordTextDataList.h"
#include "KoratDramaticThumbnailText.h"
#include "KoratDramaticThumbnail.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticThumbnail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditPictureDataList NonActiveThumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NonActiveThumbnailDynamicImagesCutId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticThumbnailText ThumbnailText1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticThumbnailText ThumbnailText2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThumbanilSwitcherIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDRMEditPictureDataList> SlideshowImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FName> SlideshowDynamicImagesCutId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDRMEditWordTextDataList> TagTexts;
    
    SS_API FKoratDramaticThumbnail();
};

