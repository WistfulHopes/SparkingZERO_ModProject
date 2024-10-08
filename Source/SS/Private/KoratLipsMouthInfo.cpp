#include "KoratLipsMouthInfo.h"

FKoratLipsMouthInfo::FKoratLipsMouthInfo() {
    this->AnalyzerStatus = EKoratLipsAnalyzerStatus::Stop;
    this->IsPlaying = false;
    this->Volume = 0.00f;
    this->bDisable = false;
}

