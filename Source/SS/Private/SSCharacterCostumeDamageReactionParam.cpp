#include "SSCharacterCostumeDamageReactionParam.h"

FSSCharacterCostumeDamageReactionParam::FSSCharacterCostumeDamageReactionParam() {
    this->MovementTransition = EKoratCharacterMovementTransition::None;
    this->bInHoming = false;
    this->bInBlownAttack = false;
    this->AttackType = EKoratActionAttackType::None;
    this->OpponentHitSituation = ESituationOfOpponentWhenAttackHit::Hit;
    this->ReactionDirection = EKoratReactionDirection::Default;
    this->RequestReactionDirection = EKoratReactionDirection::Default;
    this->bLastDamageReactionBySameRushDerived = false;
}

