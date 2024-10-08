#include "SSAnimePersComponent.h"

USSAnimePersComponent::USSAnimePersComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = false;
    this->MaterialParameterCollection = NULL;
}


