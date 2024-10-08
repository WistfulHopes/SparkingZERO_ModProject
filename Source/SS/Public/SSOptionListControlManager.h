#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonTextItemEntry.h"
#include "SSMenuManager.h"
#include "SSOptionButtonKeyInputItemEntry.h"
#include "SSOptionListControlManager.generated.h"

class USSMenuButton;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSOptionListControlManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* KeySetModeFocusWidget;
    
public:
    USSOptionListControlManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnChangingKey(USSMenuButton* InKeyButton);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueVibration(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValuePlayerType(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValuePanelControlType(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueOperationTypeButton(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueOperationKeyButton(const FSSOptionButtonKeyInputItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueImpactInputType(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueControlStyle();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueCameraUDSpeedButton(const float InChangeGauge);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueCameraUDReverse(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueCameraLRSpeedButton(const float InChangeGauge);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueCameraLRReverse(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueAdaptivetrigger(const float InChangeGauge);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeKeyOperationKeyButtonCancel(USSMenuButton* InKeyButton);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeKeyOperationKeyButton(USSMenuButton* InKeyButton);
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetKeySetModeFlg();
    
    UFUNCTION(BlueprintCallable)
    bool GetKeySetModeChekFlg();
    
    UFUNCTION(BlueprintCallable)
    void ChkDateTime(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ButtonValueReset(const FString& ButtonName);
    
};

