#include "SSBulletMoveParam.h"

FSSBulletMoveParam::FSSBulletMoveParam() {
    this->SpeedCurve = NULL;
    this->HomingCurve = NULL;
    this->HomingEndTime = 0.00f;
    this->bHomingAvoidDisable = false;
    this->SwichHomingAvoidDisableTime = 0.00f;
    this->GravityCurve = NULL;
}

