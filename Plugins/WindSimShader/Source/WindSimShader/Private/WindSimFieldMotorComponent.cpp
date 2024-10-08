#include "WindSimFieldMotorComponent.h"

UWindSimFieldMotorComponent::UWindSimFieldMotorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ManagerComponent = NULL;
    this->ManagerActor = NULL;
    this->bActiveMotor = true;
    this->Type = EWindSimFieldMotorType::SphereDirectional;
    this->bUseUpVector = false;
    this->VectorLength = 1.00f;
    this->Radius = 100.00f;
    this->Power = 1.00f;
    this->FadeDelayTime = 0.00f;
    this->FadeTime = 0.00f;
    this->bPrevLocationEnable = false;
    this->bDebugDraw = false;
}

void UWindSimFieldMotorComponent::SetFadeOut(float InDelayTime, float InFadeTime) {
}

bool UWindSimFieldMotorComponent::AddInputWindVelocity(EWindSimFieldMotorType InType, const FVector& InLocation, const FVector& InVector, float InRadius, float InPower, bool InImpulse, bool InDebugDraw) {
    return false;
}


