#pragma once
#include "CoreMinimal.h"
#include "SSGalleryTheaterListMenuManager.h"
#include "SSGalleryTheaterRightWinReplayListManager.generated.h"

class USSGalleryTheaterLocalSingleton;
class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryTheaterRightWinReplayListManager : public USSGalleryTheaterListMenuManager {
    GENERATED_BODY()
public:
    USSGalleryTheaterRightWinReplayListManager();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSRemoteButton* InButton, const int32 InDataIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetReplayLoaded();
    
    UFUNCTION(BlueprintCallable)
    void SetReplayDeleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadReplayData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeleteReplayData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSGalleryTheaterLocalSingleton* GetLocalSingleton() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

