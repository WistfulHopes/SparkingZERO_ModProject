#include "SSCharacterBattleAssistComponent.h"
#include "SSRandom.h"

USSCharacterBattleAssistComponent::USSCharacterBattleAssistComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Random = CreateDefaultSubobject<USSRandom>(TEXT("BattleAssistRandom"));
    this->BattleAssistDataAsset = NULL;
    this->bAutoPursuitRequest = false;
    this->bAutoGuardRequest = false;
    this->bAutoGuardCombativesRequest = false;
    this->bAutoGuardBulletsRequest = false;
    this->bAutoGuardJustRequest = false;
    this->AutoGuardFollowTimer = 0.00f;
    this->AutoGuardFollowTimerMax = 0.03f;
    this->DebugTextWidth = 800.00f;
    this->DebugTextNextHeight = 20.00f;
}

void USSCharacterBattleAssistComponent::NotificationStopDragonDashAssist() {
}

void USSCharacterBattleAssistComponent::NotificationStartDragonDashAssist() {
}

void USSCharacterBattleAssistComponent::NotificationStartAttackDragonDashAssist() {
}

void USSCharacterBattleAssistComponent::NotificationRequestPursuit() {
}

void USSCharacterBattleAssistComponent::NotificationRequestComboAssistZeroClear() {
}

void USSCharacterBattleAssistComponent::NotificationRequestComboAssistReset() {
}

void USSCharacterBattleAssistComponent::NotificationRequestComboAssist() {
}

void USSCharacterBattleAssistComponent::NotificationExecPursuit(const EKoratPursuitType& InPursuitType) {
}

void USSCharacterBattleAssistComponent::NotificationEndAttackDragonDashAssist() {
}

void USSCharacterBattleAssistComponent::NotificationDerivativeComboAssist() {
}

void USSCharacterBattleAssistComponent::NotificationClearPursuitDragonHoming() {
}

void USSCharacterBattleAssistComponent::NotificationChangeCurrentAction(const FKoratActionDataList& InAction) {
}

void USSCharacterBattleAssistComponent::IsRushCancelRequest(EKoratBranch& OutResult) {
}

void USSCharacterBattleAssistComponent::IsReversalUkemiAssist(EKoratBranch& OutResult) {
}

void USSCharacterBattleAssistComponent::IsReversalRevengeCounterAssist(EKoratBranch& OutResult, float InTime, EKoratInequalitySignType InInequalitySign) {
}

void USSCharacterBattleAssistComponent::IsPursuitRequest(const EKoratPursuitType& InPursuitType, EKoratBranch& OutResult) {
}

void USSCharacterBattleAssistComponent::IsPursuitDragonHomingRequest(EKoratBranch& OutResult) {
}

bool USSCharacterBattleAssistComponent::IsPursuitAssistMode() const {
    return false;
}

bool USSCharacterBattleAssistComponent::IsPursuitAssist_Implementation() {
    return false;
}

bool USSCharacterBattleAssistComponent::IsPlayablePursuit_Implementation(const EKoratPursuitType& InPursuitType) {
    return false;
}

void USSCharacterBattleAssistComponent::IsDragonDashStopRequest(EKoratBranch& OutResult) {
}

void USSCharacterBattleAssistComponent::IsDragonDashStartRequest(EKoratBranch& OutResult) {
}

void USSCharacterBattleAssistComponent::IsDragonDashPursuitRequest(EKoratBranch& OutResult) {
}

void USSCharacterBattleAssistComponent::IsDragonDashPursuitEndRequest(EKoratBranch& OutResult) {
}

bool USSCharacterBattleAssistComponent::IsDragonDashMode() const {
    return false;
}

bool USSCharacterBattleAssistComponent::IsDragonDashAttackPursuit() const {
    return false;
}

bool USSCharacterBattleAssistComponent::IsDragonDashAttackMode() const {
    return false;
}

bool USSCharacterBattleAssistComponent::IsDragonDashAttackAssist_Implementation() {
    return false;
}

bool USSCharacterBattleAssistComponent::IsDragonDashAssist_Implementation() {
    return false;
}

