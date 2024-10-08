#pragma once
#include "CoreMinimal.h"
#include "SSGalleryTheaterListMenuManager.h"
#include "SSGalleryTheaterRightWinMovieListManager.generated.h"

class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryTheaterRightWinMovieListManager : public USSGalleryTheaterListMenuManager {
    GENERATED_BODY()
public:
    USSGalleryTheaterRightWinMovieListManager();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSRemoteButton* InButton, const int32 InDataIndex);
    
};

