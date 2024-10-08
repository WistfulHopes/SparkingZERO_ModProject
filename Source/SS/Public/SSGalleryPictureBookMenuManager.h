#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSGalleryPictureBookMenuManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryPictureBookMenuManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSGalleryPictureBookMenuManager();

    UFUNCTION(BlueprintCallable)
    void Request(const int32 InRequest);
    
};

