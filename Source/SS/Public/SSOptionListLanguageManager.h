#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonImageItemEntry.h"
#include "SSMenuManager.h"
#include "SSOptionListLanguageManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSOptionListLanguageManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> InstallLangCode;
    
public:
    USSOptionListLanguageManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnChangeValueLocalizationVoiceButton(const FSSMenuButtonImageItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueLocalizationTextButton(const FSSMenuButtonImageItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueBackgroundMenuButton(const float InChangeGauge);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueBackgroundEventButton(const float InChangeGauge);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChkDateTime(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ButtonValueReset(const FString& InButtonName);
    
};

