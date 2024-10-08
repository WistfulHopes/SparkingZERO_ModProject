#pragma once
#include "CoreMinimal.h"
#include "SSGalleryPictureBookMenuManager.h"
#include "SSGalleryPictureBookGatheringManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryPictureBookGatheringManager : public USSGalleryPictureBookMenuManager {
    GENERATED_BODY()
public:
    USSGalleryPictureBookGatheringManager();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMinimized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMinimize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMaximized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMaximize();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpening() const;
    
};

