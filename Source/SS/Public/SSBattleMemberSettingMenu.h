#pragma once
#include "CoreMinimal.h"
#include "OnSSBattleSetupNewCharaIconEvnetDelegate.h"
#include "SSMenuManager.h"
#include "SSBattleMemberSettingMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSBattleMemberSettingMenu : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSBattleSetupNewCharaIconEvnet OnCharaPanelFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSBattleSetupNewCharaIconEvnet OnCharaPanelDecided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerTextWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RemoveButtonWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwapButtonWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DPVisibilityWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DPNumTextWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DPAlertMarkWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EPBonusVisibilityWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EPBonusNumTextWidgetName;
    
    USSBattleMemberSettingMenu();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCostOverBattleStart();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsFocusChanged();
    
    UFUNCTION(BlueprintCallable)
    bool IsDecideSwapButton();
    
    UFUNCTION(BlueprintCallable)
    bool IsDecideRemoveButton();
    
    UFUNCTION(BlueprintCallable)
    bool IsDecided();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFocusedPanelIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDecidedPanelIndex();
    
private:
    UFUNCTION(BlueprintCallable)
    void FocusedPanel();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableOtherButtons();
    
    UFUNCTION(BlueprintCallable)
    void DisableOtherButtons();
    
private:
    UFUNCTION(BlueprintCallable)
    void DecidedPanel();
    
};

