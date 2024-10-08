#include "SSCutCameraLocator.h"

ASSCutCameraLocator::ASSCutCameraLocator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisable = false;
    this->CameraLocatorOffsetID = ECameraLocatorOffsetID::None;
    this->SocketTypeSrc = ECameraLocatorSocketType::Null;
    this->SocketTypeDst = ECameraLocatorSocketType::Null;
    this->CameraLocatorTargetSrc = ECameraLocatorTargetType::Player;
    this->CameraLocatorTargetDst = ECameraLocatorTargetType::Enemy;
    this->RotatorSrcPitch = 0.00f;
    this->RotatorSrcYaw = 0.00f;
    this->RotatorSrcRoll = 0.00f;
    this->RotatorDstPitch = 0.00f;
    this->RotatorDstYaw = 0.00f;
    this->RotatorDstRoll = 0.00f;
    this->CameraLocatorType = ECameraLocatorType::CameraLocatorTypeBoneAngle;
    this->RotationRate = 0.50f;
    this->LocationRate = 0.00f;
    this->LocationWeightSocket0 = ECameraLocatorSocketType::Null;
    this->LocationWeightSocket1 = ECameraLocatorSocketType::Null;
    this->LocationWeightSocket2 = ECameraLocatorSocketType::Null;
    this->LocationWeightSocket3 = ECameraLocatorSocketType::Null;
    this->LocationWeightTarget0 = ECameraLocatorTargetType::None;
    this->LocationWeightTarget1 = ECameraLocatorTargetType::None;
    this->LocationWeightTarget2 = ECameraLocatorTargetType::None;
    this->LocationWeightTarget3 = ECameraLocatorTargetType::None;
    this->LocationWeight0 = 0.00f;
    this->LocationWeight1 = 0.00f;
    this->LocationWeight2 = 0.00f;
    this->LocationWeight3 = 0.00f;
}


