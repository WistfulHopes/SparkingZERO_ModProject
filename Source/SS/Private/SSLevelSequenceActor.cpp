#include "SSLevelSequenceActor.h"
#include "KoratLevelSequenceInstanceData.h"
#include "SSLevelSequencePlayer.h"

ASSLevelSequenceActor::ASSLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USSLevelSequencePlayer>(TEXT("AnimationPlayer")).SetDefaultSubobjectClass<UKoratLevelSequenceInstanceData>(TEXT("InstanceData"))) {
    this->BurnInOptions = NULL;
    this->bEnableAutoDestroyPlayStop = true;
    this->bIsDestroyDelay = false;
    this->bIsDestroyDelayCancel = false;
    this->CancelLevelSequence = NULL;
    this->bCancelPlayEnable = false;
    this->bRebindOriginTrackOverrideTransformActor = false;
    this->bWarpCtrlSequenceStart = false;
    this->bWarpCtrlSequenceEnd = false;
    this->bIsDemonstrationFromSaveAction = false;
    this->CameraLerpTimeStart = -1.00f;
    this->CameraLerpTimeEnd = -1.00f;
    this->CameraSlot = 0;
    this->CameraBranch = -1;
    this->ManualCameraReconnect = true;
    this->UseCameraRootTransform = false;
    this->CameraRootTransformActor = NULL;
}

bool ASSLevelSequenceActor::ValidateCameras(UMovieSceneSequence* InMasterSequence, FString& OutErrText) {
    return false;
}

void ASSLevelSequenceActor::UnregisterCustomTimeDilation() {
}

void ASSLevelSequenceActor::StopSoundPlayer() {
}

void ASSLevelSequenceActor::StopSequencePlayer() {
}

void ASSLevelSequenceActor::StopPlayerAndDestroyDelayCheck() {
}

void ASSLevelSequenceActor::StopPlayerAndDestroyDelay(const bool bCancel) {
}

void ASSLevelSequenceActor::StopPlayerAndDestroy(const bool bCancel) {
}

void ASSLevelSequenceActor::StartCharacterCameraFromPlayerOnPlay() {
}

void ASSLevelSequenceActor::SetWorldToonPointLightData(const FKoratCharacterPointLightData& InData) {
}

bool ASSLevelSequenceActor::SetupRebinds(const TArray<FKoratRebindDescription>& InRebindArray) {
    return false;
}

bool ASSLevelSequenceActor::SetupRebind(const FKoratRebindDescription& InRebind) {
    return false;
}

bool ASSLevelSequenceActor::SetupPlayDescription(FKoratSequencePlayDescription& InPlayDescription) {
    return false;
}

bool ASSLevelSequenceActor::SetupOverrideTransform(const FKoratOverrideTransformDescription& InOverrideTransformParam) {
    return false;
}

bool ASSLevelSequenceActor::SetupEtcResources(FKoratEtcResources& InEtcResource) {
    return false;
}

bool ASSLevelSequenceActor::SetReindByTag(FKoratRebindDescriptionByTag& InRebindInfo) {
    return false;
}

void ASSLevelSequenceActor::SetRebindsForGame(bool bRebindCharacterCamera, bool bRebindFrontCamera, float InCameraLerpTimeStart, float InCameraLerpTimeEnd, int32 InCameraSlot, int32 InCameraBranch, bool InManualCameraReconnect, bool InBCameraRootTransform, AActor* InCameraRootTransformActor, const FTransform& InCameraRootTransform, bool InNoUseOwnerCutDirector, float InDelayConnectTime, const TMap<FString, ASSCharacter*>& InRebindCharacters, const TArray<FKoratCharacterDataList>& InPhysicalDisparityCharacterIDS) {
}

bool ASSLevelSequenceActor::SetRebind(FString& InNameRegexPattern, AActor* RebindActor, const bool DisableAnimTrack, const bool DisableTransformTrack) {
    return false;
}

void ASSLevelSequenceActor::SetPlayInfoNextLabel(const FName Label, const FName NewNextLabel) {
}

void ASSLevelSequenceActor::SetPlayInfo(const TArray<FKoratSequencePlayInfo>& InPlayInfoList) {
}

void ASSLevelSequenceActor::SetCharacterEffectColorDataSet(const FKoratCharacterEffectColorSetData& InColorSetData) {
}

void ASSLevelSequenceActor::SetCancelLevelSequence(ULevelSequence* InCancelLevelSequence) {
}

void ASSLevelSequenceActor::RegisterCustomTimeDilation() {
}

bool ASSLevelSequenceActor::PlaySequencePlayerInLooping(const int32 StartFrame, const bool bPauseAtEnd, const int32 NumLoops) {
    return false;
}

bool ASSLevelSequenceActor::PlaySequencePlayerByInfo(const FName Label, const float PlayRatio) {
    return false;
}

bool ASSLevelSequenceActor::PlaySequencePlayer(const int32 StartFrame, const bool bPauseAtEnd) {
    return false;
}

bool ASSLevelSequenceActor::PlaySequence(const FKoratSequencePlayDescription& InPlayDescription) {
    return false;
}

void ASSLevelSequenceActor::OnSetCustomTimeDilation(const float InTimeDilation, const EKoratSetCustomTimeDilationReason InReason) {
}

void ASSLevelSequenceActor::OnFinished() {
}

void ASSLevelSequenceActor::OnChanedBuffForm(const FKoratBuffFormTypeDataList& InPreForm, const FKoratBuffFormTypeDataList& InNewForm) {
}

void ASSLevelSequenceActor::LogOnDestroyed(AActor* InActor) {
}

void ASSLevelSequenceActor::KillMySelf() {
}

bool ASSLevelSequenceActor::IsSequencePlayerPlaying() const {
    return false;
}

USSLevelSequencePlayer* ASSLevelSequenceActor::GetSSSequencePlayer() {
    return NULL;
}

void ASSLevelSequenceActor::EndEffectSequenceCamera() {
}

void ASSLevelSequenceActor::AddRebindInfo(FMovieSceneObjectBindingID InBindingId, const FString& InName, uint32 InActorGUID) {
}


