#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonTextItemEntry.h"
#include "SSMenuManager.h"
#include "SSOptionListVideoManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSOptionListVideoManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSOptionListVideoManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnChangeValueWindowMode(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueVsync(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueVisualEffectQuality(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueTextureQuality(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueShadowQuality(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueScreenType(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueScreenNo(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueResolutionScale(const float InChangeGauge);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueResolution(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValuePostProcessQuality(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueMotionBlurQuality(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueLodQuality(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueHandyCameraShakeQuality(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueFoliageQuality(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueDofQuality(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueChaosQuality(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueAntialiasQuality(const FSSMenuButtonTextItemEntry& InChangeItem);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsButtonValueReset();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChkResolutionChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChkDateTime(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ButtonValueReset(const FString& InButtonName);
    
};

