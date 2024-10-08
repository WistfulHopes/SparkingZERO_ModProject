#pragma once
#include "CoreMinimal.h"
#include "EMainMenuSceneArea.h"
#include "SSMainMenuFocusChangeCache.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuFocusChangeCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMainMenuSceneArea Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SubSceneIndex;
    
    SS_API FSSMainMenuFocusChangeCache();
};

