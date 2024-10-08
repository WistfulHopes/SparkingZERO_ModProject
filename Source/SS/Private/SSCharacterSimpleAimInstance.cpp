#include "SSCharacterSimpleAimInstance.h"

USSCharacterSimpleAimInstance::USSCharacterSimpleAimInstance() {
    this->bEnableAim = false;
    this->BodyBlendTimeZero = 0.00f;
    this->BodyBlendTimeNotZero = 0.00f;
    this->bEnableLookat = false;
    this->bLookatPartBody = false;
    this->bLookatPartHead = false;
    this->bLookatPartEye = false;
    this->bEnableOverrideBlendTime = false;
    this->OverrideBlendTime = 0.30f;
    this->UpdateAIMNotifyTargetActor = NULL;
}

void USSCharacterSimpleAimInstance::SetLookatParameters(const FSSSimpleAimLookatLookatParameter& Parameter) {
}

void USSCharacterSimpleAimInstance::SetLookatOverrideBlendTime(const bool bInEnable, const float InBlendTime) {
}

void USSCharacterSimpleAimInstance::SetLookatLocation(const FVector& InLocation) {
}

void USSCharacterSimpleAimInstance::SetAimParameters(const FSSSimpleAimLookatAimParameter& Parameter) {
}

void USSCharacterSimpleAimInstance::SetAimLocation(const FVector& InLocation) {
}

void USSCharacterSimpleAimInstance::SetAimBodyBlendTime(float InBlendTimeTrue, float InBlendTimeFalse) {
}

USSCharacterSimpleAimInstance* USSCharacterSimpleAimInstance::FindSimpleAimAnimInstance(USkeletalMeshComponent* MeshComp) {
    return NULL;
}

void USSCharacterSimpleAimInstance::EnableLookat() {
}

void USSCharacterSimpleAimInstance::EnableAim() {
}

void USSCharacterSimpleAimInstance::DisableLookat() {
}

void USSCharacterSimpleAimInstance::DisableAim() {
}


