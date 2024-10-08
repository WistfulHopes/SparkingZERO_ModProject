#pragma once
#include "CoreMinimal.h"
#include "SSGalleryTheaterListMenuManager.h"
#include "SSGalleryTheaterRightWinBGMListManager.generated.h"

class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryTheaterRightWinBGMListManager : public USSGalleryTheaterListMenuManager {
    GENERATED_BODY()
public:
    USSGalleryTheaterRightWinBGMListManager();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSRemoteButton* InButton, const int32 InDataIndex);
    
};

