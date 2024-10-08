#pragma once
#include "CoreMinimal.h"
#include "SSSubLevelTransitionData.h"
#include "SSGalleryTheaterTransitionData.generated.h"

USTRUCT(BlueprintType)
struct FSSGalleryTheaterTransitionData : public FSSSubLevelTransitionData {
    GENERATED_BODY()
public:
    SS_API FSSGalleryTheaterTransitionData();
};

