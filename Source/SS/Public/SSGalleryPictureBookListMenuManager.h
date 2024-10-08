#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSGalleryPictureBookListMenuManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryPictureBookListMenuManager : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSGalleryPictureBookListMenuManager();

    UFUNCTION(BlueprintCallable)
    void Request(const int32 InRequest);
    
};

