#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleSetupCustomizeCostumeMenu.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleSetupCustomizeCostumeMenu : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CostumeHitButtonPrefixName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccessoryHitButtonPrefixName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccessoryDispButtonSwitcherName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemNameTextWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemDescriptionTextWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BlankItemNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BlankItemDescriptionText;
    
    USSBattleSetupCustomizeCostumeMenu();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCostumeFocusChanged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCostumeDecided() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAccessoryFocusChanged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAccessoryDecided() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFocusedDataIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDecidedDataIndex() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DecidedPanel(USSMenuButton* InButton);
    
};

