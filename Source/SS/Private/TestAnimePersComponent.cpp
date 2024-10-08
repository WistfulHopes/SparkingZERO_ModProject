#include "TestAnimePersComponent.h"

UTestAnimePersComponent::UTestAnimePersComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = false;
    this->MaterialParameterCollection = NULL;
}


