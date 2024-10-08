#include "SSTestListViewPlayerController.h"

ASSTestListViewPlayerController::ASSTestListViewPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->DataAsset1 = NULL;
    this->DataAsset2 = NULL;
    this->TopWidget = NULL;
}

void ASSTestListViewPlayerController::EntryInitializedItemOriginal(UObject* InItem, UUserWidget* InWidget) {
}

void ASSTestListViewPlayerController::EntryInitializedItem(UObject* InItem, UUserWidget* InWidget) {
}

void ASSTestListViewPlayerController::ChangeTable2() {
}

void ASSTestListViewPlayerController::ChangeTable1() {
}

void ASSTestListViewPlayerController::ButtonDecidedOriginal() {
}

void ASSTestListViewPlayerController::ButtonDecided() {
}


