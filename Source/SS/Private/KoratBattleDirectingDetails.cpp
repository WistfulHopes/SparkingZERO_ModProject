#include "KoratBattleDirectingDetails.h"

FKoratBattleDirectingDetails::FKoratBattleDirectingDetails() {
    this->DirectingActivate = EKoratBattleDirectingActivate::None;
    this->TargetType = EKoratBattleDirectingConditionTargetType::CharacterSlot;
    this->TargetCharactersPos = 0;
    this->BattleDirectingActivateAction = EKoratBattleDirectingAction::None;
    this->ActivateNumericalValue = 0;
    this->UpdateCpuLevel = 0;
    this->IsEquipItem = false;
    this->EventData = NULL;
    this->bSkipTarget = false;
    this->bEditable_TargetType = EKoratValid::Valid;
    this->bEditable_TargetCharactersPos = EKoratValid::Valid;
    this->bEditable_FormChangeCharacter = EKoratValid::Valid;
    this->bEditable_BattleDirectingActivateAction = EKoratValid::Valid;
    this->bEditable_ActivateNumericalValue = EKoratValid::Valid;
    this->bEditable_CpuThinkingType = EKoratValid::Valid;
    this->bEditable_UpdateCpuLevel = EKoratValid::Valid;
    this->bEditable_IdName = EKoratValid::Valid;
    this->bEditable_IsEquipItem = EKoratValid::Valid;
    this->bEditable_EquipItem = EKoratValid::Valid;
    this->bEditable_Buff = EKoratValid::Valid;
    this->bEditable_BattleConversation = EKoratValid::Valid;
    this->bEditable_EventData = EKoratValid::Valid;
}

