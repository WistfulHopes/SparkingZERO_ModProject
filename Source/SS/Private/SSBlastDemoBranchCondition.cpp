#include "SSBlastDemoBranchCondition.h"

FSSBlastDemoBranchCondition::FSSBlastDemoBranchCondition() {
    this->BranchType = ESSBlastDemoBranchType::None;
    this->SortId = 0;
    this->bTrueIfAllApply = false;
    this->Finish = EYesNoType::Unspecified;
    this->TargetGiant = EYesNoType::Unspecified;
    this->MyselfRemainingHP = 0.00f;
    this->TargetSparkingMode = EYesNoType::Unspecified;
    this->InWallBranchingArea = EYesNoType::Unspecified;
    this->FateUb = EYesNoType::Unspecified;
    this->ExParam = 0;
    this->SpDerivationType = EBlastDemoSpDerivationType::Unspecified;
    this->VictoryAppealWarpType = EVictoryAppealWarpType::MyselfSafeArea;
}

