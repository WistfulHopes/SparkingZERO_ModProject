#include "SSRankingController.h"

ASSRankingController::ASSRankingController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ManualCameraActor = NULL;
    this->BackgroundWidget = NULL;
    this->LeaderBoardWidget = NULL;
    this->CategoryTabWidget = NULL;
    this->GuideWidget = NULL;
    this->CharacterListWidget = NULL;
    this->FilterWidget = NULL;
    this->RankTypeWidget = NULL;
    this->DialogManager = NULL;
    this->NetworkManager = NULL;
    this->PlayerCardActor = NULL;
}


