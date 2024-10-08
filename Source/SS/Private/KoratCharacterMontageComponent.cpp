#include "KoratCharacterMontageComponent.h"
#include "SSRandom.h"

UKoratCharacterMontageComponent::UKoratCharacterMontageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionIdealPositionMap = NULL;
    this->Random = CreateDefaultSubobject<USSRandom>(TEXT("Random_UKoratCharacterMontageComponent"));
    this->bBlastImpactDebugStartRequest = false;
    this->IsActionStandbyEnable = false;
    this->UpdateDeltaTime = 0.00f;
    this->MontageActionTime = 0.00f;
    this->SubActionStateAnimInstance = NULL;
    this->IsActionCancelEnableCpp = 0;
}

void UKoratCharacterMontageComponent::UpdatePlayingAnimDataListArrayNew() {
}


void UKoratCharacterMontageComponent::UpdateKeyInput(const float InDeltaTime) {
}

bool UKoratCharacterMontageComponent::UnRegistrationActionIdealPositionDataAsset(const USSAnimNotifyStateEvent* InStateEvent) {
    return false;
}

void UKoratCharacterMontageComponent::SetAddtiveReactionParameter(const FKoratAddtiveReactionParameter& InAddtiveReactionParameter) {
}

void UKoratCharacterMontageComponent::ResetAddtiveReactionParameter() {
}

void UKoratCharacterMontageComponent::RegistrationActionIdealPositionDataAsset(const USSAnimNotifyStateEvent* InStateEvent) {
}

void UKoratCharacterMontageComponent::PlayAddtiveReaction(const FKoratAddtiveReactionParameter& InAddtiveReactionParameter) {
}









































































void UKoratCharacterMontageComponent::IsDebugBlastImpactStartRequest(EKoratBranch& OutResult) {
}


bool UKoratCharacterMontageComponent::IsBattleKeyReleasedImpl(const EKoratBattleKey InBattleKey) const {
    return false;
}

bool UKoratCharacterMontageComponent::IsBattleKeyPressedImpl(const EKoratBattleKey InBattleKey) const {
    return false;
}



float UKoratCharacterMontageComponent::GetNotifyEventTime(const FAnimNotifyEvent& InAnimNotifyEvent) const {
    return 0.0f;
}

void UKoratCharacterMontageComponent::GetMontageNotifyEvents(const UAnimMontage* InAnimMontage, TArray<FAnimNotifyEvent>& OutNotifyEvents) {
}

float UKoratCharacterMontageComponent::GetMontageActionTime() const {
    return 0.0f;
}

TArray<FKoratReplaceAnimationDataList> UKoratCharacterMontageComponent::GetCurrentPlayingAnimDataListArray() const {
    return TArray<FKoratReplaceAnimationDataList>();
}

float UKoratCharacterMontageComponent::GetBattleKeyTimeSinceReleasedInSectionImpl(const EKoratBattleKey InBattleKey) const {
    return 0.0f;
}

float UKoratCharacterMontageComponent::GetBattleKeyTimeSinceReleasedInActionImpl(const EKoratBattleKey InBattleKey) const {
    return 0.0f;
}

float UKoratCharacterMontageComponent::GetBattleKeyTimeSinceReleasedImpl(const EKoratBattleKey InBattleKey) const {
    return 0.0f;
}

float UKoratCharacterMontageComponent::GetBattleKeyTimeSincePressedInSectionImpl(const EKoratBattleKey InBattleKey) const {
    return 0.0f;
}

float UKoratCharacterMontageComponent::GetBattleKeyTimeSincePressedInActionImpl(const EKoratBattleKey InBattleKey) const {
    return 0.0f;
}

float UKoratCharacterMontageComponent::GetBattleKeyTimeSincePressedImpl(const EKoratBattleKey InBattleKey) const {
    return 0.0f;
}

float UKoratCharacterMontageComponent::GetBattleKeyTimeSincePressedAtIntervalImpl(const EKoratBattleKey InBattleKey) const {
    return 0.0f;
}


float UKoratCharacterMontageComponent::GetBattleKeyHoldTimeImpl(const EKoratBattleKey Key) const {
    return 0.0f;
}

FKoratAddtiveReactionParameter UKoratCharacterMontageComponent::GetAddtiveReactionParameter() const {
    return FKoratAddtiveReactionParameter{};
}

void UKoratCharacterMontageComponent::DebugRequestBlastImpactStart() {
}

void UKoratCharacterMontageComponent::DebugBlastImpactStart() {
}

void UKoratCharacterMontageComponent::DebugBlastImpactFiring(ASSCharacter* InCharacter, int32 InPlayerSide, float& OutDelayTime) {
}

void UKoratCharacterMontageComponent::CopyPropertyAtDamageCostumeChange_Implementation(const UKoratCharacterMontageComponent* InSrcMontageComp) {
}

void UKoratCharacterMontageComponent::ClearBattleKeyTimeSincePressedKeyAll() {
}

void UKoratCharacterMontageComponent::ClearBattleKeyTimeSinceOneKey(const EKoratBattleKey InBattleKey) {
}

void UKoratCharacterMontageComponent::ClearBattleKeyTimeSinceKeyInAction() {
}

void UKoratCharacterMontageComponent::CheckingEventForLocomotionIdle(FString& ChekingEvent, const TArray<FKoratActionDataList>& IdleActionList) {
}

void UKoratCharacterMontageComponent::AddIgnoreUntilPushedKey(TArray<EKoratBattleKey> InIgnoreUntilPushedKey) {
}


