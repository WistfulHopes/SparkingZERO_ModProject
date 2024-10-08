#pragma once
#include "CoreMinimal.h"
#include "SSRemoteButton.h"
#include "SSGalleryTheaterBGMListButtonManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryTheaterBGMListButtonManager : public USSRemoteButton {
    GENERATED_BODY()
public:
    USSGalleryTheaterBGMListButtonManager();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
};

