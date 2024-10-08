#include "SSPlayerMatchRoomController.h"

ASSPlayerMatchRoomController::ASSPlayerMatchRoomController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ManualCameraActor = NULL;
    this->BackgroundWidget = NULL;
    this->RoomInformationWidget = NULL;
    this->PlayerListWidget = NULL;
    this->TimerWidget = NULL;
    this->SubMenuWidget = NULL;
    this->GuideWidget = NULL;
    this->PlayerCardActor = NULL;
    this->DialogManager = NULL;
}


