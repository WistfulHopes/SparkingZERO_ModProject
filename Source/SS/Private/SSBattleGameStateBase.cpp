#include "SSBattleGameStateBase.h"
#include "SSRandom.h"

ASSBattleGameStateBase::ASSBattleGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PowerImpactBoostCurve = NULL;
    this->PowerImpactStandardAccell = NULL;
    this->PowerImpactBoostdAccell = NULL;
    this->PowerImpactStandardDown = NULL;
    this->PowerImpactBoostDown = NULL;
    this->PowerImpactPenaltyCurve = NULL;
    this->PowerImpactPenaltyTime = 0.50f;
    this->PowerImpactPenaltyValue = 50.00f;
    this->PowerImpactDataAsset = NULL;
    this->SpeedImpactUIProgressCurve = NULL;
    this->SpeedImpactTiningBoostCurve = NULL;
    this->SpeedImpactRapidBoostCurve = NULL;
    this->BlastImpactDataAsset = NULL;
    this->BlastImpactPumpMeter = NULL;
    this->BlastImpactPowerCurve = NULL;
    this->BlastImpactBoostScale = NULL;
    this->BlastImpactPowerPush = NULL;
    this->PowerImpactWaitTime1 = 2.00f;
    this->PowerImpactWaitTime2 = 2.00f;
    this->PowerImpactWaitTime3 = 2.00f;
    this->PowerImpactWaitTime = 1.00f;
    this->SpeedImpactDataAsset = NULL;
    this->SpeedImpactDamageCutCurve = NULL;
    this->SpeedImpactOnFinishCurve = NULL;
    this->SpeedImpactTimingTotalTime = 1.73f;
    this->SpeedImpactTime = 1.50f;
    this->SpeedImpactJustPosition = 0.75f;
    this->SpeedImpactJustLength = 0.20f;
    this->SpeedImpactRapidTotalTime = 3.50f;
    this->SpeedImpactRapidTime = 3.00f;
    this->CrashImpactDataAsset = NULL;
    this->BlastImpactTime = 4.66f;
    this->BlastImpactYawAngle = 30.00f;
    this->BlastImpactPitchAngle = 45.00f;
    this->StartBattleFrame = 0;
    this->RematchFailureDispTime = 1.00f;
    this->ForceFeedbackScale = 0.50f;
    this->CrashImpactPhaseLoopCounter = 0;
    this->Random = CreateDefaultSubobject<USSRandom>(TEXT("Random_ASSBattleGameStateBase"));
    this->bNetworkUnderflowPauseEnable = false;
    this->bInterruptCommonPause = false;
    this->bNetworkErrorPause = false;
    this->bMatchedPause = false;
    this->bNetworkUnderflowPause = false;
    this->bNetworkFencePause = false;
    this->bReplayDebugPause = false;
    this->bLoadingBlockPause = false;
    this->bBlockingLoadCharaResourcePause = false;
    this->bPlayerPauseWatcher = false;
    this->bPlayerPause1P = false;
    this->bPlayerPause2P = false;
    this->bDebugPauseWatcher = false;
    this->bDebugPause1P = false;
    this->bDebugPause2P = false;
    this->bMapChangePause = false;
    this->bInterruptDialogPause = false;
    this->bAnyPause = false;
    this->NetworkFenceCount = 0;
    this->PowerImpactDominanceCharacter = NULL;
    this->CrashImpactDominanceCharacter = NULL;
    this->CrashImpactNextAttacker = NULL;
    this->CrashImpactLastWinner = NULL;
    this->SpeedImpactWinner = NULL;
    this->SpeedImpactDominanceCharacter = NULL;
    this->BlastImpactAttacker = NULL;
    this->BlastImpactReflecter = NULL;
    this->BlastImpactWinner = NULL;
    this->bBlastImpactExecute = false;
    this->CharacterChangeBeforCharacter = NULL;
    this->TargetCharacterChangeBeforeCharacter = NULL;
    this->CharacterChangeAfterCharacter = NULL;
    this->TargetCharacterChangeAfterCharacter = NULL;
    this->ReplaySave = NULL;
    this->MapChangeStartCharacter = NULL;
    this->SurvivalCharacter = NULL;
    this->DefeatedCharacter = NULL;
    this->PreSideBySideMode = ECameraSideBySideMode::None;
    this->bIsTimeOverSettle = false;
}

