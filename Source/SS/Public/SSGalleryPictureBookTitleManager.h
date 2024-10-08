#pragma once
#include "CoreMinimal.h"
#include "SSGalleryPictureBookMenuManager.h"
#include "SSGalleryPictureBookTitleManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryPictureBookTitleManager : public USSGalleryPictureBookMenuManager {
    GENERATED_BODY()
public:
    USSGalleryPictureBookTitleManager();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstIn() const;
    
};

