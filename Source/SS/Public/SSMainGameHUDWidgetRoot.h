#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Components/SlateWrapperTypes.h"
#include "SSHUDWidgetSet.h"
#include "SSMainGameHUDWidgetRoot.generated.h"

class USSBBoost;
class USSBattleMode010Timer;
class USSBattleTimer;
class USSBlastGauge;
class USSBuffIconSet;
class USSChangePanel;
class USSComboSet;
class USSEmotePanel;
class USSHPStockSet;
class USSHUDWidget;
class USSMainGauge;
class USSSPGauge;
class USSSkillGuideSet;
class USSSparkingGauge;
class USSStyleIconTimer;
class USSStylePanel;
class USSTeamGauge;

UCLASS(Blueprintable)
class USSMainGameHUDWidgetRoot : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSHUDWidgetSet HUDWidgetSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSHUDWidgetSet HUDWidgetSetInit;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeStartTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeEndTiming;
    
    USSMainGameHUDWidgetRoot();

    UFUNCTION(BlueprintCallable)
    void ShowTransformAllGuideWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowTimerWidget();
    
    UFUNCTION(BlueprintCallable)
    void ShowSkillGuideWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowMainGaugeWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowCommandGuideWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowComboDisplayWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowBattleMode010TimerWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetBunkatu_Partition(ESlateVisibility InVisibiluty);
    
    UFUNCTION(BlueprintCallable)
    void HideTransformAllGuideWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void HideTimerWidget();
    
    UFUNCTION(BlueprintCallable)
    void HideSkillGuideWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void HideMainGaugeWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void HideCommandGuideWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void HideComboDisplayWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void HideBattleMode010TimerWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSStylePanel* GetTransformPanelOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSHUDWidget* GetTransformAllGuideOfPlayer(const int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBattleTimer* GetTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSTeamGauge* GetTeamGaugeSetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSStyleIconTimer* GetStyleIconTimerSetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSSPGauge* GetSPGaugeSetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSSparkingGauge* GetSparkingGaugeSetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSSkillGuideSet* GetSkillGuideSetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSMainGauge* GetMainGaugeOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSHPStockSet* GetHPStockSetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSEmotePanel* GetEmoteGuideOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSComboSet* GetComboSetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSChangePanel* GetChangeGuideOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBuffIconSet* GetBuffIconSetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBlastGauge* GetBlastGaugeSetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBBoost* GetBBoostOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBattleMode010Timer* GetBattleMode010Timer();
    
};

