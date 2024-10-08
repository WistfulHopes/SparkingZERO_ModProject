#include "SSBattleCameraShakeActor.h"

ASSBattleCameraShakeActor::ASSBattleCameraShakeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraShakeValue = 1.00f;
    this->CameraShakeMode = EKoratBattleCameraShakeMode::KoratBattleCameraShakeModeTarget;
    this->CameraShakeType = EKoratBattleCameraShakeType::KoratBattleCameraShakeTypeNon;
    this->CameraShakeDistanceRate = 0.00f;
    this->CameraShakeLoopCountMax = -1;
}


