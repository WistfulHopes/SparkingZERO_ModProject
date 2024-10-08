#include "LipsAnalyzerBase.h"

ULipsAnalyzerBase::ULipsAnalyzerBase() {
}

void ULipsAnalyzerBase::SetSilenceThreshold(const float VolumeDb) {
}

void ULipsAnalyzerBase::SetSamplingRate(const int32 SamplingRateHz) {
}

void ULipsAnalyzerBase::SetReadoutOffset(int64 OffsetMs) {
}

bool ULipsAnalyzerBase::IsAtSilence() const {
    return false;
}

void ULipsAnalyzerBase::Init(const int32 MaxInputSamplingRate, const ELipsAnalyzerDataReadoutMode dataReadoutMode) {
}

float ULipsAnalyzerBase::GetVolume() const {
    return 0.0f;
}

float ULipsAnalyzerBase::GetSilenceThreshold() const {
    return 0.0f;
}

FCriLipsMorphTargetBlendAmountAsJapanese ULipsAnalyzerBase::GetMorphTargetBlendAmountAsJapanese() const {
    return FCriLipsMorphTargetBlendAmountAsJapanese{};
}

FCriLipsMouthInfo ULipsAnalyzerBase::GetInfoAtSilence() const {
    return FCriLipsMouthInfo{};
}

FCriLipsMouthInfo ULipsAnalyzerBase::GetInfo() const {
    return FCriLipsMouthInfo{};
}


