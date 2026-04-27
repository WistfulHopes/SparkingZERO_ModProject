#include "SSBattleSetupControllerBase.h"

ASSBattleSetupControllerBase::ASSBattleSetupControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEnableCharaEntryCamera = false;
    this->GuideWidget = NULL;
    this->SortFilterDialog = NULL;
    this->RollbackCharaReader = NULL;
    this->ManualCameraActor = NULL;
    this->rollbackBeforeCharacter = NULL;
    this->TempNowPlayingDramaticBattleData = NULL;
    this->CurrentCharaSelectPlaceIndex = 0;
    this->BlindEffectSequenceActor = NULL;
    this->TeamTalkSequenceActor = NULL;
    this->TeamLightSequenceActor = NULL;
}

void ASSBattleSetupControllerBase::EffectBlindedSignal() {
}


