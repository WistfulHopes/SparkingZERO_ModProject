#pragma once
#include "CoreMinimal.h"
#include "SSGalleryTheaterMenuManager.h"
#include "SSGalleryTheaterMoviePlayerManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryTheaterMoviePlayerManager : public USSGalleryTheaterMenuManager {
    GENERATED_BODY()
public:
    USSGalleryTheaterMoviePlayerManager();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPause();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreparePlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndPause();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCleanupPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPausing() const;
    
};

