#include "KoratFreeTimelineActor.h"
#include "Components/SceneComponent.h"
#include "KoratDefaultIdData.h"
#include "KoratFreeTimelineAssetGetter.h"
#include "Net/UnrealNetwork.h"

AKoratFreeTimelineActor::AKoratFreeTimelineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->FreeTimelinePlayer = NULL;
    this->FreeTimelineAssetGetter = CreateDefaultSubobject<UKoratFreeTimelineAssetGetter>(TEXT("FreeTimelineAssetGetter"));
    this->FreeTimelineAssetGetterComponent = NULL;
    this->LineTraceComponent = NULL;
    this->ColliderComponent = NULL;
    this->SpaceAreaComponent = NULL;
    this->bPlayCompleteAndDestroy = true;
    this->bReferenceFreeTimelineActor = false;
    this->bIgnoreComponentPostion = false;
    this->bEnableFinishPlayOT = false;
    this->OverrideTransformPreset = EKoratFreeTimelineOverrideTransformPreset::Custom;
    this->RequestPlayer = EKoratFreeTimelineActorRequest::None;
    this->CurrentRequestPlayer = EKoratFreeTimelineActorRequest::None;
    this->RequestController = NULL;
    this->ExecuteActor = NULL;
    this->ColorSourceByCharacter = NULL;
    this->EffectMultipleColorComponent = NULL;
    this->IdDataInstance = CreateDefaultSubobject<UKoratDefaultIdData>(TEXT("IdData"));
    this->RequestAuraPlay = EKoratFreeTimelineActorPlayType::None;
    this->InstanceData = NULL;
    this->AttachRootComponent = (USceneComponent*)RootComponent;
    this->LastUsedAsset = NULL;
    this->SaveSpawnLineTraceParameter = NULL;
    this->SaveSpawnAtbSpaceParameter = NULL;
    this->SaveSpawnAtbColliderParameter = NULL;
    this->SaveActionTriggerParameter = NULL;
    this->SaveAtbTypeParameter = NULL;
    this->HitInformation = NULL;
}

AKoratFreeTimelineActor* AKoratFreeTimelineActor::SpawnFreeTimelineActor(const FFreeTimelineActorParamater InParams, UObject* SourceObject) {
    return NULL;
}

void AKoratFreeTimelineActor::SetUseSequencePlayInfoName(const FName InKey) {
}

void AKoratFreeTimelineActor::SetTransformOffset(const FTransform InTransform) {
}

bool AKoratFreeTimelineActor::SetSourceColor(const FKoratEffectColorDataDetail& InSourceColorData) {
    return false;
}

void AKoratFreeTimelineActor::SetSequencePlayInfo(const TArray<FKoratSequencePlayInfo> InInfo) {
}

void AKoratFreeTimelineActor::SetRequestPlayer(EKoratFreeTimelineActorRequest InRequest) {
}

void AKoratFreeTimelineActor::SetReferensActor(AActor* InActor) {
}

void AKoratFreeTimelineActor::SetPlayedDestroy(const bool bInPlayCompletedDestroy) {
}

void AKoratFreeTimelineActor::SetOverrideTransformPreset(const EKoratFreeTimelineOverrideTransformPreset InPreset) {
}

void AKoratFreeTimelineActor::SetInteractTriggerOverride(const FKoratInteractTriggerTypeDataList& InTriggerOverride) {
}

void AKoratFreeTimelineActor::SetFreeTimelineType(const FKoratFreeTimelineTypeSetting InSettings) {
}

void AKoratFreeTimelineActor::SetExecuteActor(ASSCharacter* InExecuteCharacter) {
}

void AKoratFreeTimelineActor::SetEffectInteractData(const FKoratInteractAttributeData& InIntaractData) {
}

void AKoratFreeTimelineActor::SetColorSourceByCharacter(ASSCharacter* InColorSourceByChracter) {
}

void AKoratFreeTimelineActor::SetAtbNameUseAtbType(const FKoratInteractAtbTypeDataList InDataList) {
}

void AKoratFreeTimelineActor::SetActionNameUseTrigger(const FKoratActionDataList InDataList) {
}

void AKoratFreeTimelineActor::RequestSequencePlayInfo(const FKoratSequencePlayInfo InInfo) {
}

void AKoratFreeTimelineActor::OnPlayComplete_Implementation(UKoratFreeTimelinePlayerBase* InFreeTimelinePlayer) {
}

FTransform AKoratFreeTimelineActor::MakeOverrideTransform_Implementation() {
    return FTransform{};
}

bool AKoratFreeTimelineActor::IsOneShot_Implementation() {
    return false;
}

FName AKoratFreeTimelineActor::GetUseSequencePlayInfoName() const {
    return NAME_None;
}



FTransform AKoratFreeTimelineActor::GetTransformElement(const EKoratFreeTimelineTransformElement InType) const {
    return FTransform{};
}

FKoratEffectColorDataDetail AKoratFreeTimelineActor::GetSourceColor() {
    return FKoratEffectColorDataDetail{};
}

EKoratFreeTimelineActorRequest AKoratFreeTimelineActor::GetRequestPlayer() const {
    return EKoratFreeTimelineActorRequest::None;
}

FKoratInteractAtbTypeDataList AKoratFreeTimelineActor::GetInteractAtbType(const TEnumAsByte<EPhysicalSurface> InPhysicalSurface) {
    return FKoratInteractAtbTypeDataList{};
}


void AKoratFreeTimelineActor::ClearSequencePlayInfo() {
}

bool AKoratFreeTimelineActor::CanPlay_Implementation() {
    return false;
}

void AKoratFreeTimelineActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AKoratFreeTimelineActor, FreeTimelinePlayer);
    DOREPLIFETIME(AKoratFreeTimelineActor, FreeTimelinePlayerArray);
    DOREPLIFETIME(AKoratFreeTimelineActor, WaitPlayCompletePlayerHandle);
}


