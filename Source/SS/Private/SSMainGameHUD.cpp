#include "SSMainGameHUD.h"

ASSMainGameHUD::ASSMainGameHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->HUDCommonWidgetRoot = NULL;
    this->HUDSideWidgetRoot = NULL;
    this->DebugUIWidget = NULL;
    this->DebugInterface = NULL;
    this->DebugExecute = NULL;
}

void ASSMainGameHUD::ShowHUDWidget() {
}

void ASSMainGameHUD::ShowDebugUIBlueprint() {
}

void ASSMainGameHUD::ShowDebugUI() {
}

void ASSMainGameHUD::SetHUDVisible(ESSHUDType InHUDType, int32 InPlayerIndex, bool bInIsVisible) {
}

void ASSMainGameHUD::SetHUDTimerVisible(bool bInIsVisible) {
}

void ASSMainGameHUD::SetDebugUIWidget(UUserWidget* InWidget) {
}

void ASSMainGameHUD::OnP2CharacterBattleSPDown(float InDownValue) {
}

void ASSMainGameHUD::OnP2CharacterBattleSparkingDown(float InDownValue) {
}

void ASSMainGameHUD::OnP2CharacterBattleDamageReceived(float InReceivedDamage) {
}

void ASSMainGameHUD::OnP1CharacterBattleSPDown(float InDownValue) {
}

void ASSMainGameHUD::OnP1CharacterBattleSparkingDown(float InDownValue) {
}

void ASSMainGameHUD::OnP1CharacterBattleDamageReceived(float InReceivedDamage) {
}

void ASSMainGameHUD::OnChangeToNewCharacter(ASSCharacter* InBefore, ASSCharacter* InAfter, const bool bInNewCharacter) {
}

bool ASSMainGameHUD::IsOpponentDebugUIBlueprintVisible() const {
    return false;
}

bool ASSMainGameHUD::IsHUDVisible(ESSHUDType InHUDType, int32 InPlayerIndex) const {
    return false;
}

bool ASSMainGameHUD::IsDebugUIVisible() const {
    return false;
}

bool ASSMainGameHUD::IsDebugUIBlueprintVisible() const {
    return false;
}

void ASSMainGameHUD::HideHUDWidget() {
}

void ASSMainGameHUD::HideHUDStart(const TArray<ESSHUDType>& InHUDTypeList, int32 InPlayerIndex) {
}

void ASSMainGameHUD::HideHUDEnd(const TArray<ESSHUDType>& InHUDTypeList, int32 InPlayerIndex) {
}

void ASSMainGameHUD::HideDebugUIBlueprint() {
}

void ASSMainGameHUD::HideDebugUI() {
}

USSMainGameHUDWidgetRoot* ASSMainGameHUD::GetHUDSideWidgetRoot() const {
    return NULL;
}

USSMainGameHUDWidgetRoot* ASSMainGameHUD::GetHUDCommonWidgetRoot() const {
    return NULL;
}

UUserWidget* ASSMainGameHUD::GetDebugUIWidget() {
    return NULL;
}

USSDebugMainGameUIInterface* ASSMainGameHUD::GetDebugInterface() {
    return NULL;
}

USSDebugMainGameUIExecute* ASSMainGameHUD::GetDebugExecute() {
    return NULL;
}

void ASSMainGameHUD::CallSetCommonExecutePtr() {
}


