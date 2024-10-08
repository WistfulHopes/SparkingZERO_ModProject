#include "KoratCharacterDataSuperHighSpeedMoveParameter.h"

FKoratCharacterDataSuperHighSpeedMoveParameter::FKoratCharacterDataSuperHighSpeedMoveParameter() {
    this->SparkingGaugeCost = 0.00f;
    this->MoveSpeed = 0.00f;
    this->MoveDuration = 0.00f;
    this->MoveDistanceMin = 0.00f;
    this->HiddenStartTime = 0.00f;
    this->HiddenDuration = 0.00f;
    this->InvincibleStartTime = 0.00f;
    this->InvincibleDuration = 0.00f;
    this->StartTimeLineType = EKoratFreeTimelineType::None;
    this->StartActionCamera = NULL;
    this->StartOpponentActionCamera = NULL;
    this->EndTimeLineOffsetTime = 0.00f;
    this->EndTimeLineType = EKoratFreeTimelineType::None;
    this->EndActionCamera = NULL;
    this->EndOpponentActionCamera = NULL;
}

