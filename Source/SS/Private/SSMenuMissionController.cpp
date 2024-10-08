#include "SSMenuMissionController.h"

ASSMenuMissionController::ASSMenuMissionController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraAttachRootActor = NULL;
    this->ManualCameraActor = NULL;
    this->CameraActor = NULL;
    this->MissionListUi = NULL;
    this->MissionDetailUi = NULL;
    this->MenuGeneralDialog = NULL;
    this->SortFilterDialog = NULL;
    this->MissionDetailTextWidget = NULL;
    this->FinishWaitWidget = NULL;
    this->LifeLongMissionList = NULL;
    this->RightWindowWidget = NULL;
    this->LeftWindowWidget = NULL;
    this->TabSetWidget = NULL;
    this->ReleseMode02Widget = NULL;
    this->ReSelectMode02Widget = NULL;
    this->GuideWidget = NULL;
}


