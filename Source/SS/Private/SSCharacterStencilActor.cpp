#include "SSCharacterStencilActor.h"

ASSCharacterStencilActor::ASSCharacterStencilActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStencilValid = false;
    this->StencilValue = 0;
    this->Priority = 0;
    this->PriorityOffset = 1024;
    this->TargetCharcter = NULL;
    this->StencilParams = NULL;
}

void ASSCharacterStencilActor::SetStencilValue(int32 Value) {
}

void ASSCharacterStencilActor::SetStencilValid(bool Value) {
}

void ASSCharacterStencilActor::SetPriorityOffset(int32 Value) {
}

void ASSCharacterStencilActor::SetPriority(int32 Value) {
}

int32 ASSCharacterStencilActor::GetStencilValue() const {
    return 0;
}

bool ASSCharacterStencilActor::GetStencilValid() const {
    return false;
}

int32 ASSCharacterStencilActor::GetPriorityOffset() const {
    return 0;
}

int32 ASSCharacterStencilActor::GetPriority() const {
    return 0;
}


