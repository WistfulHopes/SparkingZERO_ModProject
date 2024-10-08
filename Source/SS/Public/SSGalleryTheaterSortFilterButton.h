#pragma once
#include "CoreMinimal.h"
#include "SSRemoteButton.h"
#include "SSGalleryTheaterSortFilterButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryTheaterSortFilterButton : public USSRemoteButton {
    GENERATED_BODY()
public:
    USSGalleryTheaterSortFilterButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggle();
    
};

