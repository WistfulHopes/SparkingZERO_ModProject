#pragma once
#include "CoreMinimal.h"
#include "SSRemoteButton.h"
#include "SSGalleryTheaterDeleteModeButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryTheaterDeleteModeButton : public USSRemoteButton {
    GENERATED_BODY()
public:
    USSGalleryTheaterDeleteModeButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleAndDeleteItemExist();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNoDeleteItemExist();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeleteItemExist();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeleteMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeleteItemExist() const;
    
};

