#pragma once
#include "CoreMinimal.h"
#include "SSRemoteButton.h"
#include "SSGalleryTheaterMovieListButtonlManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryTheaterMovieListButtonlManager : public USSRemoteButton {
    GENERATED_BODY()
public:
    USSGalleryTheaterMovieListButtonlManager();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
};

