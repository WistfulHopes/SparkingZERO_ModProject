#include "KoratActionTranslationDataAsset.h"

UKoratActionTranslationDataAsset::UKoratActionTranslationDataAsset() {
    this->MaxSpeed = 5000.00f;
    this->MaxAcceleration = 20000.00f;
    this->bResetVelocity = false;
    this->AngularVelocity = 0.00f;
    this->HomingAngleRange = 120.00f;
    this->bNoHomingUpwards = false;
    this->bUseOpponentRadius = false;
    this->bUseOneselfRadius = false;
    this->bUseOpponentDirection = false;
}


