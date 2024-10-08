#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSGalleryPictureBookGatheringLineRecord.h"
#include "SSGalleryPictureBookGatheringDataAsset.generated.h"

UCLASS(Blueprintable)
class USSGalleryPictureBookGatheringDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSGalleryPictureBookGatheringLineRecord> LineRecordArray;
    
    USSGalleryPictureBookGatheringDataAsset();

};

