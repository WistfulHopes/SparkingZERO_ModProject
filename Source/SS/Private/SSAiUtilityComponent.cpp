#include "SSAiUtilityComponent.h"

USSAiUtilityComponent::USSAiUtilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool USSAiUtilityComponent::IsUsableBlast(const FKoratAiBlastTypeDataList InBlastType) {
    return false;
}

void USSAiUtilityComponent::GetTargetSectionName(FName& OutSectionName) {
}

void USSAiUtilityComponent::GetTargetActionName(FName& OutActionName) {
}

float USSAiUtilityComponent::GetTargetActionElapsedTime() {
    return 0.0f;
}

float USSAiUtilityComponent::GetReactionSpeed(const ESSAiReactionSpeedType InType) {
    return 0.0f;
}

ASSNavSystemManager* USSAiUtilityComponent::GetNavSystemManager() {
    return NULL;
}

void USSAiUtilityComponent::GetMyselfSectionName(FName& OutSectionName) {
}

void USSAiUtilityComponent::GetMyselfActionName(FName& OutActionName) {
}

float USSAiUtilityComponent::GetMyselfActionElapsedTime() {
    return 0.0f;
}

float USSAiUtilityComponent::GetMyaselfActionElapsedTime() {
    return 0.0f;
}

float USSAiUtilityComponent::GetMaxBlastPower() {
    return 0.0f;
}

ESSAiFormChangeType USSAiUtilityComponent::GetFormChangeType(const bool bInRandom) {
    return ESSAiFormChangeType::None;
}

float USSAiUtilityComponent::GetDistanceToTarget() {
    return 0.0f;
}

int32 USSAiUtilityComponent::GetCharacterChangeIndex(const bool bInRandom) {
    return 0;
}

int32 USSAiUtilityComponent::GetBlastIndex(const FKoratAiBlastTypeDataList InBlastType, const bool bInRandom) {
    return 0;
}

USSAiTypeDataAsset* USSAiUtilityComponent::GetAiTypeDataAsset() {
    return NULL;
}

UBehaviorTree* USSAiUtilityComponent::GetAiSpecificBehaviorTree(const FName InKeyName) {
    return NULL;
}


