#include "KoratInteractAtbColliderComponent.h"

UKoratInteractAtbColliderComponent::UKoratInteractAtbColliderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SweepTestDistanceRate = 0.35f;
    this->SweepTestSphereRadius = 100.00f;
    this->SweepCheckSplitCount = 4;
    this->CurrentCollider = NULL;
    this->MyActor = NULL;
}

void UKoratInteractAtbColliderComponent::OnComponentOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UKoratInteractAtbColliderComponent::OnComponentOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool UKoratInteractAtbColliderComponent::IsOneShot_Implementation() {
    return false;
}

FKoratInteractAtbTypeDataList UKoratInteractAtbColliderComponent::GetParameter() {
    return FKoratInteractAtbTypeDataList{};
}

void UKoratInteractAtbColliderComponent::CheckHitInformation_Implementation(UKoratInteractHitInformationBase* InParam) {
}

bool UKoratInteractAtbColliderComponent::CanPlay_Implementation() {
    return false;
}


