#include "SSAiPadDataList.h"

FSSAiPadDataList::FSSAiPadDataList() {
    this->ExecutionOrder = 0;
    this->NextExecutionOrder = 0;
    this->ProgramMoveType = ESSAiProgramMoveType::None;
    this->InputTime = 0.00f;
    this->InputTimeLevelCurve = NULL;
    this->InputTimeRandom = 0.00f;
    this->InputTimeRandomLevelCurve = NULL;
    this->InputRangeType = ESSAiRangeType::RangeShort;
    this->InputChargeLv = 0;
    this->InputPathMoveType = ESSAiPathMoveTargetType::None;
    this->TimeOutSec = 0.00f;
    this->EnergyLevelRatio = 0.00f;
    this->HeightDif = 0.00f;
    this->bMovementLimitCheck = false;
    this->bEnergyLevelCheck = false;
    this->bBehindCheck = false;
    this->bNotDamageCancel = false;
    this->bReProbabilityIfSameBranch = false;
}

