#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "SSHUDWidget.h"
#include "SSMainGameHUDWidget.generated.h"

class UImage;
class USSBBoost;
class USSBattleTimer;
class USSBuffIconSet;
class USSChangePanel;
class USSComboSet;
class USSEmotePanel;
class USSMainGauge;
class USSSkillGuideSet;
class USSStylePanel;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSMainGameHUDWidget : public USSHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMainGauge* P1MainGaugeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMainGauge* P2MainGaugeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* P1NoticeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* P2NoticeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSkillGuideSet* P1SkillGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSkillGuideSet* P2SkillGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* P1CommandGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* P2CommandGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSComboSet* P1ComboDisplayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSComboSet* P2ComboDisplayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSStylePanel* P1TransformPanelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSStylePanel* P2TransformPanelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSHUDWidget* P1TransformAllGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSHUDWidget* P2TransformAllGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSChangePanel* P1ChangeGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSChangePanel* P2ChangeGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSEmotePanel* P1EmoteGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSEmotePanel* P2EmoteGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleTimer* TimerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* SubtitleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBBoost* P1BBoostWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBBoost* P2BBoostWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Bunkatu_Partition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBuffIconSet* P1BuffIconSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBuffIconSet* P2BuffIconSet;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeStartTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeEndTiming;
    
    USSMainGameHUDWidget();

    UFUNCTION(BlueprintCallable)
    void ShowTransformAllGuideWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowTimerWidget();
    
    UFUNCTION(BlueprintCallable)
    void ShowSubtitleWidget();
    
    UFUNCTION(BlueprintCallable)
    void ShowSkillGuideWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowNoticeWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowMainGaugeWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowCommandGuideWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowComboDisplayWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetBunkatu_Partition(ESlateVisibility InVisibiluty);
    
    UFUNCTION(BlueprintCallable)
    void HideTransformAllGuideWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void HideTimerWidget();
    
    UFUNCTION(BlueprintCallable)
    void HideSubtitleWidget();
    
    UFUNCTION(BlueprintCallable)
    void HideSkillGuideWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void HideNoticeWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void HideMainGaugeWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void HideCommandGuideWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void HideComboDisplayWidgetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSStylePanel* GetTransformPanelOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSHUDWidget* GetTransformAllGuideOfPlayer(const int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBattleTimer* GetTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSSkillGuideSet* GetSkillGuideSetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSMainGauge* GetMainGaugeOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSEmotePanel* GetEmoteGuideOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSComboSet* GetComboSetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSChangePanel* GetChangeGuideOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBuffIconSet* GetBuffIconSetOfPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBBoost* GetBBoostOfPlayer(int32 InPlayerIndex);
    
};

