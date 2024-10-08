#include "KoratCharacterDataHighSpeedMoveParameter.h"

FKoratCharacterDataHighSpeedMoveParameter::FKoratCharacterDataHighSpeedMoveParameter() {
    this->SparkingGaugeCost = 0.00f;
    this->HiddenStartTime = 0.00f;
    this->HiddenDuration = 0.00f;
    this->InvincibleStartTime = 0.00f;
    this->InvincibleDuration = 0.00f;
    this->AddToSpeedCurveIN = NULL;
    this->AddToSpeedCurveLP = NULL;
    this->AddToSpeedCurveOT = NULL;
    this->AddToSpeedScale = 0.00f;
    this->MaxAcceleration = 0.00f;
    this->BrakingDeceleration = 0.00f;
    this->StartTimeLineType = EKoratFreeTimelineType::None;
    this->StartActionCamera = NULL;
    this->StartOpponentActionCamera = NULL;
    this->EndTimeLineOffsetTime = 0.00f;
    this->EndTimeLineType = EKoratFreeTimelineType::None;
    this->EndActionCamera = NULL;
    this->EndOpponentActionCamera = NULL;
}

