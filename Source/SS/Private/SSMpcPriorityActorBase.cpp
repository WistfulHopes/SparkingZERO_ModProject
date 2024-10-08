#include "SSMpcPriorityActorBase.h"

ASSMpcPriorityActorBase::ASSMpcPriorityActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ASSMpcPriorityActorBase::SetInfoVectorValue(const FLinearColor InVectorValue) {
}

void ASSMpcPriorityActorBase::SetInfoUpdateFlag(const bool InValue) {
}

void ASSMpcPriorityActorBase::SetInfoScalarValue(const float InScalarValue) {
}

void ASSMpcPriorityActorBase::SetInfoPriority(const int32 InPriority) {
}

void ASSMpcPriorityActorBase::SetDefaultPriorityInfo(const FSSMpcPriorityInfo& InInfo) {
}

AActor* ASSMpcPriorityActorBase::GetPriorityManager() const {
    return NULL;
}

FSSMpcPriorityInfo ASSMpcPriorityActorBase::GetPriorityInfo() const {
    return FSSMpcPriorityInfo{};
}

bool ASSMpcPriorityActorBase::AddSelfToManager() {
    return false;
}


