#include "KoratTransformCopyControlInfo.h"

FKoratTransformCopyControlInfo::FKoratTransformCopyControlInfo() {
    this->bUseLocation = false;
    this->bUseRotation = false;
    this->bUseScale = false;
    this->ExecuteType = EKoratTransformCopyExecuteType::None;
}

