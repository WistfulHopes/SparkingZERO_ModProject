#include "WindSimFieldManagerComponent.h"

UWindSimFieldManagerComponent::UWindSimFieldManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FieldComponent = NULL;
    this->FieldActor = NULL;
    this->SimulationTimeInterval = 0.10f;
    this->SimulationTimeScale = 0.17f;
    this->WindViscous = 16.67f;
    this->NumPoissonSteps = 5;
    this->ShaderType = EWindSimFieldShaderType::Simple;
    this->FollowedActor = NULL;
    this->FieldLocationParameterCollection = NULL;
    this->PlayerLocationParameterCollection = NULL;
}

void UWindSimFieldManagerComponent::SetupParameterCollectionInstanceForPlayerLocaion(UMaterialParameterCollection* Collection, FName ParameterName) {
}

void UWindSimFieldManagerComponent::SetupParameterCollectionInstanceForFieldLocaion(UMaterialParameterCollection* Collection, FName ParameterName) {
}

bool UWindSimFieldManagerComponent::AddInputWindVelocity(EWindSimFieldMotorType InType, const FVector& InLocation, const FVector& InVector, float InRadius, float InPower, bool InImpulse) {
    return false;
}


