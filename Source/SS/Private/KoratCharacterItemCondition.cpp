#include "KoratCharacterItemCondition.h"

FKoratCharacterItemCondition::FKoratCharacterItemCondition() {
    this->Target = ESSCharacterItemConditionTarget::None;
    this->Condition = 0;
    this->Condition2 = 0;
    this->bSparking = false;
    this->bAtBattleStart = false;
    this->bAtCharacterEntry = false;
    this->bAtFirstTaketurns = false;
    this->bAtFastAvoidanceBlast = false;
    this->bAtEmoteStart = false;
    this->bAtGuardCrash = false;
    this->bAtSparking = false;
    this->bAtDestroyEnemy = false;
    this->bAtUltimateBlast = false;
    this->bAtNoHitBlast = false;
    this->bInMap = false;
    this->bHPPer = false;
    this->bSPPer = false;
    this->bStockNum = false;
    this->bGender = false;
    this->bDP = false;
    this->bLockon = false;
    this->bDPComparison = false;
    this->bInWater = false;
    this->bDown = false;
    this->bEx = false;
    this->bPassingEmoteTime = false;
    this->ConditionGender = EKoratCharacterGenderType::None;
    this->IfLockon = ESSCharacterItemConditionIf::Enable;
    this->IfSparking = ESSCharacterItemConditionIf::Enable;
    this->IfInWater = ESSCharacterItemConditionIf::Enable;
    this->IfDown = ESSCharacterItemConditionIf::Enable;
    this->EmoteTime = 0.00f;
}

