#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonTextItemEntry.h"
#include "SSMenuManager.h"
#include "SSOptionListSoundManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSOptionListSoundManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSOptionListSoundManager();

private:
    UFUNCTION(BlueprintCallable)
    void SetAnimSongButton();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueVoiceButton(const float InChangeGauge);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueSeButton(const float InChangeGauge);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueBgmButton(const float InChangeGauge);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueAnimSong(const FSSMenuButtonTextItemEntry& InChangeItem);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChkDateTime(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ButtonValueReset(const FString& InButtonName);
    
};

