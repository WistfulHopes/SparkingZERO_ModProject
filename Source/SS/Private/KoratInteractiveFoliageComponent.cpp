#include "KoratInteractiveFoliageComponent.h"

UKoratInteractiveFoliageComponent::UKoratInteractiveFoliageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUnDeformAtFinished = true;
}

void UKoratInteractiveFoliageComponent::StopUpdateTransformerInstances(const TArray<int32>& Instances) {
}

int32 UKoratInteractiveFoliageComponent::SetupOriginalTransformsToDevidedComponentsDiv(const FVector& UpperLeft, float ChunkSize, int32 ChunkAmountX, TArray<UKoratInteractiveFoliageComponent*>& ChunkedComponents) {
    return 0;
}

void UKoratInteractiveFoliageComponent::SetupOriginalTransformsToDevidedComponents(const FVector& UpperLeft, float ChunkSize, int32 ChunkAmountX, TArray<UKoratInteractiveFoliageComponent*>& ChunkedComponents) {
}

int32 UKoratInteractiveFoliageComponent::SetupDevidedComponents(TArray<UKoratInteractiveFoliageComponent*>& ChunkedComponents, int32 MaxAdd) {
    return 0;
}

void UKoratInteractiveFoliageComponent::RemoveGrassTransformer(int32 InstanceIndex) {
}

bool UKoratInteractiveFoliageComponent::RemoveGrassStatusIfGrassWaitingToResumeGrow(int32 InstanceIndex) {
    return false;
}

void UKoratInteractiveFoliageComponent::RemoveGrassStatus(int32 InstanceIndex, EKoratGrassStatus Status) {
}

bool UKoratInteractiveFoliageComponent::IsGrassWaitingToResumeGrow(int32 InstanceIndex) {
    return false;
}

bool UKoratInteractiveFoliageComponent::IsGrassUnTrampling(int32 InstanceIndex) {
    return false;
}

bool UKoratInteractiveFoliageComponent::IsGrassUnDeforming(int32 InstanceIndex) {
    return false;
}

bool UKoratInteractiveFoliageComponent::IsGrassTrampled(int32 InstanceIndex) {
    return false;
}

bool UKoratInteractiveFoliageComponent::IsGrassGrowing(int32 InstanceIndex) {
    return false;
}

bool UKoratInteractiveFoliageComponent::IsGrassFreshlyDeformed(int32 InstanceIndex) {
    return false;
}

bool UKoratInteractiveFoliageComponent::IsGrassDeformed(int32 InstanceIndex) {
    return false;
}

bool UKoratInteractiveFoliageComponent::IsGrassChangingTransform(int32 InstanceIndex) {
    return false;
}

bool UKoratInteractiveFoliageComponent::IsGrassBurnt(int32 InstanceIndex) {
    return false;
}

TArray<int32> UKoratInteractiveFoliageComponent::GetInstancesOverlappingMultiSphereTrace_InstancedStaticMesh(const FVector& Start, const FVector& END, float Radius) {
    return TArray<int32>();
}

TArray<int32> UKoratInteractiveFoliageComponent::GetInstancesOverlappingMultiSphereTrace_Hierarchial(const FVector& Start, const FVector& END, float Radius) {
    return TArray<int32>();
}

float UKoratInteractiveFoliageComponent::GetGrassWaitingToResumeGrowAlpha(int32 InstanceIndex) const {
    return 0.0f;
}

AKoratGrassTransformer* UKoratInteractiveFoliageComponent::GetGrassTransformer(int32 InstanceIndex) {
    return NULL;
}

void UKoratInteractiveFoliageComponent::AddGrassTransformer(int32 InstanceIndex, AKoratGrassTransformer* Transformer) {
}

void UKoratInteractiveFoliageComponent::AddGrassStatusWaitingResumeGrowIfNeedUnDeform(int32 InstanceIndex, float ResumeAlpha) {
}

void UKoratInteractiveFoliageComponent::AddGrassStatus(int32 InstanceIndex, EKoratGrassStatus Status) {
}


