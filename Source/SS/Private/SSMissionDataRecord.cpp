#include "SSMissionDataRecord.h"

USSMissionDataRecord::USSMissionDataRecord() {
    this->MissionMode = EMenuMissionMode::LifeLong;
    this->MissionOverviewNumeric = 0;
    this->DisplayOrder = 0;
    this->MissionClearType = ESSMissionType::None;
    this->MissionClearNum = 0;
    this->bHasLimit = false;
    this->bIsNotListupMission = false;
    this->ReleaseTyming = ESSMissionReleaseTyming::None;
}


