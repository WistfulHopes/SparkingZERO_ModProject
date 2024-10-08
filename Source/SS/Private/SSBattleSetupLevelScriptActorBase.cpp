#include "SSBattleSetupLevelScriptActorBase.h"

ASSBattleSetupLevelScriptActorBase::ASSBattleSetupLevelScriptActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharaSelectEntrySequence = NULL;
    this->CharaSelectEntrySequenceLP = NULL;
    this->CharaSelectEntrySequenceLPEmoteBack = NULL;
    this->CharaSelectStandSequence = NULL;
    this->CharaSelectStandNonInterpolationSequence = NULL;
    this->CharaSelectWaitChange = NULL;
    this->CharaTopEntrySequence = NULL;
    this->CharaLeaveSequence = NULL;
    this->NoEffectStandSequence = NULL;
    this->WaistAdjustOffsetCameraInterpolateCurve = NULL;
    this->CameraFocusTransformInterpolateCurve = NULL;
    this->CameraFocusTransformInterpolateSec = 0.00f;
    this->CurrentLevelSequenceActor = NULL;
    this->CurrentTransitionLevelSequenceActor = NULL;
    this->NextIdleLevelSequence = NULL;
    this->CameraAttachRootActor = NULL;
    this->CameraFocusAttachActor = NULL;
    this->CameraOffsetLocationActor = NULL;
    this->CameraLookAtNullOffsetActor = NULL;
}


