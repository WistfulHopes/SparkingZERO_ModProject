#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSGalleryTheaterListMenuManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryTheaterListMenuManager : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSGalleryTheaterListMenuManager();

    UFUNCTION(BlueprintCallable)
    void Request(const int32 InRequest);
    
};

