#pragma once
#include "CoreMinimal.h"
#include "SSGalleryPictureBookListMenuManager.h"
#include "SSGalleryPictureBookViewerMenuListManager.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryPictureBookViewerMenuListManager : public USSGalleryPictureBookListMenuManager {
    GENERATED_BODY()
public:
    USSGalleryPictureBookViewerMenuListManager();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButtonIndex(USSMenuButton* InHitButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

