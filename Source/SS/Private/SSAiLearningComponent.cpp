#include "SSAiLearningComponent.h"

USSAiLearningComponent::USSAiLearningComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USSAiLearningComponent::OnTargetUsesSkillAction(ASSCharacter* InTarget, const bool InSectionChanged) {
}

void USSAiLearningComponent::OnTargetUsesChargeAction(ASSCharacter* InTarget, const bool InFirst) {
}

void USSAiLearningComponent::OnInputCommand() {
}

void USSAiLearningComponent::OnInitializeAi() {
}

void USSAiLearningComponent::OnFinishCommand() {
}

void USSAiLearningComponent::OnFinalizeAi() {
}

void USSAiLearningComponent::OnDamage(const float InDamage) {
}

void USSAiLearningComponent::OnAttackHit(const float InDamage, const bool InGuardBreak) {
}

int32 USSAiLearningComponent::GetObstructionFailureCount() const {
    return 0;
}

int32 USSAiLearningComponent::GetDirectionOfAttackCount(const EAiDirectionOfAttack InDirType) {
    return 0;
}

int32 USSAiLearningComponent::GetAttackFailureCount(const FName InCommandId) {
    return 0;
}


