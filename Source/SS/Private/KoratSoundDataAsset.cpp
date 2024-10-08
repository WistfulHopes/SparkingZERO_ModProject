#include "KoratSoundDataAsset.h"

UKoratSoundDataAsset::UKoratSoundDataAsset() {
}

void UKoratSoundDataAsset::Sort() {
}

void UKoratSoundDataAsset::Prepare() {
}

FName UKoratSoundDataAsset::GetVoiceCueSheetName(FKoratCharacterCostumeDataList InEquipCostumeDataList) const {
    return NAME_None;
}

FName UKoratSoundDataAsset::GetSoundEffectCueSheetName() const {
    return NAME_None;
}

void UKoratSoundDataAsset::GetSetPlayVoiceData(const FName& InDataName, FKoratSetPlayVoiceData& OutSetPlayVoiceData, EKoratBranch& OutResult) const {
}

void UKoratSoundDataAsset::GetPatternVoice(const FName& InPatternName, FName& OutVoiceCueName, EKoratBranch& OutResult) const {
}

void UKoratSoundDataAsset::DeleteUselessData() {
}


