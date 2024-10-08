#include "SSCharacterWarpCtrl.h"

ASSCharacterWarpCtrl::ASSCharacterWarpCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDrawDebug = false;
    this->DrawDebugLifetime = 0.00f;
    this->DrawDebugThickness = 0.00f;
    this->ActionCameraWarpMoveStart = NULL;
    this->IsActiveBlastWarpControl = false;
    this->IsActiveImpactWarpControl = false;
    this->IsActiveCameraSendOffset = false;
    this->IsPosUpdateWithDelay = true;
}

void ASSCharacterWarpCtrl::ToggleIsImpactWarpControlActive() {
}

void ASSCharacterWarpCtrl::ToggleIsCameraSendOffsetActive() {
}

void ASSCharacterWarpCtrl::ToggleIsBlastWarpControlActive() {
}

void ASSCharacterWarpCtrl::SetImpactWarpControlActive(bool IsActive) {
}

void ASSCharacterWarpCtrl::SetCameraSendOffsetActive(bool IsActive) {
}

void ASSCharacterWarpCtrl::SetBlastWarpControlActive(bool IsActive) {
}

void ASSCharacterWarpCtrl::OnWarpOverride(const UObject* WorldContextObject, bool InReturn, bool InLoop, const ULevelSequencePlayer* InSequencePlayer) {
}

bool ASSCharacterWarpCtrl::IsImpactWarpControlActive() {
    return false;
}

bool ASSCharacterWarpCtrl::IsCameraSendOffsetActive() {
    return false;
}

bool ASSCharacterWarpCtrl::IsBlastWarpControlActive() {
    return false;
}

ASSMapWarpDataAssetHolder* ASSCharacterWarpCtrl::GetMapWarpDataAssetHolder() {
    return NULL;
}


