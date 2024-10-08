#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSGalleryMyDataExpTextManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryMyDataExpTextManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSGalleryMyDataExpTextManager();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowExpText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideExpText();
    
};

