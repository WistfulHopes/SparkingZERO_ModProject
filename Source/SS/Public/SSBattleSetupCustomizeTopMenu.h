#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleSetupCustomizeTopMenu.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleSetupCustomizeTopMenu : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemHitButtonPrefixName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CategoryHitButtonPrefixName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CategoryDispButtonSwitcherName;
    
    USSBattleSetupCustomizeTopMenu();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemDecided() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCategoryDecided() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDecidedIndex() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FocusedPanel(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void DecidedPanel(USSMenuButton* InButton);
    
};

