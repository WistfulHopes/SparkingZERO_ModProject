#include "SSLevelSequencePlayer.h"

USSLevelSequencePlayer::USSLevelSequencePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChargeLv = 1;
    this->ExecuteActor = NULL;
    this->SelectedLevelSequence = NULL;
    this->DefaultDuration = 0.00f;
    this->PlayInfoIndex = 0;
    this->UsableCharacterEffectColorSetData = false;
    this->LoopCount = -1;
}

void USSLevelSequencePlayer::SetSequencerPlaySeqNextLabel(const FName Label, const FName NewNextLabel) {
}

void USSLevelSequencePlayer::PlayerStopDelegate() {
}


