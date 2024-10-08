#pragma once
#include "CoreMinimal.h"
#include "SSSubLevelTransitionData.h"
#include "SSGalleryPictureBookTransitionData.generated.h"

USTRUCT(BlueprintType)
struct FSSGalleryPictureBookTransitionData : public FSSSubLevelTransitionData {
    GENERATED_BODY()
public:
    SS_API FSSGalleryPictureBookTransitionData();
};

