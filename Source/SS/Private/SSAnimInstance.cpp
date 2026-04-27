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
void USSAnimInstance::ApplyWindToAllKawaiiPhysicsNodes(
    float WindScale,
    float OverwriteWindSpeed,
    const FVector& OverwriteWindDirection,
    bool bEnableWind,
    bool bEnableOverwriteWind)
{
    const IAnimClassInterface* AnimClassInterface = IAnimClassInterface::GetFromClass(GetClass());
    if (!AnimClassInterface) return;

    const TArray<FStructProperty*>& NodeProperties = AnimClassInterface->GetAnimNodeProperties();

    for (FStructProperty* Prop : NodeProperties)
    {
        if (!Prop || Prop->Struct->GetFName() != FName("AnimNode_KawaiiPhysics"))
            continue;

        void* NodePtr = Prop->ContainerPtrToValuePtr<void>(this);
        if (!NodePtr) continue;

        FAnimNode_KawaiiPhysics* KawaiiNode = reinterpret_cast<FAnimNode_KawaiiPhysics*>(NodePtr);
        if (!KawaiiNode) continue;

        KawaiiNode->bEnableWind = bEnableWind;
        KawaiiNode->bEnableOverwriteWind = bEnableOverwriteWind;
        KawaiiNode->WindScale = WindScale;
        KawaiiNode->OverwriteWindSpeed = OverwriteWindSpeed;
        KawaiiNode->OverwriteWindDirection = OverwriteWindDirection;
    }
}

