#include "SSCharacterActionTargetStruct.h"

FSSCharacterActionTargetStruct::FSSCharacterActionTargetStruct() {
    this->ActionTargetSearchLeft = 0.00f;
    this->ActionTargetSearchRight = 0.00f;
    this->ActionTargetSearchUP = 0.00f;
    this->ActionTargetSearchDown = 0.00f;
    this->ActionTargetSearchDistance = 0.00f;
    this->bUseActionTargetSearchRange = false;
    this->bUseActionTargetSearchRangeStay = false;
    this->IgnoreActionTargetDistance = 0.00f;
    this->bActionTargetStopActionEnd = false;
}