bool USSCharacterBattleAssistComponent::IsComboAssistMode() const {
    return false;
}

void USSCharacterBattleAssistComponent::IsComboAssistDerivativeRequest(int32 InRushCount, EKoratBattleKey InRequestBattleKey, EKoratBattleKey& OutBattleKey, EKoratBranch& OutResult) {
}

void USSCharacterBattleAssistComponent::IsComboAssistBurstFinishRequest(EKoratBranch& OutResult) {
}

bool USSCharacterBattleAssistComponent::IsComboAssist_Implementation(const FKoratActionDataList& InCurrentAction) {
    return false;
}

void USSCharacterBattleAssistComponent::IsClassicControlMode(ESSFlowConditionsJudgmentType& OutResult) {
}

bool USSCharacterBattleAssistComponent::IsAutoUkemiMode() const {
    return false;
}

bool USSCharacterBattleAssistComponent::IsAutoUkemi_Implementation() {
    return false;
}

bool USSCharacterBattleAssistComponent::IsAutoRevengeCounterMode() const {
    return false;
}

bool USSCharacterBattleAssistComponent::IsAutoRevengeCounter_Implementation() {
    return false;
}

void USSCharacterBattleAssistComponent::IsAutoGuardRequest(EKoratBranch& OutResult) {
}

bool USSCharacterBattleAssistComponent::IsAutoGuardMode() const {
    return false;
}

void USSCharacterBattleAssistComponent::IsAutoGuardJustRequest(EKoratBranch& OutResult) {
}

bool USSCharacterBattleAssistComponent::IsAutoGuardCombatives_Implementation() {
    return false;
}

bool USSCharacterBattleAssistComponent::IsAutoGuardBullets_Implementation() {
    return false;
}

bool USSCharacterBattleAssistComponent::IsAutoGuard_Implementation() {
    return false;
}

float USSCharacterBattleAssistComponent::GetPursuitDragonHomingSafeTime() const {
    return 0.0f;
}

float USSCharacterBattleAssistComponent::GetPursuitAssistUPHeight() const {
    return 0.0f;
}

float USSCharacterBattleAssistComponent::GetPursuitAssistDragonSmashDistance() const {
    return 0.0f;
}

float USSCharacterBattleAssistComponent::GetPursuitAssistDownHeight() const {
    return 0.0f;
}

void USSCharacterBattleAssistComponent::GetPursuitAssistDirection(const FKoratActionDataList& InActonUP, const FKoratActionDataList& InActonDown, FKoratActionDataList& OutAttack, EKoratBranch& OutResult) {
}

ASSCharacter* USSCharacterBattleAssistComponent::GetPlayerCharacter() {
    return NULL;
}

float USSCharacterBattleAssistComponent::GetDragonDashAssistTime() const {
    return 0.0f;
}

int32 USSCharacterBattleAssistComponent::GetComboAssistResetCountMax() const {
    return 0;
}

float USSCharacterBattleAssistComponent::GetCombativesGuardRecoveryTime() const {
    return 0.0f;
}

float USSCharacterBattleAssistComponent::GetCombativesGuardDistance() const {
    return 0.0f;
}

float USSCharacterBattleAssistComponent::GetBulletsGuardDistance() const {
    return 0.0f;
}

USSCharacterBulletManager* USSCharacterBattleAssistComponent::GetBulletManager() {
    return NULL;
}

bool USSCharacterBattleAssistComponent::GetAttackTypeFromActionData(EKoratActionAttackType& OutAttackType, const FKoratActionDataList& InAction) {
    return false;
}

void USSCharacterBattleAssistComponent::DebugDraw_Implementation(UCanvas* InCanvas, APlayerController* InPlayerController) {
}

void USSCharacterBattleAssistComponent::ComboAssistBattleKeyTimeSincePushInAction(ESSFlowConditionsJudgmentType& OutResult, float InTime, EKoratInequalitySignType InInequalitySign) {
}

void USSCharacterBattleAssistComponent::ComboAssistBattleKeyPush(ESSFlowConditionsJudgmentType& OutResult) {
}


