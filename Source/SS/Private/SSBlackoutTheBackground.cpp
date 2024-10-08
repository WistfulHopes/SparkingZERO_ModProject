#include "SSBlackoutTheBackground.h"

ASSBlackoutTheBackground::ASSBlackoutTheBackground(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExecType = ESSBlackoutExecType::None;
    this->StartSeconds = 1.00f;
    this->EndSeconds = 2.00f;
}

void ASSBlackoutTheBackground::SetExecType(const ESSBlackoutExecType Type) {
}

float ASSBlackoutTheBackground::GetBlackOutMinRate() {
    return 0.0f;
}


