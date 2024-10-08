#include "SSCharacterActionTargetComponent.h"
#include "SSCharacterActionTarget.h"

USSCharacterActionTargetComponent::USSCharacterActionTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStayActionTarget = false;
    this->StayWaitTime = 0.00f;
    this->StayTime = 0.00f;
    this->bTargetVisibility = true;
    this->bIgnoreActionTarget = false;
    this->bTargetStayActionTarget = false;
    this->bComboTargetStayActionTarget = false;
    this->bIgnoreActionTargetDistance = false;
    this->bActionTargetStopActionEnd = false;
    this->bStopActionTargetLater = false;
    this->bLastKnownTransform = false;
    this->SSCharacterActionTarget = CreateDefaultSubobject<USSCharacterActionTarget>(TEXT("SSCharacterActionTarget"));
    this->SSCharacterActionTargetStay = CreateDefaultSubobject<USSCharacterActionTarget>(TEXT("SSCharacterActionTargetStay"));
}

void USSCharacterActionTargetComponent::SetStayActionTargetWaitTime(float StayActionTargetWaitTime) {
}

void USSCharacterActionTargetComponent::SetStayActionTargetTime(float StayActionTargetTime) {
}

void USSCharacterActionTargetComponent::SetStayActionTarget(bool stayActionTarget) {
}

void USSCharacterActionTargetComponent::SetIgnoreActionTarget(bool ignoreActionTarget) {
}

void USSCharacterActionTargetComponent::SetActionTargetStayLastTransform(const FTransform& InTransform) {
}

bool USSCharacterActionTargetComponent::IsUseStayActionTarget() const {
    return false;
}

bool USSCharacterActionTargetComponent::IsUseComboStayActionTarget() const {
    return false;
}

bool USSCharacterActionTargetComponent::IsTargetVisibility() const {
    return false;
}

bool USSCharacterActionTargetComponent::IsStopActionTargetUpdate() const {
    return false;
}

bool USSCharacterActionTargetComponent::IsStayActionTarget() const {
    return false;
}

bool USSCharacterActionTargetComponent::IsIgnoreActionTarget() const {
    return false;
}

bool USSCharacterActionTargetComponent::IsCanEverLook() const {
    return false;
}

USSCharacterActionTargetComponent* USSCharacterActionTargetComponent::GetTargetActionTargetComponent() const {
    return NULL;
}

FName USSCharacterActionTargetComponent::GetComponentTagName() {
    return NAME_None;
}

FTransform USSCharacterActionTargetComponent::GetActionTargetTransformStay() const {
    return FTransform{};
}

FTransform USSCharacterActionTargetComponent::GetActionTargetTransformReal() const {
    return FTransform{};
}

FTransform USSCharacterActionTargetComponent::GetActionTargetTransform() const {
    return FTransform{};
}

FTransform USSCharacterActionTargetComponent::GetActionTargetStayLastTransform() const {
    return FTransform{};
}

bool USSCharacterActionTargetComponent::CheckTargetVisibility() {
    return false;
}

bool USSCharacterActionTargetComponent::CheckTargetStayActionTarget() {
    return false;
}


