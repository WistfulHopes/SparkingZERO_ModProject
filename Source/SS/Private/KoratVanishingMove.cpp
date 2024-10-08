#include "KoratVanishingMove.h"

FKoratVanishingMove::FKoratVanishingMove() {
    this->PositionType = EKoratTargetPositionType::MyPosition;
    this->DirectionType = EKoratMoveDirectionType::CharacterDirection;
    this->RotationType = EKoratAlignRotationType::ActorXToTarget;
    this->Rotate = 0.00f;
    this->CorrectionTowardCenter = 0.00f;
    this->EstimatedLocationAfterSpecifiedTime = 0.00f;
    this->bPossibleRushHighSpeedMoveRevenge = false;
    this->bUseOpponentRadius = false;
    this->bUseOneselfRadius = false;
    this->bHorizontalWhenNearToGround = false;
}

