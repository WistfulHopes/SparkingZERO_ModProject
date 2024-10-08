#include "SSMainGameHUDWidget.h"

USSMainGameHUDWidget::USSMainGameHUDWidget() {
    this->P1MainGaugeWidget = NULL;
    this->P2MainGaugeWidget = NULL;
    this->P1NoticeWidget = NULL;
    this->P2NoticeWidget = NULL;
    this->P1SkillGuideWidget = NULL;
    this->P2SkillGuideWidget = NULL;
    this->P1CommandGuideWidget = NULL;
    this->P2CommandGuideWidget = NULL;
    this->P1ComboDisplayWidget = NULL;
    this->P2ComboDisplayWidget = NULL;
    this->P1TransformPanelWidget = NULL;
    this->P2TransformPanelWidget = NULL;
    this->P1TransformAllGuideWidget = NULL;
    this->P2TransformAllGuideWidget = NULL;
    this->P1ChangeGuideWidget = NULL;
    this->P2ChangeGuideWidget = NULL;
    this->P1EmoteGuideWidget = NULL;
    this->P2EmoteGuideWidget = NULL;
    this->TimerWidget = NULL;
    this->SubtitleWidget = NULL;
    this->P1BBoostWidget = NULL;
    this->P2BBoostWidget = NULL;
    this->Bunkatu_Partition = NULL;
    this->P1BuffIconSet = NULL;
    this->P2BuffIconSet = NULL;
    this->TimeStartTiming = 10.00f;
    this->TimeEndTiming = 60.00f;
}

void USSMainGameHUDWidget::ShowTransformAllGuideWidgetOfPlayer(int32 InPlayerIndex) {
}

void USSMainGameHUDWidget::ShowTimerWidget() {
}

void USSMainGameHUDWidget::ShowSubtitleWidget() {
}

void USSMainGameHUDWidget::ShowSkillGuideWidgetOfPlayer(int32 InPlayerIndex) {
}

void USSMainGameHUDWidget::ShowNoticeWidgetOfPlayer(int32 InPlayerIndex) {
}

void USSMainGameHUDWidget::ShowMainGaugeWidgetOfPlayer(int32 InPlayerIndex) {
}

void USSMainGameHUDWidget::ShowCommandGuideWidgetOfPlayer(int32 InPlayerIndex) {
}

void USSMainGameHUDWidget::ShowComboDisplayWidgetOfPlayer(int32 InPlayerIndex) {
}

void USSMainGameHUDWidget::SetBunkatu_Partition(ESlateVisibility InVisibiluty) {
}

void USSMainGameHUDWidget::HideTransformAllGuideWidgetOfPlayer(int32 InPlayerIndex) {
}

void USSMainGameHUDWidget::HideTimerWidget() {
}

void USSMainGameHUDWidget::HideSubtitleWidget() {
}

void USSMainGameHUDWidget::HideSkillGuideWidgetOfPlayer(int32 InPlayerIndex) {
}

void USSMainGameHUDWidget::HideNoticeWidgetOfPlayer(int32 InPlayerIndex) {
}

void USSMainGameHUDWidget::HideMainGaugeWidgetOfPlayer(int32 InPlayerIndex) {
}

void USSMainGameHUDWidget::HideCommandGuideWidgetOfPlayer(int32 InPlayerIndex) {
}

void USSMainGameHUDWidget::HideComboDisplayWidgetOfPlayer(int32 InPlayerIndex) {
}

USSStylePanel* USSMainGameHUDWidget::GetTransformPanelOfPlayer(int32 InPlayerIndex) {
    return NULL;
}

USSHUDWidget* USSMainGameHUDWidget::GetTransformAllGuideOfPlayer(const int32 InPlayerIndex) {
    return NULL;
}

USSBattleTimer* USSMainGameHUDWidget::GetTimer() {
    return NULL;
}

USSSkillGuideSet* USSMainGameHUDWidget::GetSkillGuideSetOfPlayer(int32 InPlayerIndex) {
    return NULL;
}

USSMainGauge* USSMainGameHUDWidget::GetMainGaugeOfPlayer(int32 InPlayerIndex) {
    return NULL;
}

USSEmotePanel* USSMainGameHUDWidget::GetEmoteGuideOfPlayer(int32 InPlayerIndex) {
    return NULL;
}

USSComboSet* USSMainGameHUDWidget::GetComboSetOfPlayer(int32 InPlayerIndex) {
    return NULL;
}

USSChangePanel* USSMainGameHUDWidget::GetChangeGuideOfPlayer(int32 InPlayerIndex) {
    return NULL;
}

USSBuffIconSet* USSMainGameHUDWidget::GetBuffIconSetOfPlayer(int32 InPlayerIndex) {
    return NULL;
}

USSBBoost* USSMainGameHUDWidget::GetBBoostOfPlayer(int32 InPlayerIndex) {
    return NULL;
}


