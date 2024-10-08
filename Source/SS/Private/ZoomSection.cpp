#include "ZoomSection.h"

FZoomSection::FZoomSection() {
    this->Offset = 0.00f;
    this->OffsetZ = 0.00f;
    this->OffsetZSway = 0.00f;
    this->OffsetZSwayed = 0.00f;
    this->FocalLengthScale = 0.00f;
    this->LerpStartTime = 0.00f;
    this->LerpStartType = ELerpType::Linear;
    this->LerpStartExp = 0.00f;
    this->LerpEndTime = 0.00f;
    this->LerpEndType = ELerpType::Linear;
    this->LerpEndExp = 0.00f;
    this->LatAngleScaleSway = 0.00f;
    this->LatAngleScaleSwayed = 0.00f;
    this->BaseYawMinScaleSway = 0.00f;
    this->BaseYawMinScaleSwayed = 0.00f;
    this->ZoomFocalLengthScaleSway = 0.00f;
    this->ZoomFocalLengthScaleSwayed = 0.00f;
    this->EndTime = 0.00f;
}

