#include "KoratPostProcessTimeScaleOverwriteComponent.h"

UKoratPostProcessTimeScaleOverwriteComponent::UKoratPostProcessTimeScaleOverwriteComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseParameterNameList.AddDefaulted(654);
    this->OverrideParameterNameList.AddDefaulted(1);
    this->TimeScaleComponent = NULL;
}


