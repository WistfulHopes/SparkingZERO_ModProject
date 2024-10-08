#include "SSBattleAIController.h"
#include "SSRandom.h"

ASSBattleAIController::ASSBattleAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWantsPlayerState = true;
    this->Random = CreateDefaultSubobject<USSRandom>(TEXT("AiRandom"));
    this->bDebugRequestCharacterChange = false;
}

void ASSBattleAIController::SetBrainComponentDependency() {
}

void ASSBattleAIController::ResetLog() {
}

void ASSBattleAIController::OutputLog() {
}

void ASSBattleAIController::OnResetThinking() {
}


bool ASSBattleAIController::IsAfterModelSession() {
    return false;
}

bool ASSBattleAIController::IsAcceptingCrashImpactInput() {
    return false;
}

USSAiPerceptionComponent* ASSBattleAIController::GetSSPerceptionComponent() {
    return NULL;
}

USSRandom* ASSBattleAIController::GetRandom() const {
    return NULL;
}

int32 ASSBattleAIController::GetPlaySide() const {
    return 0;
}

USSAiPersonalityComponent* ASSBattleAIController::GetPersonalityComponent() {
    return NULL;
}

USSAiPadGenerationComponent* ASSBattleAIController::GetPadGenerationComponent() {
    return NULL;
}

float ASSBattleAIController::GetMoveUpDownAxisValue() {
    return 0.0f;
}

int32 ASSBattleAIController::GetLogCounter() const {
    return 0;
}

USSAiLearningComponent* ASSBattleAIController::GetLearningComponent() {
    return NULL;
}

USSAiBTDecoratorUtilityComponent* ASSBattleAIController::GetDecoratorUtilityComponent() {
    return NULL;
}

UBehaviorTreeComponent* ASSBattleAIController::GetBehaviorTreeComponent() {
    return NULL;
}

bool ASSBattleAIController::CanAiRun() {
    return false;
}

void ASSBattleAIController::AddLog(const FString& InLog) {
}


