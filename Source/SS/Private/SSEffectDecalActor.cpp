#include "SSEffectDecalActor.h"
#include "Components/DecalComponent.h"
#include "Components/SceneComponent.h"

ASSEffectDecalActor::ASSEffectDecalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->X = 1;
    this->Y = 1;
    this->Z = 1;
    this->FadeValue = 1.50f;
    this->BurnIntencity = 0.00f;
    this->InteractMaterial = NULL;
    this->CurrentDynamicMaterialInstance = NULL;
    this->DisplayAlpha = 1.00f;
    this->DyingTimeSpan = 1.00f;
    this->DecalFadeTimeNative = 0.15f;
    this->VolumeMultiplier = 0.10f;
    this->bStartFadeOutFlag = false;
    this->bEvaluatedSequenceFrame = false;
    this->bRemoveFoliage = false;
    this->LimitPriority = 0.00f;
    this->AttachRootComponent = (USceneComponent*)RootComponent;
    this->DecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("InteractDecal"));
    this->bNeedUpdateFlag = false;
    this->bStartDying = false;
    this->DecalComponent->SetupAttachment(RootComponent);
}

void ASSEffectDecalActor::UpdateRotationNative(const bool bNoFadeValueUpdate) {
}

void ASSEffectDecalActor::UpdateNative(const double InDeltaTime, const bool InbCheckMaterialInstance) {
}

void ASSEffectDecalActor::SetZ(const int32 InValue) {
}

void ASSEffectDecalActor::SetY(const int32 InValue) {
}

void ASSEffectDecalActor::SetX(const int32 InValue) {
}

void ASSEffectDecalActor::SetVolumeMultiplier(const double InValue) {
}

void ASSEffectDecalActor::SetupDecal() {
}

void ASSEffectDecalActor::SetSoundHandle(const ESSSoundGroupType InType, FKoratSoundHandle& InHandle) {
}

void ASSEffectDecalActor::SetRemoveFoliage(bool bInValue) {
}

void ASSEffectDecalActor::SetLimitPriority(const double IsValue) {
}

void ASSEffectDecalActor::SetInteractMaterial(UMaterialInterface* InMaterial) {
}

void ASSEffectDecalActor::SetInteractAttribute(const FKoratInteractAtbTypeDataList InAttribute) {
}

void ASSEffectDecalActor::SetFadeValue(double InValue) {
}

void ASSEffectDecalActor::SetDyingTimeSpan(double InValue) {
}

void ASSEffectDecalActor::SetDecalType(const FKoratEffectInteractDecalTypeDataList InDecalType) {
}

void ASSEffectDecalActor::SetBurnIntencity(const float InValue) {
}

void ASSEffectDecalActor::RemoveInstancedFoliageNative() {
}

void ASSEffectDecalActor::InitMaterialInstanceNative() {
}

FKoratSoundHandle ASSEffectDecalActor::GetSoundHandle() const {
    return FKoratSoundHandle{};
}

UDecalComponent* ASSEffectDecalActor::GetDecalComponent() const {
    return NULL;
}

void ASSEffectDecalActor::GetActorVectorNative() {
}

void ASSEffectDecalActor::CreateMaterialInstanceNative() {
}


