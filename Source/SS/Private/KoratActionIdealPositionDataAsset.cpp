#include "KoratActionIdealPositionDataAsset.h"

UKoratActionIdealPositionDataAsset::UKoratActionIdealPositionDataAsset() {
    this->MaxSpeed = 5000.00f;
    this->MaxAcceleration = 20000.00f;
    this->bResetVelocity = false;
    this->AngularVelocity = 360.00f;
    this->HomingAngleRange = 120.00f;
    this->bNoHomingUpwards = false;
    this->bUseOpponentRadius = false;
    this->bUseOneselfRadius = false;
    this->bNoTilt = false;
    this->bMidAirKick = false;
    this->bTargetPreLastPosition = false;
}


