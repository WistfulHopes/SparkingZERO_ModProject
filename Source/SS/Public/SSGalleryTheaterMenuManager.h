#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSGalleryTheaterMenuManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryTheaterMenuManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSGalleryTheaterMenuManager();

protected:
    UFUNCTION(BlueprintCallable)
    void SetUpdatingInfo(const bool InUpdateInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void Request(const int32 InRequest);
    
};

