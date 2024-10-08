#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSGalleryMyDataMenuManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryMyDataMenuManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSGalleryMyDataMenuManager();

protected:
    UFUNCTION(BlueprintCallable)
    void SetUpdatingInfo(const bool InUpdateInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void Request(const int32 InRequest);
    
};

