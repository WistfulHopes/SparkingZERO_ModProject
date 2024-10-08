#include "SSBattleResultController.h"

ASSBattleResultController::ASSBattleResultController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BattleResult01Manager = NULL;
    this->BattleResult01TblVicManager = NULL;
    this->ResultDialog = NULL;
    this->BattleResult01RankUpManager = NULL;
    this->BattleResult01PlayerRankUpManager = NULL;
    this->BattleResult01ChLvUpManager = NULL;
    this->BattleResult02Manager = NULL;
    this->BattleResult03Manager = NULL;
    this->PlayerCardActor = NULL;
    this->AfterBuiltInMenu = NULL;
    this->RankMatchResultBuiltInMenu = NULL;
    this->PlayerMatchResultBuiltInMenu = NULL;
    this->ShowBattleResultWidget = NULL;
    this->GuideWidget = NULL;
    this->SummaryTextWidget = NULL;
    this->DramaticSummaryEndUi = NULL;
    this->DramaticSimpleEndWidget = NULL;
    this->AdventureIFController = NULL;
    this->MenuGeneralDialog = NULL;
    this->ResultTimerManager = NULL;
    this->ReportDialog = NULL;
}


