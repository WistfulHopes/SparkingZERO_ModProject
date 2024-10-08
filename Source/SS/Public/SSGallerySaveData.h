#pragma once
#include "CoreMinimal.h"
#include "SSGallerySaveData.generated.h"

USTRUCT(BlueprintType)
struct FSSGallerySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableReplayCommentary;
    
    SS_API FSSGallerySaveData();
};

