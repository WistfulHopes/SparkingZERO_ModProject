#include "SSCharacterVoiceComponent.h"
#include "SSRandom.h"

USSCharacterVoiceComponent::USSCharacterVoiceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IndexSetPlayVoice = 0;
    this->VoiceID = 0;
    this->IsResetRandomPlay = false;
    this->ExecuteActor = NULL;
    this->VoiceVolume = -1.00f;
    this->Random = CreateDefaultSubobject<USSRandom>(TEXT("Random_USSCharacterVoiceComponent"));
}

FKoratSoundHandle USSCharacterVoiceComponent::PlaySetVoice(const FName& InPatternVoice, const int32 InPlayIndex, const bool bInResetRandomPlay, const float InVoiceVolume, const TMap<FString, float>& InAisacInformation) {
    return FKoratSoundHandle{};
}

FKoratSoundHandle USSCharacterVoiceComponent::PlayCharaVoiceByName(const FString& InCueName, const float InVoiceVolume, const TMap<FString, float>& InAisacInformation) {
    return FKoratSoundHandle{};
}

FKoratSoundHandle USSCharacterVoiceComponent::PlayCharaVoice(const int32 InVoiceID, const float InVoiceVolume, const TMap<FString, float>& InAisacInformation) {
    return FKoratSoundHandle{};
}

FKoratSoundHandle USSCharacterVoiceComponent::PlayCharaPatternVoice(const FName& InPatternVoice, const float InVoiceVolume, const TMap<FString, float>& InAisacInformation) {
    return FKoratSoundHandle{};
}


ECharacterVoiceStatus USSCharacterVoiceComponent::GetStatus() {
    return ECharacterVoiceStatus::Failed;
}

FKoratCharacterCostumeDataList USSCharacterVoiceComponent::GetCharacterCostumeDataList() {
    return FKoratCharacterCostumeDataList{};
}

void USSCharacterVoiceComponent::CallBroadcastOnPlayVoiceByName() {
}

void USSCharacterVoiceComponent::CallBroadcastOnPlayVoice() {
}

void USSCharacterVoiceComponent::CallBroadcastOnPlaySetVoice() {
}

void USSCharacterVoiceComponent::CallBroadcastOnPlayPatternVoice() {
}


