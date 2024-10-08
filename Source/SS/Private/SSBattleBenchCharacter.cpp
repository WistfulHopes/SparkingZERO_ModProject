#include "SSBattleBenchCharacter.h"

ASSBattleBenchCharacter::ASSBattleBenchCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerNo = -1;
    this->MemberNo = -1;
    this->ItemEquipment = NULL;
    this->NumericManager = NULL;
    this->bIsBench = true;
    this->HealedLife = 0.00f;
}

void ASSBattleBenchCharacter::OnBattleStart() {
}