void ASSBattleGameStateBase::WarpTheCharacter(ASSCharacter* InCharacter, const ESSWarpTargetType InWarpTargetType) {
}

void ASSBattleGameStateBase::WaitUiLevelLoad(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::WaitMapChangeLoadingComplete(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::WaitingForDramaticFinishDemo(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::WaitingForCameraInterpolation(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::WaitForReleaseSpeedImpactInputLock(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::WaitForFinishTutorialSpeedImpactTimingKeyWait(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::WaitForCharacterMontageTranslationFall(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ASSCharacter* InCharacter, const float InLocationZ) {
}

void ASSBattleGameStateBase::WaitForCharacterLockOn(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ASSCharacter* InCharacter) {
}

void ASSBattleGameStateBase::WaitForCharacterActionSection(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ASSCharacter* InCharacter, const FName InSectionName) {
}

void ASSBattleGameStateBase::WaitForCharacterActionIdle(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ASSCharacter* InCharacter, const int32 InEndFrame) {
}

void ASSBattleGameStateBase::WaitForCharacterActionFinishDemo(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ASSCharacter* InCharacter) {
}

void ASSBattleGameStateBase::WaitForCharacterActionEndOffsetFrame(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ASSCharacter* InCharacter, const EKoratAnimType InAnimType, int32 InOffsetFrame) {
}

void ASSBattleGameStateBase::WaitForCharacterActionDown(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ASSCharacter* InCharacter, const TSet<FKoratActionDataList>& InNames, float InTimeoutSec) {
}

void ASSBattleGameStateBase::WaitFinishedPlayVoice(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ASSCharacter* InCharacter) {
}

void ASSBattleGameStateBase::WaitFinishedPlayAppealVoice(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, EKoratLoop& OutResult, const ASSCharacter* InCharacter, const float InSkipDilation, const bool bInCanSkip) {
}

void ASSBattleGameStateBase::WaitCharacterLoad(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::WaitBattleStatus(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::WaitBattleSetupLoad(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::UpdateSideBySideCamera() {
}

void ASSBattleGameStateBase::TutorialSpeedImpactStart() {
}

void ASSBattleGameStateBase::TrySuspendApearScene(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::TriggerEventWarpPreWarpPos(const UObject* WorldContextObject, const ULevelSequencePlayer* InSequencePlayer, EWarpGroupType InWarpGroup, USSActionCameraDataAsset* InActionCamera) {
}

void ASSBattleGameStateBase::TriggerEventWarpOtherSpace(const UObject* WorldContextObject, const ULevelSequencePlayer* InSequencePlayer, EWarpGroupType InWarpGroup, USSActionCameraDataAsset* InActionCamera) {
}

void ASSBattleGameStateBase::TriggerEventWarpOriginPosition(const UObject* WorldContextObject, const ULevelSequencePlayer* InSequencePlayer, EWarpGroupType InWarpGroup, USSActionCameraDataAsset* InActionCamera) {
}

void ASSBattleGameStateBase::TriggerEventWarpEnemySide(const UObject* WorldContextObject, const ULevelSequencePlayer* InSequencePlayer, EWarpGroupType InWarpGroup, USSActionCameraDataAsset* InActionCamera) {
}

void ASSBattleGameStateBase::TriggerEventDemoWarpGround(const UObject* WorldContextObject, const ULevelSequencePlayer* InSequencePlayer, EWarpGroupType InWarpGroup, USSActionCameraDataAsset* InActionCamera) {
}

void ASSBattleGameStateBase::TriggerEventDemoWarpAir(const UObject* WorldContextObject, const ULevelSequencePlayer* InSequencePlayer, EWarpGroupType InWarpGroup, USSActionCameraDataAsset* InActionCamera) {
}

void ASSBattleGameStateBase::TriggerEventDemoWarp(const UObject* WorldContextObject, const ULevelSequencePlayer* InSequencePlayer, const FName InLocationName, USSActionCameraDataAsset* InActionCamera) {
}

void ASSBattleGameStateBase::TriggerEffectWeapon(uint8 StartPosition, uint8 EndPosition, uint8 Strength) {
}

void ASSBattleGameStateBase::TriggerEffectVibration(uint8 Position, uint8 Frequency, uint8 Amplitude) {
}

void ASSBattleGameStateBase::TriggerEffectOff() {
}

void ASSBattleGameStateBase::TriggerEffectMultipleVibration(uint8 Frequency, uint8 AmplitudeOfPosition0, uint8 AmplitudeOfPosition1, uint8 AmplitudeOfPosition2, uint8 AmplitudeOfPosition3, uint8 AmplitudeOfPosition4, uint8 AmplitudeOfPosition5, uint8 AmplitudeOfPosition6, uint8 AmplitudeOfPosition7, uint8 AmplitudeOfPosition8, uint8 AmplitudeOfPosition9) {
}

void ASSBattleGameStateBase::TriggerEffectMultipleFeedback(uint8 StrengthOfPosition0, uint8 StrengthOfPosition1, uint8 StrengthOfPosition2, uint8 StrengthOfPosition3, uint8 StrengthOfPosition4, uint8 StrengthOfPosition5, uint8 StrengthOfPosition6, uint8 StrengthOfPosition7, uint8 StrengthOfPosition8, uint8 StrengthOfPosition9) {
}

void ASSBattleGameStateBase::TriggerEffectFeedback(uint8 Position, uint8 Strength) {
}

void ASSBattleGameStateBase::TransitCharacterAction(ASSCharacter* InCharacter, FKoratActionDataList InAction) {
}

void ASSBattleGameStateBase::TaketurnsToNewCharacterAppear() {
}

void ASSBattleGameStateBase::TaketurnsToNewCharacter() {
}

void ASSBattleGameStateBase::SwitchValidAuraUpdateVisibilityFlag(AActor* InActor, bool InFlag) {
}

void ASSBattleGameStateBase::SwitchNewChangeCharacter() {
}

void ASSBattleGameStateBase::StopCharacterAction(ASSCharacter* InCharacter) {
}

void ASSBattleGameStateBase::StartTutorialFinishScreenFade() {
}

void ASSBattleGameStateBase::StartTrainingPositionReset(const bool InPositionOnly) {
}

void ASSBattleGameStateBase::StartLoadingSectionNoTouchRootMotion() {
}

void ASSBattleGameStateBase::StartLoadingSection() {
}

void ASSBattleGameStateBase::StartFade(const FLinearColor InColor, const float InDuration) {
}

void ASSBattleGameStateBase::StartCharacterAction(ASSCharacter* InCharacter, const FKoratActionDataList InAction) {
}

void ASSBattleGameStateBase::SpeedImpactTimingInputStart(bool TimingisStarted) {
}

void ASSBattleGameStateBase::SpeedImpactStart() {
}

void ASSBattleGameStateBase::SpeedImpactRapidInputStart(bool RapidisStarted) {
}

void ASSBattleGameStateBase::SpeedImpactFinish() {
}

void ASSBattleGameStateBase::SpeedImpactBattleConversationFinishWait(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::SkipApearStart(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, float InFadeTime, float InWaitTime) {
}

void ASSBattleGameStateBase::SkipApearSequence(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, EKoratLoop& OutResult, ASSLevelSequenceActor* InSequenceActor, const float InSkipDilation, const bool bInCanSkip) {
}

void ASSBattleGameStateBase::SkipApearInner() {
}

void ASSBattleGameStateBase::SkipApearEnd(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, float InFadeTime, float InWaitTime) {
}

void ASSBattleGameStateBase::SkipApearCharacter(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, EKoratLoop& OutResult, const ASSCharacter* InCharacter, FName InSection, const float InSkipDilation, const bool bInCanSkip, float InDebugSkipTimer) {
}

void ASSBattleGameStateBase::Skip(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const EKoratDoUntil InRange, const float InSkipDilation, const bool bSkipTest) {
}

void ASSBattleGameStateBase::ShowWidget(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const TSoftClassPtr<USSUiWidget> InWidget) {
}

void ASSBattleGameStateBase::SetWaitForSettleDirection(const bool InFlag) {
}

void ASSBattleGameStateBase::SetSideBySideCameraMode(bool InEnable, bool InBurstUpdate) {
}

void ASSBattleGameStateBase::SetSideBySideCameraEnableInner(bool InEnable) {
}

void ASSBattleGameStateBase::SetKeepPlayerController(bool InKeep) {
}

void ASSBattleGameStateBase::SetIsTimeOverSettle(bool IsTimeOver) {
}

void ASSBattleGameStateBase::SetHandyShakeManualByPlayer(bool bInShake) {
}

void ASSBattleGameStateBase::SetForceFinishEarlyHD(bool InAfterglowHD) {
}

void ASSBattleGameStateBase::SetDebugBlastImpact(const bool bInFlag) {
}

void ASSBattleGameStateBase::SetCrashImpactNextAttacker() {
}

void ASSBattleGameStateBase::SetBattleTimeDebugStop(const bool bInIsStop) {
}

void ASSBattleGameStateBase::SetBattleRemainingTime(const float InSec) {
}

void ASSBattleGameStateBase::SendEndInfoToBattleDirectingActor(EKoratBattleDirectingActivate InActivateType, int32 InOptionValue) {
}

FKoratActionDataList ASSBattleGameStateBase::SelectChaseChangeInAction(const FKoratActionDataList& InTargetAction, TArray<FKoratActionDataList> InChaseChangeInActions) {
    return FKoratActionDataList{};
}

void ASSBattleGameStateBase::SearchSafeChangeEntranceLocation(ASSCharacter* InBeforeCharacter, ASSCharacter* InNewCharacter, FVector InBeforeLocation, FVector& OutLocation) {
}

void ASSBattleGameStateBase::ResultStart() {
}

bool ASSBattleGameStateBase::RestartStart(bool bInBattle) {
    return false;
}

void ASSBattleGameStateBase::RespawnCharacters2() {
}

void ASSBattleGameStateBase::RespawnCharacters() {
}

bool ASSBattleGameStateBase::ResetStart() {
    return false;
}

void ASSBattleGameStateBase::ResetRingoutTelop() {
}

void ASSBattleGameStateBase::ResetCharactersAtApear() {
}

void ASSBattleGameStateBase::ResetCameraFade() {
}

void ASSBattleGameStateBase::ResetBattleElapsedTime() {
}

void ASSBattleGameStateBase::ResetActionCameraTargets() {
}

void ASSBattleGameStateBase::RequestTransitCharacterAction(ASSCharacter* InCharacter, FKoratActionDataList InAction) {
}

void ASSBattleGameStateBase::RequestSwitchController() {
}

void ASSBattleGameStateBase::RequestOutGameResult() {
}

void ASSBattleGameStateBase::ReplaceBeforeCharacterEffectColorWithNewCharacter(const FKoratActionDataList& InAction) {
}

void ASSBattleGameStateBase::ReleaseTutorialSpeedImpactInputLock() {
}

void ASSBattleGameStateBase::ReleaseChangeCharacter() {
}

void ASSBattleGameStateBase::PowerImpactTimeInitialize() {
}

void ASSBattleGameStateBase::PowerImpactStart() {
}

void ASSBattleGameStateBase::PowerImpactReadyWait(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::PowerImpactNToGStart() {
}

void ASSBattleGameStateBase::PowerImpactNToGJudge(EKoratLoop& OutResult) {
}

void ASSBattleGameStateBase::PowerImpactNToGFinish() {
}

void ASSBattleGameStateBase::PowerImpactJudge(EKoratLoop& OutResult) {
}

void ASSBattleGameStateBase::PowerImpactGToNStart() {
}

void ASSBattleGameStateBase::PowerImpactGToNJudge(EKoratLoop& OutResult) {
}

void ASSBattleGameStateBase::PowerImpactGToNFinish() {
}

void ASSBattleGameStateBase::PowerImpactGToGStart() {
}

void ASSBattleGameStateBase::PowerImpactGToGJudge(EKoratLoop& OutResult) {
}

void ASSBattleGameStateBase::PowerImpactGToGFinish() {
}

void ASSBattleGameStateBase::PowerImpactFinish() {
}

void ASSBattleGameStateBase::PlayLoopLevelSequenceWithParameter(AActor* InOwnerActor, const TSoftObjectPtr<ULevelSequence> InLevelSequence, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer, const FBattleImpactLevelSequenceParams InParameter) {
}

void ASSBattleGameStateBase::PlayLoopLevelSequence(AActor* InOwnerActor, const TSoftObjectPtr<ULevelSequence> InLevelSequence, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer) {
}

void ASSBattleGameStateBase::PlayLevelSequenceWithSequencePlayInfo(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, AActor* InOwnerActor, const TSoftObjectPtr<ULevelSequence> InLevelSequence, const TArray<FKoratSequencePlayInfo>& InPlaySeq, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer, bool InEnablePlayerTransformTrack, bool InNoUseOwnerCutDirector, bool InRegistCustomTimeDilation, bool InAfterglowIsComplete) {
}

void ASSBattleGameStateBase::PlayLevelSequenceWithRebindArray(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, AActor* InOwnerActor, const TSoftObjectPtr<ULevelSequence> InLevelSequence, const TArray<FKoratSequencePlayInfo>& InPlaySeq, const TArray<FKoratRebindDescription>& InRebindDescriptionArray, ASSLevelSequenceActor*& OutSequenceActor, bool InNoUseOwnerCutDirector, bool InRegistCustomTimeDilation, bool InAfterglowIsComplete) {
}

void ASSBattleGameStateBase::PlayLevelSequenceWithParameter(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, AActor* InOwnerActor, const TSoftObjectPtr<ULevelSequence> InLevelSequence, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer, const FBattleImpactLevelSequenceParams InParameter) {
}

void ASSBattleGameStateBase::PlayLevelSequenceAtMainWithSequencePlayInfo(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const TSoftObjectPtr<ULevelSequence> InLevelSequence, const TArray<FKoratSequencePlayInfo>& InPlaySeq, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer, bool InEnablePlayerTransformTrack, bool InNoUseOwnerCutDirector, bool InRegistCustomTimeDilation, bool InAfterglowIsComplete) {
}

void ASSBattleGameStateBase::PlayLevelSequenceAtMain(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const TSoftObjectPtr<ULevelSequence> InLevelSequence, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer) {
}

void ASSBattleGameStateBase::PlayLevelSequence(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, AActor* InOwnerActor, const TSoftObjectPtr<ULevelSequence> InLevelSequence, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer, bool InRegistCustomTimeDilation) {
}
















void ASSBattleGameStateBase::OnBeginFrameProcess() {
}



void ASSBattleGameStateBase::MapChangeStart(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::MapChangeFinish() {
}

void ASSBattleGameStateBase::LoopLevelSequence(UObject* WorldContextObject, const TSoftObjectPtr<ULevelSequence> InLevelSequence, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer) {
}

void ASSBattleGameStateBase::LoadResultMenu(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::KeepResetAnimInstanceDynamics(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, ASSCharacter* InCharacter, float InTotalTime) {
}

bool ASSBattleGameStateBase::IsWaitForTutorialBattleStatus() const {
    return false;
}

bool ASSBattleGameStateBase::IsValidSectionName(ASSCharacter* InCharacter, FName InSectionName) {
    return false;
}

bool ASSBattleGameStateBase::IsUnionAction(const FKoratActionDataList& InAction) {
    return false;
}

bool ASSBattleGameStateBase::IsTutorialSpeedImpact() const {
    return false;
}

bool ASSBattleGameStateBase::IsTrainingPositionResetTiming() {
    return false;
}

bool ASSBattleGameStateBase::IsTimeOverSettle() const {
    return false;
}

bool ASSBattleGameStateBase::IsTargetCharacterBlow(ASSCharacter* InCharacter, FKoratActionDataList& OutCurrentAction) {
    return false;
}

bool ASSBattleGameStateBase::IsSpeedImpactInputLock() const {
    return false;
}

bool ASSBattleGameStateBase::IsSideBySideCameraEnableInner() const {
    return false;
}

bool ASSBattleGameStateBase::IsSideBySide1P(int32 InSrcCSlot, int32 InDstCSlot) const {
    return false;
}

bool ASSBattleGameStateBase::IsSettleStatus() {
    return false;
}

bool ASSBattleGameStateBase::IsRezultMode() {
    return false;
}

bool ASSBattleGameStateBase::IsResetStatus() {
    return false;
}

bool ASSBattleGameStateBase::IsPlayingBattle() const {
    return false;
}

bool ASSBattleGameStateBase::IsPausedByAnyController() const {
    return false;
}

bool ASSBattleGameStateBase::IsPausedAtFrameStart() const {
    return false;
}

bool ASSBattleGameStateBase::IsLoadingSection() const {
    return false;
}

bool ASSBattleGameStateBase::IsIntroductionOrder2pFirst() {
    return false;
}

bool ASSBattleGameStateBase::IsImpactGvsG() {
    return false;
}

bool ASSBattleGameStateBase::IsFinishMode() {
    return false;
}

bool ASSBattleGameStateBase::IsDramaticFinish(const ASSCharacter* InDirectingWinner) {
    return false;
}

bool ASSBattleGameStateBase::IsCharacterDamageCostumeChanging() const {
    return false;
}

bool ASSBattleGameStateBase::IsBattleTimeStop() const {
    return false;
}

bool ASSBattleGameStateBase::IsBattleStatus() const {
    return false;
}

void ASSBattleGameStateBase::IsBattleImpactBreak(ESSFlowConditionsJudgmentType& OutResult, const EBattleImpactType InImpactType) {
}

void ASSBattleGameStateBase::InitializeChangeAfterCharacterSearchType() {
}

void ASSBattleGameStateBase::InitialBattleCharacterStatus() {
}

bool ASSBattleGameStateBase::ImpactBattleCanInterimResult() {
    return false;
}

void ASSBattleGameStateBase::HideWidget(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const TSoftClassPtr<USSUiWidget> InWidget) {
}

bool ASSBattleGameStateBase::GetSpeedImpactUIFinish() {
    return false;
}

float ASSBattleGameStateBase::GetSpeedImpactTimingTotalTime() {
    return 0.0f;
}

float ASSBattleGameStateBase::GetSpeedImpactRapidTotalTime() {
    return 0.0f;
}

ECameraSideBySideMode ASSBattleGameStateBase::GetSideBySideCameraMode() {
    return ECameraSideBySideMode::None;
}

USSBattleReplaySaveGame* ASSBattleGameStateBase::GetReplaySave() {
    return NULL;
}

float ASSBattleGameStateBase::GetPowerImpactWaitTime3() {
    return 0.0f;
}

float ASSBattleGameStateBase::GetPowerImpactWaitTime2() {
    return 0.0f;
}

float ASSBattleGameStateBase::GetPowerImpactWaitTime1() {
    return 0.0f;
}

float ASSBattleGameStateBase::GetPowerImpactWaitTime() {
    return 0.0f;
}

ASSCharacter* ASSBattleGameStateBase::GetPlayerCharacter(const int32 InPlaySide) const {
    return NULL;
}

int32 ASSBattleGameStateBase::GetMyPlayerSide() {
    return 0;
}

ASSCharacter* ASSBattleGameStateBase::GetMapChangeStartCharacter() const {
    return NULL;
}

void ASSBattleGameStateBase::GetDeadlyChangeEntranceLocation(ASSCharacter* InCharacter, FTransform& OutTransform) {
}

bool ASSBattleGameStateBase::GetCrashImpactUiIsIdle() {
    return false;
}

float ASSBattleGameStateBase::GetCrashImpactRandWait() {
    return 0.0f;
}

TMap<FString, ASSCharacter*> ASSBattleGameStateBase::GetCrashImpactPrePhaseWinner() {
    return TMap<FString, ASSCharacter*>();
}

ASSCharacter* ASSBattleGameStateBase::GetCrashImpactNextAttacker() {
    return NULL;
}

float ASSBattleGameStateBase::GetCrashImpactInputTime() {
    return 0.0f;
}

bool ASSBattleGameStateBase::GetChaseChangeEntranceMoveParameter(ASSCharacter* InCharacter, const FKoratActionDataList& InAction, FKoratVanishingMove& OutMoveParameter, FVector& OutAnimMontageOffset, bool& OutIsDrawVanishingEffect) {
    return false;
}

ECharacterVoiceStatus ASSBattleGameStateBase::GetCharacterVoiceStatus(ASSCharacter* InCharacter) const {
    return ECharacterVoiceStatus::Failed;
}

FName ASSBattleGameStateBase::GetCharacterCostumeModelID(const FKoratCharacterDataList& InCharacterDataList, const FKoratCharacterCostumeDataList& InCharacterCostume, int32 InDamageLv) {
    return NAME_None;
}

ASSCharacter* ASSBattleGameStateBase::GetCharacterByPlayerStartData(const FKoratPlayerStartDataList InPlayerStartData) {
    return NULL;
}

FKoratCharacterDataChangeCharacterActionDataList ASSBattleGameStateBase::GetChangeCharacterActionDataList() const {
    return FKoratCharacterDataChangeCharacterActionDataList{};
}

float ASSBattleGameStateBase::GetBlastImpactTime() {
    return 0.0f;
}

bool ASSBattleGameStateBase::GetBlastImpactResultFinish() {
    return false;
}

ASSCharacter* ASSBattleGameStateBase::GetBeforeTaketurnsCharacter() const {
    return NULL;
}

ASSCharacter* ASSBattleGameStateBase::GetBeforeChangeTargetCharacter() const {
    return NULL;
}

ASSCharacter* ASSBattleGameStateBase::GetBeforeChangeCharacter() const {
    return NULL;
}

bool ASSBattleGameStateBase::GetBattleTimeDebugStop() const {
    return false;
}

float ASSBattleGameStateBase::GetBattleRemainingTime() {
    return 0.0f;
}

float ASSBattleGameStateBase::GetBattleElapsedTime() {
    return 0.0f;
}

ASSCharacter* ASSBattleGameStateBase::GetBattleDirectingWinner() {
    return NULL;
}

ASSCharacter* ASSBattleGameStateBase::GetBattleDirectingPlayer(int32 InPlaySide) {
    return NULL;
}

ASSCharacter* ASSBattleGameStateBase::GetBattleDirectingLooser() {
    return NULL;
}

float ASSBattleGameStateBase::GetBattleDirectingElapsedTime() {
    return 0.0f;
}

ASSCharacter* ASSBattleGameStateBase::GetAfterChangeTargetCharacter() const {
    return NULL;
}

ASSCharacter* ASSBattleGameStateBase::GetAfterChangeCharacter() const {
    return NULL;
}

void ASSBattleGameStateBase::GameStateDebugPrint(const FString& InString) {
}

void ASSBattleGameStateBase::ForceDisableHandyShakeManual(bool InDisable) {
}

void ASSBattleGameStateBase::FadeMeshTimeScale(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, ASSCharacter* InCharacter, float InTimeScale, float InFadeTime, float InStartTimeScale) {
}

void ASSBattleGameStateBase::ExecuteResultLine(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::EndMapChange() {
}

void ASSBattleGameStateBase::EndLoadingSectionNoTouchRootMotion() {
}

void ASSBattleGameStateBase::EndLoadingSection() {
}

void ASSBattleGameStateBase::EndBodyChange(ASSCharacter* InWinner) {
}

void ASSBattleGameStateBase::EnableCharacterCollision(ASSCharacter* InCharacter) {
}

void ASSBattleGameStateBase::DisplayKeepFade(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::DisplayFadeIn(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::DisplayCutIn(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::DisableCharacterCollision(ASSCharacter* InCharacter) {
}

void ASSBattleGameStateBase::DestroyBattleCharacterAllDelayStart(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::DestroyActionSequenceActorAllStart(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

ASSLevelSequenceActor* ASSBattleGameStateBase::CreateLevelSequenceActor(AActor* InOwnerActor, const TSoftObjectPtr<ULevelSequence> InLevelSequence, const TArray<FKoratSequencePlayInfo>& InPlaySeq, bool InEnableRebindPlayer, bool InEnablePlayerTransformTrack, bool InNoUseOwnerCutDirector, bool InRegistCustomTimeDilation) {
    return NULL;
}

ASSCharacter* ASSBattleGameStateBase::CreateHiddenCharacterForTaketurns(FVector InNewLocation) {
    return NULL;
}

void ASSBattleGameStateBase::CreateHiddenCharacter(bool InReuseCameraFast, bool InDamageCostume) {
}

void ASSBattleGameStateBase::CreateDamageCostumeCharacter(bool InReuseCameraFast) {
}

void ASSBattleGameStateBase::CrashImpactStart() {
}

void ASSBattleGameStateBase::CrashImpactReadyWait(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::CrashImpactPhaseStart(TMap<FString, ASSCharacter*> InMap, const ASSCharacter* InAttacker, EKoratLoop& OutResult) {
}

void ASSBattleGameStateBase::CrashImpactPhaseJudge() {
}

void ASSBattleGameStateBase::CrashImpactPhaseCounterReset() {
}

void ASSBattleGameStateBase::CrashImpactPhaseCounterAddition(EKoratLoop& OutResult, int32 InMaxPhaseCount) {
}

void ASSBattleGameStateBase::CrashImpactInputStart() {
}

void ASSBattleGameStateBase::CrashImpactInputFinish() {
}

void ASSBattleGameStateBase::CrashImpactFinish() {
}

void ASSBattleGameStateBase::ClearFade() {
}

void ASSBattleGameStateBase::ClearBuff() {
}

void ASSBattleGameStateBase::CheckSideBySideCameraMode() {
}

void ASSBattleGameStateBase::CheckDramaticFinish(bool& OutDramaticFinish) {
}

void ASSBattleGameStateBase::CheckDamageCostumeLoadedInThisTerminal(EKoratLoop& OutResult) {
}

void ASSBattleGameStateBase::CharacterTaketurnsStart(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::CharacterTaketurnsFinish() {
}

void ASSBattleGameStateBase::CharacterTaketurnsControllerChange() {
}

void ASSBattleGameStateBase::CharacterDamageCostumeChangeStart(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::CharacterDamageCostumeChangeFinish() {
}

void ASSBattleGameStateBase::CharacterChangeStart(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::CharacterChangeFinish() {
}

void ASSBattleGameStateBase::ChangeToNewCharacterForDamageCostume() {
}

void ASSBattleGameStateBase::ChangeToNewCharacterCommon(bool InTakeOverSparking, bool bInSamePerson) {
}

void ASSBattleGameStateBase::ChangeToNewCharacter() {
}

void ASSBattleGameStateBase::ChangeCharacterActionSectionOT(ASSCharacter* InCharacter) {
}

void ASSBattleGameStateBase::ChangeCharacterActionSection(ASSCharacter* InCharacter, const FName InSectionName) {
}

void ASSBattleGameStateBase::BodyChangeStart(const FKoratActionDataList& InAction, const FKoratReceivedDamageParameter& InReceivedDamageParameter) {
}

void ASSBattleGameStateBase::BodyChangeFinish() {
}

void ASSBattleGameStateBase::BlastImpactStateStart() {
}

void ASSBattleGameStateBase::BlastImpactStateJudge() {
}

void ASSBattleGameStateBase::BlastImpactStart() {
}

void ASSBattleGameStateBase::BlastImpactScene(const UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const float Duration) {
}

void ASSBattleGameStateBase::BlastImpactReadyWait(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo) {
}

void ASSBattleGameStateBase::BlastImpactFinish() {
}

void ASSBattleGameStateBase::BattleStart() {
}

void ASSBattleGameStateBase::BattleImpactSpeedBreak(UObject* WorldContextObject) {
}

void ASSBattleGameStateBase::BattleImpactPowerBreak(UObject* WorldContextObject) {
}

void ASSBattleGameStateBase::BattleImpactCrashBreak(UObject* WorldContextObject) {
}

void ASSBattleGameStateBase::BattleImpactBreak(UObject* WorldContextObject) {
}

void ASSBattleGameStateBase::BattleImpactBlastBreak(UObject* WorldContextObject) {
}


