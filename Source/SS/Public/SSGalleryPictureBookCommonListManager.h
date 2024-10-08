#pragma once
#include "CoreMinimal.h"
#include "SSGalleryPictureBookListMenuManager.h"
#include "SSGalleryPictureBookCommonListManager.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryPictureBookCommonListManager : public USSGalleryPictureBookListMenuManager {
    GENERATED_BODY()
public:
    USSGalleryPictureBookCommonListManager();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

