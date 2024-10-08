#pragma once
#include "CoreMinimal.h"
#include "SSSubLevelTransitionData.h"
#include "SSGalleryMyDataTransitionData.generated.h"

USTRUCT(BlueprintType)
struct FSSGalleryMyDataTransitionData : public FSSSubLevelTransitionData {
    GENERATED_BODY()
public:
    SS_API FSSGalleryMyDataTransitionData();
};

