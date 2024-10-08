#include "WindSimFieldComponent.h"

UWindSimFieldComponent::UWindSimFieldComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugViewTexture = NULL;
    this->WindField = NULL;
    this->TimeScale = 1.00f;
    this->WindViscous = 1.00f;
    this->NumPoissonSteps = 20;
    this->ShaderType = EWindSimFieldShaderType::Normal;
}

void UWindSimFieldComponent::SetWindViscous(float viscous) {
}

void UWindSimFieldComponent::SetTimeScale(float Scale) {
}

void UWindSimFieldComponent::SetShaderType(EWindSimFieldShaderType Type) {
}

void UWindSimFieldComponent::SetPoissonSteps(int32 steps) {
}

void UWindSimFieldComponent::SetOutputType(int32 Type) {
}

void UWindSimFieldComponent::SetEnable(bool bEnable) {
}

void UWindSimFieldComponent::SetActiveSimulation(bool bInActiveSimulation) {
}

void UWindSimFieldComponent::ResetWindField() {
}

void UWindSimFieldComponent::Move(const FVector& TargetLocation) {
}

bool UWindSimFieldComponent::IsEnable() const {
    return false;
}

bool UWindSimFieldComponent::IsActiveSimulation() const {
    return false;
}

void UWindSimFieldComponent::Initialize() {
}

void UWindSimFieldComponent::GetWorldFieldSize(FVector& Size) const {
}

float UWindSimFieldComponent::GetWindViscous() const {
    return 0.0f;
}

float UWindSimFieldComponent::GetTimeScale() const {
    return 0.0f;
}

EWindSimFieldShaderType UWindSimFieldComponent::GetShaderType() const {
    return EWindSimFieldShaderType::Normal;
}

int32 UWindSimFieldComponent::GetPoissonSteps() const {
    return 0;
}

void UWindSimFieldComponent::GetFieldDimension(FVector& Dimension) const {
}

bool UWindSimFieldComponent::AddInputDataLocal(EWindSimFieldMotorType Type, const FVector& Pos, const FVector& vec, float Radius, float Power, float fade_rate) {
    return false;
}

bool UWindSimFieldComponent::AddInputData(EWindSimFieldMotorType Type, const FVector& Location, const FVector& vec, float Radius, float Power, bool Impulse, float fade_rate) {
    return false;
}


