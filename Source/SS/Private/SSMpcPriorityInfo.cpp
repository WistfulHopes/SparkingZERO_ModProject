#include "SSMpcPriorityInfo.h"

FSSMpcPriorityInfo::FSSMpcPriorityInfo() {
    this->Mpc = NULL;
    this->ParameterType = EKoratMpcParameterType::Scalar;
    this->Priority = 0;
    this->ScalarValue = 0.00f;
    this->bUpdateFlag = false;
}

