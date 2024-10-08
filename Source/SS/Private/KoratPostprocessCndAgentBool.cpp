#include "KoratPostprocessCndAgentBool.h"

AKoratPostprocessCndAgentBool::AKoratPostprocessCndAgentBool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Value = false;
    this->Type = EKoratPostprocessCndParamTypeBool::TEST;
}


