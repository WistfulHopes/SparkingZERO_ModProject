#include "SSEventVoicePlayer.h"

ASSEventVoicePlayer::ASSEventVoicePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ASSEventVoicePlayer::StopEventNarratorVoice() {
}

void ASSEventVoicePlayer::StopEventCharaVoice() {
}

void ASSEventVoicePlayer::PlayEventNarratorVoice(const FString& InSoundName, float InVolume) {
}

void ASSEventVoicePlayer::PlayEventCharaVoiceByID(const int32 InSoundId, float InVolume, bool IsLipSync) {
}

void ASSEventVoicePlayer::PlayEventCharaVoice(const FString& InSoundName, float InVolume, bool IsLipSync) {
}

void ASSEventVoicePlayer::PlayCharaVoice(const int32 InSoundCueID, float InVolume) {
}

bool ASSEventVoicePlayer::IsActive() {
    return false;
}


