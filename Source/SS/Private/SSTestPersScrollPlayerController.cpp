#include "SSTestPersScrollPlayerController.h"
#include "SSMenuViewScroll.h"

ASSTestPersScrollPlayerController::ASSTestPersScrollPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->ScrollBlueprintClass = USSMenuViewScroll::StaticClass();
    this->DataNum = 0;
    this->ScrollMenu = NULL;
}

void ASSTestPersScrollPlayerController::CallbackButtonDataChange(USSRemoteButton* InButton, int32 InDataIdx) {
}


