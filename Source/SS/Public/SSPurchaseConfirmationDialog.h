#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSPurchaseConfirmationDialog.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSPurchaseConfirmationDialog : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TitleTextWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PurchaseItemNumInvisibleWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UserItemNumInvisibleWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UserItemMoneyInvisibleWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BeforeUserMoneyWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AfterUserMoneyWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BeforeUserItemNumWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AfterUserItemNumWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemUnitPriceWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemNameWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemIconWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DialogSelectButtonWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CurrencySwitcherWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OverItemNumSwitcherWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ShortageMoneySwitcherWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemIconSizeSwitcherWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PurchaseItemNumSelectButtonWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentInAnimType;
    
public:
    USSPurchaseConfirmationDialog();

private:
    UFUNCTION(BlueprintCallable)
    void ChangePurchaseItemNum(USSMenuButton* InHitButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void ButtonFocused(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void ButtonDecided(USSMenuButton* InButton);
    
};

