#include "KoratGeometryCollectionActor.h"
#include "KoratDestructionFadeComponent.h"
#include "KoratDestructionTimerComponent.h"

AKoratGeometryCollectionActor::AKoratGeometryCollectionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DestructionObjectType = EKoratDestructionObjectType::Uninit;
    this->TimerComponent = CreateDefaultSubobject<UKoratDestructionTimerComponent>(TEXT("KoratDestructionTimerComponent0"));
    this->FadeComponent = CreateDefaultSubobject<UKoratDestructionFadeComponent>(TEXT("KoratDestructionFadeComponent0"));
    this->DestroyDelay = 3.00f;
}

void AKoratGeometryCollectionActor::SetDynamicStateWithRadius(FVector Location, float Radius) {
}


void AKoratGeometryCollectionActor::OnTimerEventCallback(int32 DelayIndex, const FKoratDestructionFieldParameter& DestructionFieldParameter) {
}

FKoratDestructionDamageResult AKoratGeometryCollectionActor::OnPreDamage_Implementation(const FKoratDestructionFieldParameter& FieldParams) {
    return FKoratDestructionDamageResult{};
}

void AKoratGeometryCollectionActor::OnFadeEndEventCallback() {
}

FKoratDestructionDamageResult AKoratGeometryCollectionActor::OnDamageEventCallback(AActor* Actor, FKoratDestructionFieldParameter FieldParams) {
    return FKoratDestructionDamageResult{};
}

void AKoratGeometryCollectionActor::OnActorBeginOverlapEventCallback(AActor* OverlappedActor, AActor* OtherActor) {
}

EFieldPhysicsType AKoratGeometryCollectionActor::GetDisableFieldType_Implementation() const {
    return Field_None;
}


void AKoratGeometryCollectionActor::FadeStart(float Delay) {
}

void AKoratGeometryCollectionActor::DisableStart(float Delay) {
}

void AKoratGeometryCollectionActor::DisableCollection() {
}

void AKoratGeometryCollectionActor::CreateDynamicMaterials() {
}

void AKoratGeometryCollectionActor::BreakStart(float Delay) {
}


