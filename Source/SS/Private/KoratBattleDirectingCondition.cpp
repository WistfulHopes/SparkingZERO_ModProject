#include "KoratBattleDirectingCondition.h"

FKoratBattleDirectingCondition::FKoratBattleDirectingCondition() {
    this->Trigger = EKoratBattleDirectingTrigger::None;
    this->TargetType = EKoratBattleDirectingConditionTargetType::CharacterSlot;
    this->CharactersPos = 0;
    this->bAllMatch = false;
    this->NumericalValueTargetType = EKoratBattleDirectingConditionTargetType::CharacterSlot;
    this->NumericalValue = 0;
    this->NumericalValue2 = 0;
    this->InequalitySign = EKoratBattleDirectingInequalitySign::More;
    this->CharacterState = EKoratBattleDirectingCharacterStateType::None;
    this->BattleDirectingAction = EKoratBattleDirectingAction::None;
    this->PlayerCharactersPos = 0;
    this->EnemyCharactersPos = 0;
    this->AttackType = EKoratActionAttackType::None;
    this->KnockDownType = EKoratBattleDirectingKnockDownType::None;
    this->bEditable_TargetType = false;
    this->bEditable_CharactersPos = false;
    this->bEditable_AllMatch = false;
    this->bEditable_NumericalValueTargetType = false;
    this->bEditable_NumericalValue = false;
    this->bEditable_NumericalValue2 = false;
    this->bEditable_InequalitySign = false;
    this->bEditable_CharacterState = false;
    this->bEditable_BattleDirectingAction = false;
    this->bEditable_TargetAction = false;
    this->bEditable_PlayerCharactersPos = false;
    this->bEditable_EnemyCharactersPos = false;
    this->bEditable_ChangeCharacter = false;
    this->bEditable_AttackType = false;
    this->bEditable_KnockDownType = false;
}

