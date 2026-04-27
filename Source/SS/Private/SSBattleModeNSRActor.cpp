#include "SSBattleModeNSRActor.h"

ASSBattleModeNSRActor::ASSBattleModeNSRActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NextEnemyDetectedSequence = NULL;
}

void ASSBattleModeNSRActor::OnBgmManagerReady(ASSBGMManager* InBgmManager) {
}


