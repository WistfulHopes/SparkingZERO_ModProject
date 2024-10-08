#include "CriFsBinderComponent.h"

UCriFsBinderComponent::UCriFsBinderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void UCriFsBinderComponent::Stop() {
}

ECriFsBinderStatus UCriFsBinderComponent::GetStatus() {
    return ECriFsBinderStatus::Stop;
}

void UCriFsBinderComponent::Bind() {
}


