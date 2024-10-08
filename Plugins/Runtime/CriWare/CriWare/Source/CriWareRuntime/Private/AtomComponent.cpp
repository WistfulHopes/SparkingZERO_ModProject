#include "AtomComponent.h"

UAtomComponent::UAtomComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->bAutoActivate = true;
    this->bUseAttachParentBound = true;
    this->Sound = NULL;
    this->Region = NULL;
    this->bAutoDestroy = false;
    this->bPersistAcrossLevelTransition = false;
    this->bStopWhenOwnerDestroyed = true;
    this->bIsUISound = false;
    this->DefaultVolume = 1.00f;
    this->bEnableMultipleSoundPlayback = false;
    this->bUsePlaylist = false;
    this->bIsMovable = true;
    this->bCanStraddleAudioVolume = true;
    this->bUseAudioVolume = true;
    this->bUseAreaSoundVolume = true;
    this->SoundObject = NULL;
    this->DefaultBlockIndex = 0;
    this->bIsOverrideAisacControlSettingsWithVelocity = false;
    this->LoopSetting = EAtomLoopSetting::Inherited;
    this->bOnly2DSound = false;
    this->PlayWorld = NULL;
    this->GameViewport = NULL;
    this->DefaultSoundObject = NULL;
    this->bOverrideAttenuation = false;
    this->AttenuationSettings = NULL;
    this->CueSheet = NULL;
    this->AppliedSoundObject = NULL;
}

void UAtomComponent::StopWithoutReleaseTime() {
}

void UAtomComponent::Stop() {
}

void UAtomComponent::SetVolume(float Volume) {
}

void UAtomComponent::SetSoundObject(UAtomSoundObject* InSoundObject) {
}

void UAtomComponent::SetSound(USoundAtomCue* NewSound) {
}

void UAtomComponent::SetSelectorLabel(const FString& Selector, const FString& Label) {
}

void UAtomComponent::SetRegion(UAtom3dRegion* InRegion) {
}

void UAtomComponent::SetPreferredOutputPort(const FString& port_name) {
}

void UAtomComponent::SetPitchMultiplier(float NewPitchMultiplier) {
}

void UAtomComponent::SetPitch(float Pitch) {
}

void UAtomComponent::SetOutputPort(const FString& port_name) {
}

void UAtomComponent::SetNextBlockIndex(int32 BlockIndex) {
}

void UAtomComponent::SetDefaultAttenuationEnable(bool bEnable) {
}

void UAtomComponent::SetBusSendLevelOffsetByName(const FString& BusName, float LevelOffset) {
}

void UAtomComponent::SetBusSendLevelOffset(int32 BusId, float LevelOffset) {
}

void UAtomComponent::SetBusSendLevelByName(const FString& BusName, float Level) {
}

void UAtomComponent::SetBusSendLevel(int32 BusId, float Level) {
}

void UAtomComponent::SetAsrRackIdArray(TArray<int32> AsrRackIDs) {
}

void UAtomComponent::SetAsrRackID(int32 asr_rack_id) {
}

void UAtomComponent::SetAisacByName(const FString& ControlName, float ControlValue) {
}

void UAtomComponent::RemovePreferredOutputPort(const FString& port_name) {
}

void UAtomComponent::RemoveOutputPort(const FString& port_name) {
}

void UAtomComponent::Play(float StartTime) {
}

void UAtomComponent::Pause(bool bPause) {
}

bool UAtomComponent::IsReducingTickFrequency() const {
    return false;
}

bool UAtomComponent::IsPlaying() const {
    return false;
}

bool UAtomComponent::IsPaused() const {
    return false;
}

bool UAtomComponent::IsLoop() const {
    return false;
}

bool UAtomComponent::HasBeenEconomicTick() const {
    return false;
}

float UAtomComponent::GetVolume() {
    return 0.0f;
}

FVector UAtomComponent::GetVelocity() const {
    return FVector{};
}

float UAtomComponent::GetTime() const {
    return 0.0f;
}

EAtomComponentStatus UAtomComponent::GetStatus() const {
    return EAtomComponentStatus::Stop;
}

float UAtomComponent::GetSequencePosition() const {
    return 0.0f;
}

int32 UAtomComponent::GetNumQueuedSounds() const {
    return 0;
}

void UAtomComponent::GetNumPlayedSamples(int64& NumSamples, int32& SamplingRate) const {
}

float UAtomComponent::GetMaxAttenuationDistance() const {
    return 0.0f;
}

float UAtomComponent::GetEconomicTickFrequency() const {
    return 0.0f;
}

float UAtomComponent::GetEconomicTickDistanceMargin() const {
    return 0.0f;
}

float UAtomComponent::GetEconomicTickDistance() const {
    return 0.0f;
}

bool UAtomComponent::GetDefaultAttenuationEnable() {
    return false;
}

float UAtomComponent::GetCurrentMaxAttenuationDistance() const {
    return 0.0f;
}

float UAtomComponent::GetCurrentEconomicTickMarginDistance() const {
    return 0.0f;
}

float UAtomComponent::GetCurrentEconomicTickFrequency() const {
    return 0.0f;
}

float UAtomComponent::GetCurrentEconomicTickBoundaryDistance() const {
    return 0.0f;
}

float UAtomComponent::GetCurrentCullingMarginDistance() const {
    return 0.0f;
}

float UAtomComponent::GetCurrentCullingBoundaryDistance() const {
    return 0.0f;
}

AAtomAudioVolume* UAtomComponent::GetCurrentBelongingAudioVolume(EAtomAudioVolumeType Type, bool IsNeighbor) const {
    return NULL;
}

float UAtomComponent::GetCullDistanceMargin() const {
    return 0.0f;
}

float UAtomComponent::GetCullDistance() const {
    return 0.0f;
}

FString UAtomComponent::GetCueName() const {
    return TEXT("");
}

TMap<FString, float> UAtomComponent::GetAudioVolumeValueMap(EAtomAudioVolumeType Type) {
    return TMap<FString, float>();
}

int32 UAtomComponent::GetAtomComponentID() const {
    return 0;
}

UAtomComponent* UAtomComponent::GetAtomComponentFromID(int32 TargetID) {
    return NULL;
}

FAtomAppliedValueParam UAtomComponent::GetAtomAppliedValueParam() {
    return FAtomAppliedValueParam{};
}

void UAtomComponent::FadeOut(float FadeOutDuration) {
}

void UAtomComponent::FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime) {
}

void UAtomComponent::EnqueueSound(USoundAtomCue* NewSound) {
}

void UAtomComponent::DestroyComponentByID(int32 TargetID) {
}

void UAtomComponent::ClearSelectorLabels() {
}

void UAtomComponent::ClearPreferredOutputPort() {
}

void UAtomComponent::ClearOutputPort() {
}

bool UAtomComponent::BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings) {
    return false;
}

void UAtomComponent::AttachAreaSoundVolume(AAtomAreaSoundVolume* sound_shape_volume) {
}

void UAtomComponent::AdjustAttenuation(const FSoundAttenuationSettings& InAttenuationSettings) {
}


