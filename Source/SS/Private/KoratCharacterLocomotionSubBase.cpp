#include "KoratCharacterLocomotionSubBase.h"

UKoratCharacterLocomotionSubBase::UKoratCharacterLocomotionSubBase() {
    this->XYSpeedThreshold = 10.00f;
}

float UKoratCharacterLocomotionSubBase::CalculationSideStepAddYaw(ASSCharacter* InCharacter, float InDeltaSeconds, float InMaxSpeed) {
    return 0.0f;
}

bool UKoratCharacterLocomotionSubBase::CalculationLookatRotationStoneThrow(ACharacter* InCharacter, FVector InLookAtNormal, FRotator& OutLocation) {
    return false;
}

bool UKoratCharacterLocomotionSubBase::CalculationLookatLotationIdleMove(ACharacter* InCharacter, FRotator& OutLocation) {
    return false;
}


