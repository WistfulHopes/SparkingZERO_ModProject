#include "SSCameraManager.h"
#include "Templates/SubclassOf.h"

ASSCameraManager::ASSCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerID = -1;
    this->bFromSequence = false;
    this->ConnectedTime = 0.00f;
    this->bShakeClosing = false;
    this->ForceElapsedTime = 0.00f;
    this->ShakeInstanceGlobal = NULL;
    this->ShakeClassGlobal = NULL;
    this->ShakeAssetIDGlobal = 0;
    this->bShakePlayingCompositMode = false;
    this->ShakePlayingCameraGlobal = NULL;
    this->bHandyShake = false;
    this->ShakeAssetType = EShakeAssetType::Stop;
    this->ShakeAssetID = 0;
    this->ShakeCameraSlot = ECameraGlobalSlot::GLOBAL_SLOT_MAX;
    this->PreShakeForceType = EShakeForceType::None;
    this->ShakeForcePlaying = false;
    this->ShakeTargetType = EShakeTargetType::Player;
    this->ShakeForceType = EShakeForceType::None;
}

void ASSCameraManager::StopShakeGlobal(bool InCompositMode, ASSCutCameraActor* InDirectorMainCamera, bool InImmediate, bool InForceShakeManual, int32 InShakeAssetIDOrigin) {
}

void ASSCameraManager::PlayShakeGlobal(bool InCompositMode, ASSCutCameraActor* InDirectorMainCamera, float InScaleNormalShake, float InScaleHandyShake, const TSubclassOf<ULegacyCameraShake> InShakeClass, int32 InShakeAssetIDOrigin, bool InForceShakeManual) {
}


