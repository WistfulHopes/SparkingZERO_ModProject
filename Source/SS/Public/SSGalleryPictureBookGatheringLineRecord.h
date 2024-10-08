#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSGalleryPictureBookGatheringLineRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSGalleryPictureBookGatheringLineRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LineText;
    
    SS_API FSSGalleryPictureBookGatheringLineRecord();
};

