#include "KoratFreeTimelinePlayerBase.h"
#include "Net/UnrealNetwork.h"

UKoratFreeTimelinePlayerBase::UKoratFreeTimelinePlayerBase() {
    this->bDebugFlag = false;
}

void UKoratFreeTimelinePlayerBase::Stop() {
}

bool UKoratFreeTimelinePlayerBase::PlayByLabel(const FName InSeekLabel, const float InPlayRatio) {
    return false;
}

void UKoratFreeTimelinePlayerBase::Play() {
}

void UKoratFreeTimelinePlayerBase::Pause() {
}

bool UKoratFreeTimelinePlayerBase::IsValid_Implementation() const {
    return false;
}

bool UKoratFreeTimelinePlayerBase::IsStopped() const {
    return false;
}

bool UKoratFreeTimelinePlayerBase::IsPlaying() const {
    return false;
}

bool UKoratFreeTimelinePlayerBase::IsPause() const {
    return false;
}

void UKoratFreeTimelinePlayerBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UKoratFreeTimelinePlayerBase, PlaybackSettings);
}


