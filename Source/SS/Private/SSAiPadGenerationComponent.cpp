#include "SSAiPadGenerationComponent.h"

USSAiPadGenerationComponent::USSAiPadGenerationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDrawPath = false;
}

void USSAiPadGenerationComponent::SetProcess(const ESSAiPadGenerationProcess InProcess) {
}

void USSAiPadGenerationComponent::SetProbabilityLog(const int32 InNumerator, const int32 InDenominator) {
}

void USSAiPadGenerationComponent::ResetCoolDown() {
}

void USSAiPadGenerationComponent::OnResetThinking() {
}

void USSAiPadGenerationComponent::OnInitializeAi() {
}

void USSAiPadGenerationComponent::OnFinalizeAi() {
}

void USSAiPadGenerationComponent::OnDamage(const float InDamage) {
}

void USSAiPadGenerationComponent::OnChangeCharacter(int32 InPlayerNumber, ASSCharacter* InNewCharacter) {
}

bool USSAiPadGenerationComponent::IsActiveAction() const {
    return false;
}

bool USSAiPadGenerationComponent::InputCommand(const FName InCommandId, const int32 InIndex, const FName InLog, const bool InForced, const bool InOverwriteProtected, const UBTNode* InMyNode) {
    return false;
}

float USSAiPadGenerationComponent::GetTimeOutCounter() const {
    return 0.0f;
}

ESSAiPadGenerationProcess USSAiPadGenerationComponent::GetProcess() const {
    return ESSAiPadGenerationProcess::Idle;
}

void USSAiPadGenerationComponent::GetPressedPadAll(TArray<EKoratBattleKey>& OutBattleKey) {
}

int32 USSAiPadGenerationComponent::GetNowOrder() const {
    return 0;
}

int32 USSAiPadGenerationComponent::GetNextIndex() const {
    return 0;
}

FName USSAiPadGenerationComponent::GetActiveActionName() const {
    return NAME_None;
}

void USSAiPadGenerationComponent::FinishCommand() {
}

bool USSAiPadGenerationComponent::DoesCommandExist(const FName InCommandId) {
    return false;
}

void USSAiPadGenerationComponent::ChangeCommandIndex(const int32 InIndex) {
}


