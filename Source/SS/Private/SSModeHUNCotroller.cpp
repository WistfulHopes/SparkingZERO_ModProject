#include "SSModeHUNCotroller.h"

ASSModeHUNCotroller::ASSModeHUNCotroller(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraAttachRootActor = NULL;
    this->ManualCameraActor = NULL;
    this->CameraActor = NULL;
    this->WaitAnimWidget = NULL;
    this->BattleDataRecord = NULL;
    this->GuideWidget = NULL;
    this->HUNBattleListUi = NULL;
    this->LoadAnimWidget = NULL;
    this->BGWidget = NULL;
    this->HUNBattleDetailUi = NULL;
    this->TextAndPictureFilterUi = NULL;
    this->CongratulateAnimWidget = NULL;
    this->HUNMissionDetailUi = NULL;
}

void ASSModeHUNCotroller::StartFilterDialog() {
}


