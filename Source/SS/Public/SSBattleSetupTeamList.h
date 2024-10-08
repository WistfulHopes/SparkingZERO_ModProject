#pragma once
#include "CoreMinimal.h"
#include "OnSSBattleSetupTeamListCharaIconEvnetDelegate.h"
#include "SSMenuManager.h"
#include "SSBattleSetupTeamList.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleSetupTeamList : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSBattleSetupTeamListCharaIconEvnet OnCharaPanelDecided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitButtonPrefixName;
    
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
    
    USSBattleSetupTeamList();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCostOverBattleStart();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsDecided();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDecidedPanelIndex();
    
private:
    UFUNCTION(BlueprintCallable)
    void DecidedPanel(USSMenuButton* InButton);
    
};

