#include "KoratBattleDirectingDetails.h"

FKoratBattleDirectingDetails::FKoratBattleDirectingDetails() {
    this->DirectingActivate = EKoratBattleDirectingActivate::None;
    this->TargetType = EKoratBattleDirectingConditionTargetType::CharacterSlot;
    this->TargetCharactersPos = 0;
    this->bDpCheck = false;
    this->bDpLv = 0;
    this->DpInequalitySign = EKoratBattleDirectingInequalitySign2::More;
    this->BattleDirectingActivateAction = EKoratBattleDirectingAction::None;
    this->ActivateNumericalValue = 0;
    this->UpdateCpuLevel = 0;
    this->IsEquipItem = false;
    this->EventData = NULL;
    this->bSkipTarget = false;
    this->bEditable_TargetType = false;
    this->bEditable_TargetCharactersPos = false;
    this->bEditable_bDpCheck = false;
    this->bEditable_FormChangeCharacter = false;
    this->bEditable_BattleDirectingActivateAction = false;
    this->bEditable_ActivateNumericalValue = false;
    this->bEditable_CpuThinkingType = false;
    this->bEditable_UpdateCpuLevel = false;
    this->bEditable_IdName = false;
    this->bEditable_EquipItem = false;
    this->bEditable_Buff = false;
    this->bEditable_BattleConversation = false;
    this->bEditable_EventData = false;
    this->bEditable_RequestAiCommand = false;
    this->bEditable_bSkipTarget = false;
}

