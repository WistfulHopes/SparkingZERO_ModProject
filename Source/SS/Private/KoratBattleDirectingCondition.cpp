#include "KoratBattleDirectingCondition.h"

FKoratBattleDirectingCondition::FKoratBattleDirectingCondition() {
    this->Trigger = EKoratBattleDirectingTrigger::None;
    this->TargetType = EKoratBattleDirectingConditionTargetType::CharacterSlot;
    this->CharactersPos = 0;
    this->NumericalValueTargetType = EKoratBattleDirectingConditionTargetType::CharacterSlot;
    this->NumericalValue = 0;
    this->InequalitySign = EKoratBattleDirectingInequalitySign::More;
    this->CharacterState = EKoratBattleDirectingCharacterStateType::None;
    this->BattleDirectingAction = EKoratBattleDirectingAction::None;
    this->PlayerCharactersPos = 0;
    this->EnemyCharactersPos = 0;
    this->AttackType = EKoratActionAttackType::None;
    this->KnockDownType = EKoratBattleDirectingKnockDownType::None;
    this->bEditable_TargetType = EKoratValid::Valid;
    this->bEditable_CharactersPos = EKoratValid::Valid;
    this->bEditable_NumericalValueTargetType = EKoratValid::Valid;
    this->bEditable_NumericalValue = EKoratValid::Valid;
    this->bEditable_InequalitySign = EKoratValid::Valid;
    this->bEditable_CharacterState = EKoratValid::Valid;
    this->bEditable_BattleDirectingAction = EKoratValid::Valid;
    this->bEditable_PlayerCharactersPos = EKoratValid::Valid;
    this->bEditable_EnemyCharactersPos = EKoratValid::Valid;
    this->bEditable_ChangeCharacter = EKoratValid::Valid;
    this->bEditable_AttackType = EKoratValid::Valid;
    this->bEditable_KnockDownType = EKoratValid::Valid;
}

