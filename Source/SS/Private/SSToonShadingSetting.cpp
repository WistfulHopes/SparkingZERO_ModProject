#include "SSToonShadingSetting.h"

FSSToonShadingSetting::FSSToonShadingSetting() {
	this->OutlineColor = FLinearColor(0.0f, 0.0f, 0.0f, 0.8f);
    this->LightTargetEvaluationSpace = ESSLightingPositonMethod::ActorLocation;
}