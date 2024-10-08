#include "KoratDestructionStaticMeshActor.h"
#include "KoratDestructionFadeComponent.h"
#include "KoratDestructionTimerComponent.h"

AKoratDestructionStaticMeshActor::AKoratDestructionStaticMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->SwitchTimerComponent = CreateDefaultSubobject<UKoratDestructionTimerComponent>(TEXT("KoratDestructionTimerComponent0"));
    this->DestructionEffectTimerComponent = CreateDefaultSubobject<UKoratDestructionTimerComponent>(TEXT("KoratNonDestructionEffectTimerComponent"));
    this->DisapperTimerComponent = NULL;
    this->FadeComponent = CreateDefaultSubobject<UKoratDestructionFadeComponent>(TEXT("KoratDestructionFadeComponent0"));
    this->DestructionObjectType = EKoratDestructionObjectType::Uninit;
    this->bDebug = false;
}

void AKoratDestructionStaticMeshActor::SetObjectType(EKoratDestructionObjectType SetType) {
}



void AKoratDestructionStaticMeshActor::PlayDestructionEffectStart(float Delay, const FKoratDestructionFieldParameter& DestructionFieldParameter) {
}

void AKoratDestructionStaticMeshActor::OnSwitchTimerEventCallback(int32 DelayIndex, const FKoratDestructionFieldParameter& DestructionFieldParameter) {
}

FKoratDestructionDamageResult AKoratDestructionStaticMeshActor::OnPreDamage_Implementation(const FKoratDestructionFieldParameter& FieldParams) {
    return FKoratDestructionDamageResult{};
}

void AKoratDestructionStaticMeshActor::OnLandedEventCallback(AActor* Actor, FKoratDestructionLandedParameter LandedParams) {
}

void AKoratDestructionStaticMeshActor::OnFadeEndEventCallback() {
}

void AKoratDestructionStaticMeshActor::OnDestructionEffectPlayTimerEventCallback(int32 DelayIndex, const FKoratDestructionFieldParameter& DestructionFieldParameter) {
}

void AKoratDestructionStaticMeshActor::OnDependentBrokenEventCallback(const AActor* Actor) {
}

FKoratDestructionDamageResult AKoratDestructionStaticMeshActor::OnDamageEventCallback(AActor* Actor, FKoratDestructionFieldParameter FieldParams) {
    return FKoratDestructionDamageResult{};
}

void AKoratDestructionStaticMeshActor::OnActorHitEventCallback(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void AKoratDestructionStaticMeshActor::OnActorBeginOverlapEventCallback(AActor* OverlappedActor, AActor* OtherActor) {
}

EKoratDestructionObjectType AKoratDestructionStaticMeshActor::GetObjectType() const {
    return EKoratDestructionObjectType::Uninit;
}



void AKoratDestructionStaticMeshActor::FadeStart(const float Time) {
}

void AKoratDestructionStaticMeshActor::ChangeStart(const FKoratDestructionSwitchOptions& Options, float Delay, const FKoratDestructionFieldParameter& DestructionFieldParameter) {
}


void AKoratDestructionStaticMeshActor::BeforeReceiveDestructionDamageCallback(const EKoratStaticMeshDestructedExecType ExecType, const FKoratDestructionFieldParameter& SetFieldParameter) {
}


