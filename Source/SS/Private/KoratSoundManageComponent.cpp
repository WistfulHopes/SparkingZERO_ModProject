#include "KoratSoundManageComponent.h"

UKoratSoundManageComponent::UKoratSoundManageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FKoratSoundHandle UKoratSoundManageComponent::PlayOnAisac(int32 InSoundId, const FString& InSoundName, ESSSoundGroupType InSoundType, bool bInUseGeneralSheet, float InVolume, const FName& InAttachLocationName, const FVector& InAttachLocation, bool IsVibration, const FString& InSelectorName, const FString& InLabelName, const bool IsEnableSlowPlaySpeed, const TMap<FString, float>& InAisacInfomation, const EKoratVibrationControllerType InControllerVibrationType) {
    return FKoratSoundHandle{};
}

FKoratSoundHandle UKoratSoundManageComponent::PlayEventCharaVoiceByID(const int32 InSoundId, float InVolume, const FName& InAttachLocationName, const FVector& InAttachLocation, bool IsLipSync) {
    return FKoratSoundHandle{};
}

FKoratSoundHandle UKoratSoundManageComponent::PlayEventCharaVoice(const FString& InSoundName, float InVolume, const FName& InAttachLocationName, const FVector& InAttachLocation, bool IsLipSync) {
    return FKoratSoundHandle{};
}

FKoratSoundHandle UKoratSoundManageComponent::PlayCharaBGM(const EKoratPatternBGMName InPatternBGMName, const float InFadeInTime, const float InFadeOutTime, const bool InCrossFade, const bool InInsertBGM) {
    return FKoratSoundHandle{};
}

FKoratSoundHandle UKoratSoundManageComponent::Play(int32 InSoundId, ESSSoundGroupType InSoundType, bool bInUseGeneralSheet, float InVolume, const FName& InAttachLocationName, const FVector& InAttachLocation, bool IsVibration, const FString& InSelectorName, const FString& InLabelName, const bool IsEnableSlowPlaySpeed) {
    return FKoratSoundHandle{};
}


