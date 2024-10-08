#include "SSBattleLevelScriptActor.h"

ASSBattleLevelScriptActor::ASSBattleLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BattleTimeLimit = -1.00f;
    this->BattleTimeoverRule = EKoratBattleTimeoverRule::None;
    this->CharacterToonPointLightCtrl = NULL;
    this->NavSystemManager = NULL;
    this->PracticeManager = NULL;
    this->BattleTrainingBattleUiController = NULL;
    this->TutorialBattleUiController = NULL;
    this->ExternalCutDirector = NULL;
    this->WindSimFieldActor = NULL;
    this->WindSimFieldManager = NULL;
    this->EventBlockAssetContainer = NULL;
    this->BuffManager = NULL;
    this->BulletCommandManager = NULL;
    this->BulletControllerManager = NULL;
    this->BulletBeamViewManager = NULL;
    this->ExplosionManager = NULL;
    this->TutorialBattleScriptDirector = NULL;
    this->EffectHitAirWallManager = NULL;
    this->PreloadingWidget = NULL;
    this->BattleDebugDrawActor = NULL;
    this->CharacterUIActionManager = NULL;
    this->BattleDirectingActor = NULL;
    this->CharacterMeshTickStopActor = NULL;
    this->BattleRequestVisibilitySwirchActor = NULL;
    this->bBattleConversation = false;
    this->bDisableBattleConversation = false;
    this->bBattleAnnouncement = false;
    this->SettleCameraTarget = NULL;
    this->bIsBattleLoadFinished = false;
    this->CharacterStorageManager = NULL;
}

void ASSBattleLevelScriptActor::UnloadCharacter(const int32 InPlaySide, const FKoratCharacterDataList& InCharacterDataList, const FKoratCharacterCostumeDataList& InCostume, UKoratCharacterMLSDataAsset* InExtendMLSDataAsset, ASSCharacter* InSSCharacter) {
}

void ASSBattleLevelScriptActor::UnloadBattleScenePhase() {
}

void ASSBattleLevelScriptActor::UnloadBattleAssets() {
}

void ASSBattleLevelScriptActor::StartLoadCharacter(const int32 InPlaySide, const FKoratCharacterDataList& InCharacter, const FKoratCharacterCostumeDataList& InCostume, UKoratCharacterMLSDataAsset* InExtendMLSDataAsset) {
}

void ASSBattleLevelScriptActor::SpawnToonPointLightCtrl() {
}

void ASSBattleLevelScriptActor::SpawnNavSystemManager() {
}

void ASSBattleLevelScriptActor::SpawnChameleon() {
}

void ASSBattleLevelScriptActor::SpawnBattleImpactProcedures(const TArray<FName>& NameList) {
}

void ASSBattleLevelScriptActor::SpawnBattleImpactProcedure(const FName Name) {
}

void ASSBattleLevelScriptActor::SpawnBattleCharacter(TArray<ASSCharacter*>& OutCharacter) {
}

void ASSBattleLevelScriptActor::SetupPreloadBattledAssets() {
}

void ASSBattleLevelScriptActor::SetupMapWarpDataAssetHolder() {
}

void ASSBattleLevelScriptActor::SetupCharacterWarpCtrl() {
}

void ASSBattleLevelScriptActor::SetPreloadingWidget(const TSoftClassPtr<UUserWidget> InWidgetAsset) {
}

void ASSBattleLevelScriptActor::SetMenuCameraForcePriority(float InPriority) {
}

void ASSBattleLevelScriptActor::SetBattleDisableConversationFlg(bool InDisableConversationFlg) {
}

void ASSBattleLevelScriptActor::SetBattleConversationSetData(FKoratBattleConversationSet InBattleConversationSetData) {
}

void ASSBattleLevelScriptActor::SetBattleConversationFlg(bool InConversationFlg) {
}

void ASSBattleLevelScriptActor::SetBattleConversationData(FKoratBattleConversation InBattleConversationData) {
}

void ASSBattleLevelScriptActor::RemoveTickPrePhysics(EProcessingOrderPartitionOfPrePhysics InPartitionIndex, AActor* InNewActor, UActorComponent* InNewComponent) {
}

void ASSBattleLevelScriptActor::RemoveTickPostPhysics(EProcessingOrderPartitionOfPostPhysics InPartitionIndex, AActor* InNewActor, UActorComponent* InNewComponent) {
}

void ASSBattleLevelScriptActor::RemoveTickDuringPhysics(EProcessingOrderPartitionOfDuringPhysics InPartitionIndex, AActor* InNewActor, UActorComponent* InNewComponent) {
}

void ASSBattleLevelScriptActor::PreloadSublevels(UObject* WorldContextObject, FLatentActionInfo InLatentInfo) {
}

