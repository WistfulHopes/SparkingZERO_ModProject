#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSGalleryMyDataListMenuManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryMyDataListMenuManager : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSGalleryMyDataListMenuManager();

    UFUNCTION(BlueprintCallable)
    void Request(const int32 InRequest);
    
};

