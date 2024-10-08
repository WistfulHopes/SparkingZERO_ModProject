#include "SSCharacterStencilParams.h"

USSCharacterStencilParams::USSCharacterStencilParams() {
    this->bStencilValid = false;
    this->StencilValue = 0;
    this->Priority = 0;
    this->PriorityOffset = 0;
    this->bOverwriteOnlyWhenEmptyStencil = false;
    this->bActive = true;
}


