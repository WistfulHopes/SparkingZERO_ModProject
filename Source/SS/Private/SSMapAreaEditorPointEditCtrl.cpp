#include "SSMapAreaEditorPointEditCtrl.h"

USSMapAreaEditorPointEditCtrl::USSMapAreaEditorPointEditCtrl() {
    this->activeEditType = EWarpPointType::None;
    this->Selector = NULL;
    this->pointCursor = NULL;
    this->connectedPointCursorActor = NULL;
}

void USSMapAreaEditorPointEditCtrl::UpdateListEntryNumIndicator() {
}

void USSMapAreaEditorPointEditCtrl::UpdateEditActorPositionByCursor() {
}

void USSMapAreaEditorPointEditCtrl::Update() {
}

void USSMapAreaEditorPointEditCtrl::StartPointEdit() {
}

void USSMapAreaEditorPointEditCtrl::SetupResources(UWorld* World) {
}

void USSMapAreaEditorPointEditCtrl::SetCreatedTraceLocatorList(const TArray<AActor*>& traceLocatorList) {
}

void USSMapAreaEditorPointEditCtrl::SetCreatedPlayerStartList(const TArray<AActor*>& playerStartList) {
}

void USSMapAreaEditorPointEditCtrl::SetCreatedNormalLocatorList(const TArray<AActor*>& normalLocatorList) {
}

void USSMapAreaEditorPointEditCtrl::RefreshPointEditUI() {
}

bool USSMapAreaEditorPointEditCtrl::IsRemoveablePoint(EWarpPointType pointType, const FString& pointName) {
    return false;
}

bool USSMapAreaEditorPointEditCtrl::IsCreatablePoint(EWarpPointType pointType, const FString& pointName) {
    return false;
}

UComboBoxString* USSMapAreaEditorPointEditCtrl::GetSelector() {
    return NULL;
}

AActor* USSMapAreaEditorPointEditCtrl::GetPointCursor() {
    return NULL;
}

TArray<AActor*> USSMapAreaEditorPointEditCtrl::GetPlayerStartList() {
    return TArray<AActor*>();
}

EWarpPointType USSMapAreaEditorPointEditCtrl::GetActiveEditPointType() {
    return EWarpPointType::PlayerStart;
}

void USSMapAreaEditorPointEditCtrl::Finish(UWorld* World) {
}

bool USSMapAreaEditorPointEditCtrl::DeletePoint(UWorld* World, const FString& pointName, EWarpPointType pointType) {
    return false;
}

void USSMapAreaEditorPointEditCtrl::ConnectPointEditActor(AActor* editActor) {
}

void USSMapAreaEditorPointEditCtrl::Connect(const TArray<UCheckBox*>& targetCheckBoxs, UComboBoxString* selectorWidget, const TArray<UTextBlock*>& posDispBlocks, const TArray<UTextBlock*>& countDispBlocks) {
}

void USSMapAreaEditorPointEditCtrl::ChangeActiveEditPointCategory(UCheckBox* operatedWidget) {
}

bool USSMapAreaEditorPointEditCtrl::AddNewPoint(UWorld* World, const FString& pointName, EWarpPointType pointType, FVector appearPoint) {
    return false;
}


