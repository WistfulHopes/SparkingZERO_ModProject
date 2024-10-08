#include "SSSoundManager.h"

USSSoundManager::USSSoundManager() {
    this->UIManager = NULL;
    this->SEBattleManager = NULL;
    this->BGMManager = NULL;
    this->VoiceManager = NULL;
    this->SEMapManager = NULL;
    this->CharacterVoiceLanguage = ESSCharacterVoiceLanguage::Japanese;
    this->LevelScriptActor = NULL;
}

void USSSoundManager::Update(const float DeltaTime) {
}

void USSSoundManager::UnloadAcb(const FName& InCueSheetName) {
}

void USSSoundManager::StopSparkingBGM() {
}

void USSSoundManager::StopSoundByType(const ESSSoundGroupType InSoundGroupType) {
}

void USSSoundManager::StopSound(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle& InHandle) {
}

void USSSoundManager::StopLoadAcb(const FName& InCueSheetName, const FString& InCueSheetPath) {
}

void USSSoundManager::StopInsertBGM() {
}

void USSSoundManager::StopByCategoryName(const FString& InCategoryName) {
}

void USSSoundManager::StopBGM() {
}

void USSSoundManager::StopBattleBGM() {
}

void USSSoundManager::StopAllSound() {
}

void USSSoundManager::StartPoseMenu(const EKoratTransitionMode InTransitionMode) {
}

void USSSoundManager::SetVolumeRateByCategory(const FString& InCategoryName, const float InVolume) {
}

void USSSoundManager::SetVolume(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle InHandle, const float InVolume) {
}

void USSSoundManager::SetNextBlockIndex(FKoratSoundHandle InPlayHandle, int32 BlockIndex) {
}

void USSSoundManager::SetCharacterVoiceLanguage(const ESSCharacterVoiceLanguage InCharacterVoiceLangage) {
}

void USSSoundManager::SetAisacByName(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle InHandle, const FString& ControlName, float ControlValue) {
}

void USSSoundManager::Reset() {
}

void USSSoundManager::ReserveBGM(const FKoratBGMDataList InBGMDataList) {
}

void USSSoundManager::RemoveAtomCueSheetLoaderActor(const FName& InCueSheetName) {
}

void USSSoundManager::ReleaseSound() {
}

bool USSSoundManager::ReattachSound(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle& InHandle, USceneComponent* InAttachToComponent, const FName InAttachPointName, const FVector& InLocation) {
    return false;
}

FKoratSoundHandle USSSoundManager::PlaySoundByID(const FName& InCueSheetName, const int32 InSoundId, const ESSSoundGroupType InSoundGroupType, FKoratSoundPlayAtb InSoundPlayAtb, ASSCharacter* InCharacter) {
    return FKoratSoundHandle{};
}

FKoratSoundHandle USSSoundManager::PlaySound(const FName& InCueSheetName, const FString& InSoundName, const ESSSoundGroupType InSoundGroupType, FKoratSoundPlayAtb InSoundPlayAtb, ASSCharacter* InCharacter) {
    return FKoratSoundHandle{};
}

FKoratSoundHandle USSSoundManager::PlayInsertBGM(const FKoratBGMDataList InBGMDataList, const float InDurationInTime, const float InDurationOutTime, const bool InCrossFade, const ESSAnimeSongsModeWhenStartBroadCast InAnimeSongsModeWhenStartBroadCast, const FKoratBGMDataList InOriginalBGMDataList) {
    return FKoratSoundHandle{};
}

FKoratSoundHandle USSSoundManager::PlayChangeLabelBGM(const FKoratBGMDataList InBGMDataList, const float InFadeInTime, const float InFadeOutTime, const bool IsCrossFade) {
    return FKoratSoundHandle{};
}

FKoratSoundHandle USSSoundManager::PlayBGM(const FKoratBGMDataList InBGMDataList, const float InFadeInTime, const float InFadeOutTime, const bool IsCrossFade, const bool IsOverwrite, const ESSAnimeSongsModeWhenStartBroadCast InAnimeSongsModeWhenStartBroadCast, const FKoratBGMDataList InOriginalBGMDataList) {
    return FKoratSoundHandle{};
}

void USSSoundManager::PauseSoundByType(const ESSSoundGroupType InSoundGroupType, const bool bInPause) {
}

void USSSoundManager::PauseSound(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle& InHandle, const bool bInPause) {
}

void USSSoundManager::PauseByCategoryName(const FString& InCategoryName, const bool bInPause) {
}

void USSSoundManager::PauseAllSound(const bool bInPause) {
}

void USSSoundManager::OnLevelChange(AActor* InLevelScriptActor) {
}

void USSSoundManager::OnBattleStart() {
}

void USSSoundManager::OnBattleFinish() {
}

USoundAtomCueSheet* USSSoundManager::LoadAcb(const FName& InCueSheetName, const FString& InCueSheetPath) {
    return NULL;
}

bool USSSoundManager::IsPlaying(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle& InHandle) {
    return false;
}

bool USSSoundManager::IsPausedByCategoryName(const FString& InCategoryName) {
    return false;
}

bool USSSoundManager::IsPaused(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle& InHandle) {
    return false;
}

bool USSSoundManager::IsDisplayDisableSoundDeviceDialog() {
    return false;
}

bool USSSoundManager::IsActive(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle& InHandle) {
    return false;
}

void USSSoundManager::Initialize() {
}

FName USSSoundManager::GetEventCueSheetName() {
    return NAME_None;
}

ESSCharacterVoiceLanguage USSSoundManager::GetCharacterVoiceLanguage() {
    return ESSCharacterVoiceLanguage::Japanese;
}

void USSSoundManager::FinishPoseMenu(const EKoratTransitionMode InTransitionMode) {
}

USoundAtomCueSheet* USSSoundManager::FindAcb(const FName& InCueSheetName, const bool bIsLoad) {
    return NULL;
}

void USSSoundManager::Finalize() {
}

void USSSoundManager::FadeOut(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle& InHandle, const float InFadeOutDuration) {
}

void USSSoundManager::AttachAwbFileToLoadedCueSheet() {
}

void USSSoundManager::AttachAwbFile(USoundAtomCueSheet* InCueSheet) {
}

void USSSoundManager::AsyncLoadAcb(UWorld* InWorld, const FName& InCueSheetName, const FString& InCueSheetPath) {
}

void USSSoundManager::AddAtomCueSheetUnLoadList(USoundAtomCueSheet* InCueSheet) {
}

void USSSoundManager::AddAtomCueSheetInfo(USoundAtomCueSheet* InCueSheet) {
}


