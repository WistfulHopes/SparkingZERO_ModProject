#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticBattleSummaryUi.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleSummaryUi : public USSMenuManager {
    GENERATED_BODY()
public:
    USSDramaticBattleSummaryUi();

    UFUNCTION(BlueprintCallable)
    void ShowSumaryTextWidget();
    
    UFUNCTION(BlueprintCallable)
    void SettingBrashSummaryImage();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwithcImageOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwithcImageIn();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPlayingSwitchAnime();
    
};

