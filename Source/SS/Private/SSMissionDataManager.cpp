#include "SSMissionDataManager.h"
#include "SSRandom.h"

USSMissionDataManager::USSMissionDataManager() {
    this->Random = CreateDefaultSubobject<USSRandom>(TEXT("MissionRandom"));
    this->bIsFirstLoginDay = false;
    this->bMasterAchieved = false;
    this->bJudgementPlatformTrophyAllUnlock = false;
    this->bPlatformTrophySynced = false;
}


