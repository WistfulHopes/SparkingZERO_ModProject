#include "KoratSequenceSoundPlayer.h"
#include "Components/SceneComponent.h"

AKoratSequenceSoundPlayer::AKoratSequenceSoundPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->SoundCueID = -1;
    this->SheetType = EKoratSequenceSoundSheetType::General;
    this->SoundGroupType = ESSSoundGroupType::SEBattle;
    this->bStopSoundEndPlay = false;
    this->bEnableSlowPlaySpeed = false;
    this->bEnableChainPlaySound = false;
    this->bDeleteOnFormChange = false;
    this->FadeOutDuration = -1.00f;
    this->Volume = 100.00f;
    this->ExecuteActor = NULL;
    this->LipsSyncroCharacter0 = NULL;
    this->LipsSyncroCharacter1 = NULL;
    this->LipsSyncroCharacter2 = NULL;
    this->LipsSyncroCharacter3 = NULL;
    this->IsPlay2D = false;
    this->CameraType = EKoratSequenceSoundCameraType::ALL;
    this->IsMoveToDifferentPositionSound = false;
    this->PlayVoiceIndex = 0;
    this->IsResetRandomDataIndex = false;
    this->PatternBGMDataName = EKoratPatternBGMName::None;
    this->BGMType = EKoratSequenceSoundBGMType::BGM;
    this->FadeInTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->IsCrossFade = false;
    this->CtrlType = EKoratSequenceSoundControlType::None;
    this->bUseTerrainRay = false;
    this->SoundManageComponent = NULL;
}

void AKoratSequenceSoundPlayer::SetExecuteActor(ASSCharacter* InCharacter) {
}

void AKoratSequenceSoundPlayer::OnBattleStart() {
}


