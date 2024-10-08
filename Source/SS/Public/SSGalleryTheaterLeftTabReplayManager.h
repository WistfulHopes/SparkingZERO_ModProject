#pragma once
#include "CoreMinimal.h"
#include "SSGalleryTheaterMenuManager.h"
#include "SSGalleryTheaterLeftTabReplayManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryTheaterLeftTabReplayManager : public USSGalleryTheaterMenuManager {
    GENERATED_BODY()
public:
    USSGalleryTheaterLeftTabReplayManager();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateInfo();
    
};

