#include "SSCineCameraActor.h"

ASSCineCameraActor::ASSCineCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttachMode = EKoratBattleCameraAttachMode::KoratBattleCameraAttachModeMy;
    this->AttachPlayerStartKey = TEXT("\x30A4\x30D9\x30F3\x30C8\x30C7\x30E2\xFF11");
    this->CineCameraMode = EKoratBattleCameraMode::KoratBattleCameraModeSequence;
    this->CineCameraNo = 0;
    this->BlendTimeStart = 0.50f;
    this->BlendTimeLookAtStart = 0.50f;
    this->CineCameraBlendTypeStart = EKoratBattleCameraBlendType::KoratBattleCameraBlendTypeEaseInOut;
    this->CineCameraBlendLineStart = EKoratBattleCameraLine::KoratBattleCameraBlendLineCurve;
    this->BlendLineArcMaxStart = 1.00f;
    this->BlendTimeEnd = 0.50f;
    this->BlendTimeLookAtEnd = 0.50f;
    this->CineCameraBlendTypeEnd = EKoratBattleCameraBlendType::KoratBattleCameraBlendTypeEaseInOut;
    this->CineCameraBlendLineEnd = EKoratBattleCameraLine::KoratBattleCameraBlendLineCurve;
    this->BlendLineArcMaxEnd = 1.00f;
    this->LookAtType = EKoratBattleCameraLookAtType::KoratBattleCameraLookAtTypeNon;
    this->LookAtMtoTPosition = 0.50f;
    this->LookAtZOffset = 0.00f;
    this->LookAtCharaMy = EKoratBattleCameraLookAtChara::KoratBattleCameraLookAtCharaMy;
    this->LookAtCharaMyKey = TEXT("\x30A4\x30D9\x30F3\x30C8\x30C7\x30E2\xFF11");
    this->LookAtMySocketPosition = 0.00f;
    this->LookAtCharaTarget = EKoratBattleCameraLookAtChara::KoratBattleCameraLookAtCharaTarget;
    this->LookAtCharaTargetKey = TEXT("\x30A4\x30D9\x30F3\x30C8\x30C7\x30E2\xFF12");
    this->LookAtTargetSocketPosition = 0.00f;
    this->bViewOffMyFlg = false;
    this->bViewOffTargetFlg = false;
    this->bSequenceYawSetFlg = false;
    this->bSequenceLocationCorrectionFlg = false;
    this->bSequenceInversionFlg = false;
    this->MySocketNameStart = TEXT("CENTER");
    this->MySocketNameEnd = TEXT("CENTER");
    this->TargetSocketNameStart = TEXT("CENTER");
    this->TargetSocketNameEnd = TEXT("CENTER");
    this->bMySocketLock = false;
    this->bTargetSocketLock = false;
    this->bStartCameraFlg = true;
    this->bLocationStopFlg = false;
    this->bLocationTargetLockFlg = false;
    this->LocationTargetLockEndTime = 0.50f;
    this->bTargetCameraOccupation = false;
    this->bTargetCameraOccupationOnly = false;
    this->bMyLengthScaleFlg = false;
    this->bCharaHightFlg = false;
    this->bCharaHightTargetFlg = false;
    this->bPlayingFlg = false;
    this->bHitCameraFlg = false;
    this->BattleRotOffset = 0.00f;
    this->DragonRotMax = 0.00f;
    this->DragonStopTime = 0.00f;
    this->DragonMoveTime = 0.00f;
    this->CameraHandyValue = 1.00f;
    this->CameraShakeValue = 0.00f;
    this->CameraShakeMode = EKoratBattleCameraShakeMode::KoratBattleCameraShakeModeMy;
    this->CameraShakeType = EKoratBattleCameraShakeType::KoratBattleCameraShakeTypeNon;
    this->CameraShakeDistanceRate = 0.01f;
    this->bCameraRotChangeFlg = false;
    this->bCameraRotChangeLookAt = false;
    this->bCameraRotChangeCenterRot = false;
    this->CameraRotChangeRoll = 0.00f;
    this->CameraRotChangePitch = 0.00f;
    this->CameraRotChangeYaw = 0.00f;
    this->CameraRotChangeLength = 0.00f;
    this->bCameraRotChangeLengthAddFlg = false;
}


