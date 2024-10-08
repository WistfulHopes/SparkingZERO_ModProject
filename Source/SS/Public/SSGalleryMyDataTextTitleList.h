#pragma once
#include "CoreMinimal.h"
#include "SSGalleryMyDataListMenuManager.h"
#include "SSGalleryMyDataTextTitleList.generated.h"

class USSMenuButton;
class USSRemoteButton;
class USSTitleDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryMyDataTextTitleList : public USSGalleryMyDataListMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSTitleDataAsset* UnlockItem;
    
public:
    USSGalleryMyDataTextTitleList();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

