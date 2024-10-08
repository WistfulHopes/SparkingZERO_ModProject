#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSGalleryPictureBookGatheringCharaInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSGalleryPictureBookGatheringCharaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ImageIndex;
    
    SS_API FSSGalleryPictureBookGatheringCharaInfo();
};

