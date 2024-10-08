#include "KoratDestructionSwitchController.h"
#include "Components/SceneComponent.h"
#include "KoratDestructionTimerComponent.h"

AKoratDestructionSwitchController::AKoratDestructionSwitchController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->DefaultSceneComponent = (USceneComponent*)RootComponent;
    this->SwitchTimerComponent = CreateDefaultSubobject<UKoratDestructionTimerComponent>(TEXT("KoratDestructionTimerComponent0"));
    this->DisapperTimerComponent = CreateDefaultSubobject<UKoratDestructionTimerComponent>(TEXT("KoratDestructionTimerComponent1"));
    this->StaticMesh = NULL;
}



void AKoratDestructionSwitchController::OnSwitchTimerEventCallback(int32 DelayIndex, const FKoratDestructionFieldParameter& DestructionFieldParameter) {
}

FKoratDestructionDamageResult AKoratDestructionSwitchController::OnPreDamage_Implementation(const FKoratDestructionFieldParameter& DamageParams) {
    return FKoratDestructionDamageResult{};
}

void AKoratDestructionSwitchController::OnDisapperTimerEventCallback(int32 DelayIndex, const FKoratDestructionFieldParameter& DestructionFieldParameter) {
}

FKoratDestructionDamageResult AKoratDestructionSwitchController::OnDamageEventCallback(AActor* Actor, FKoratDestructionFieldParameter DamageParams) {
    return FKoratDestructionDamageResult{};
}

TArray<AActor*> AKoratDestructionSwitchController::GetChangedActors() {
    return TArray<AActor*>();
}

void AKoratDestructionSwitchController::ChangeStart(float Delay, const FKoratDestructionFieldParameter& DestructionFieldParameter) {
}