void ASSBattleLevelScriptActor::OnInteractiveWindActivationChangedCallback(const TArray<FString>& _Args) {
}

void ASSBattleLevelScriptActor::LoadBattleScenePhase() {
}

void ASSBattleLevelScriptActor::LoadBattleCharacter() {
}

void ASSBattleLevelScriptActor::LoadBattleAssets() {
}

bool ASSBattleLevelScriptActor::IsInitialLoading() const {
    return false;
}

bool ASSBattleLevelScriptActor::IsInitialLoaded() const {
    return false;
}

bool ASSBattleLevelScriptActor::IsGameRunning() const {
    return false;
}

ASSRootCameraDirector* ASSBattleLevelScriptActor::GetRootCameraDirectorFromTarget() {
    return NULL;
}

ASSRootCameraDirector* ASSBattleLevelScriptActor::GetRootCameraDirector(int32 InPlayerSide) {
    return NULL;
}

AActor* ASSBattleLevelScriptActor::GetProcessingOrderPartitionActorOfPostPhysics(EProcessingOrderPartitionOfPostPhysics InPartition) const {
    return NULL;
}

AActor* ASSBattleLevelScriptActor::GetProcessingOrderPartitionActorOfDuringPhysics(EProcessingOrderPartitionOfDuringPhysics InPartition) const {
    return NULL;
}

ASSCharacter* ASSBattleLevelScriptActor::GetPlayerPawn(const int32 InPlaySide) const {
    return NULL;
}

ASSCutCameraDirector* ASSBattleLevelScriptActor::GetMenuCameraDirector() {
    return NULL;
}

ASSMapWarpDataAssetHolder* ASSBattleLevelScriptActor::GetMapWarpDataAssetHolder() {
    return NULL;
}

ASSCutCameraActor* ASSBattleLevelScriptActor::GetDirectorMainCamera(int32 InPlaySide, ECameraGlobalSlot InSlot) {
    return NULL;
}

ASSCharacterWarpCtrl* ASSBattleLevelScriptActor::GetCharacterWarpCtrl() {
    return NULL;
}

AKoratCharacterUIActionManager* ASSBattleLevelScriptActor::GetCharacterUIActionManager() {
    return NULL;
}

ASSBattleRequestVisibilitySwirchActor* ASSBattleLevelScriptActor::GetBattleRequestVisibilitySwirchActor() const {
    return NULL;
}

void ASSBattleLevelScriptActor::GetBattleMapSubLevel(TArray<FString>& OutSubLevelNames) {
}

float ASSBattleLevelScriptActor::GetBattleElapsedTime(const UObject* WorldContextObject) {
    return 0.0f;
}

bool ASSBattleLevelScriptActor::GetBattleDisableConversationFlg() {
    return false;
}

ASSBattleDirectingActor* ASSBattleLevelScriptActor::GetBattleDirectingActor() const {
    return NULL;
}

bool ASSBattleLevelScriptActor::GetBattleConversationFlg() {
    return false;
}

void ASSBattleLevelScriptActor::DisableBulletAll() {
}

void ASSBattleLevelScriptActor::DisableAiAll() {
}

void ASSBattleLevelScriptActor::DestroyMapWarpDataAssetHolder() {
}

void ASSBattleLevelScriptActor::DestroyCharacterWarpCtrl() {
}

void ASSBattleLevelScriptActor::DestroyBattleCharacter(ASSCharacter* InCharacter, bool InIsRequestGC) {
}

void ASSBattleLevelScriptActor::ClearBattleConversationData() {
}

void ASSBattleLevelScriptActor::BattleSystemTerminate() {
}

void ASSBattleLevelScriptActor::BattleSystemInitialize() {
}

void ASSBattleLevelScriptActor::BattleConversationDataRemoveAt(int32 InIndex) {
}

void ASSBattleLevelScriptActor::AddTickPrePhysics(EProcessingOrderPartitionOfPrePhysics InPartitionIndex, AActor* InNewActor, UActorComponent* InNewComponent) {
}

void ASSBattleLevelScriptActor::AddTickPostUpdateWork(EProcessingOrderPartitionOfPostUpdateWork InPartitionIndex, AActor* InNewActor, UActorComponent* InNewComponent) {
}

void ASSBattleLevelScriptActor::AddTickPostPhysics(EProcessingOrderPartitionOfPostPhysics InPartitionIndex, AActor* InNewActor, UActorComponent* InNewComponent) {
}

void ASSBattleLevelScriptActor::AddTickDuringPhysics(EProcessingOrderPartitionOfDuringPhysics InPartitionIndex, AActor* InNewActor, UActorComponent* InNewComponent) {
}


