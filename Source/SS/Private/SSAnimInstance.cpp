#include "SSAnimInstance.h"

USSAnimInstance::USSAnimInstance() {
}

ASSCharacter* USSAnimInstance::TryGetCharacterOwner() const {
    return NULL;
}

void USSAnimInstance::SetSOSpeedsTo(const FKoratSOSpeeds& InValue) {
}

void USSAnimInstance::ResetStateMachine(const FName InMachineName) {
}

void USSAnimInstance::PlayStartEvent(UAnimMontage* Montage) {
}

bool USSAnimInstance::IsEnableIK() {
    return false;
}

bool USSAnimInstance::IsEnableFacialRig() {
    return false;
}

bool USSAnimInstance::IsEditing() const {
    return false;
}

void USSAnimInstance::GetWindParametersWithKawaiiPhysics(FVector& WindDirection, float& WindSpeed, bool& bOverwritten) {
}

FKoratSOSpeeds USSAnimInstance::GetSOSpeedsFrom() {
    return FKoratSOSpeeds{};
}

USSAnimInstance* USSAnimInstance::GetLinkedAnimInstanceByTag(const FName InTag, const bool bIncludeSubInstance) {
    return NULL;
}

bool USSAnimInstance::GetKawaiiPhysicsComponentParameters(FKoratKawaiiPhysicsParameters& InOut) {
    return false;
}

float USSAnimInstance::GetCurrentRelevantAnimTimeRemainingFraction(const FName InMachineName, FName& OutCurrentStateName) {
    return 0.0f;
}

float USSAnimInstance::GetCurrentRelevantAnimTime(const FName InMachineName, FName& OutCurrentStateName) {
    return 0.0f;
}


