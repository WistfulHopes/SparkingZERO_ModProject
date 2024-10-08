#include "SSChameleonAdvancedEffectFeatures.h"

FSSChameleonAdvancedEffectFeatures::FSSChameleonAdvancedEffectFeatures() {
    this->BlendMode = ESSChameleonBlendModes::Normal;
    this->BlendMask = NULL;
    this->BlendDistance = 0.00f;
    this->BlendDistanceSharpness = 0.00f;
    this->BlendDistanceInvert = false;
    this->BlendingOpacity = 0.00f;
    this->EffectPriority = 0;
    this->CustomDepth = false;
    this->StencilBuffer = false;
    this->StencilMask = 0;
}

