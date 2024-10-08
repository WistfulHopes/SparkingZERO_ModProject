#include "KoratPostprocessCndAgentFloat.h"

AKoratPostprocessCndAgentFloat::AKoratPostprocessCndAgentFloat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Value = 0.00f;
    this->Type = EKoratPostprocessCndParamTypeFloat::DOF_Kernel_MaxBackgroundRadius;
}


