#pragma once
#include "CoreMinimal.h"
#include "SSGalleryPictureBookListMenuManager.h"
#include "SSGalleryPictureBookCharaListManager.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryPictureBookCharaListManager : public USSGalleryPictureBookListMenuManager {
    GENERATED_BODY()
public:
    USSGalleryPictureBookCharaListManager();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

