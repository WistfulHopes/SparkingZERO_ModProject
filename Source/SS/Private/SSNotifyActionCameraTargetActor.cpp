#include "SSNotifyActionCameraTargetActor.h"
#include "Components/SceneComponent.h"

ASSNotifyActionCameraTargetActor::ASSNotifyActionCameraTargetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->BattleCameraType = ENewBattleCameraType::NONE;
    this->TeleportType = ETypeOfTeleportToPassToBattleCamera::None;
    this->bDestroy = false;
    this->bDeterminedTargetPosition = false;
    this->EstimatedArrivalTime = -1.00f;
    this->WatchCount = 0;
}

void ASSNotifyActionCameraTargetActor::SetDeterminedTargetPosition(const bool bInDetermined) {
}

void ASSNotifyActionCameraTargetActor::SetBattleCameraType(const ENewBattleCameraType InBattleCameraType, const ETypeOfTeleportToPassToBattleCamera InTeleportType) {
}

void ASSNotifyActionCameraTargetActor::KillMySelf() {
}

bool ASSNotifyActionCameraTargetActor::IsDeterminedTargetPosition() const {
    return false;
}

FVector ASSNotifyActionCameraTargetActor::GetHitNormal() const {
    return FVector{};
}

float ASSNotifyActionCameraTargetActor::GetEstimatedArrivalTime() const {
    return 0.0f;
}


