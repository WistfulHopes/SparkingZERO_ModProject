#include "KoratInteractAtbLineTraceComponent.h"

UKoratInteractAtbLineTraceComponent::UKoratInteractAtbLineTraceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableSpaceAreaOnlyHit = false;
    this->MyActor = NULL;
    this->LastSurfaceType = SurfaceType_Default;
    this->DebugUsingUniqueID = -1;
}

void UKoratInteractAtbLineTraceComponent::SetDefaultValue(const FKoratInteractAtbTypeDataList& InType) {
}

bool UKoratInteractAtbLineTraceComponent::IsOneShot_Implementation() {
    return false;
}

TEnumAsByte<EPhysicalSurface> UKoratInteractAtbLineTraceComponent::GetPhysicalSurface(const FHitResult& InHitResult) {
    return SurfaceType_Default;
}

FKoratInteractAtbTypeDataList UKoratInteractAtbLineTraceComponent::GetParameter() {
    return FKoratInteractAtbTypeDataList{};
}

FVector UKoratInteractAtbLineTraceComponent::GetLineTraceStartPos() const {
    return FVector{};
}

FVector UKoratInteractAtbLineTraceComponent::GetLineTraceEndPos() const {
    return FVector{};
}

void UKoratInteractAtbLineTraceComponent::CheckHitInformation_Implementation(UKoratInteractHitInformationBase* IneParam) {
}

bool UKoratInteractAtbLineTraceComponent::CanPlay_Implementation() {
    return false;
}


