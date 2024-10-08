#include "KoratDestructionAttackParameter.h"

FKoratDestructionAttackParameter::FKoratDestructionAttackParameter() {
    this->AttackParameterType = EKoratDestructionAttackParameterType::kMove;
    this->DamageLevel = EKoratDestructionDamageLevel::kNoDamage;
    this->MasterField = NULL;
    this->SphereVolume = 0.00f;
    this->FieldDelay = 0.00f;
    this->InteractData = NULL;
}

