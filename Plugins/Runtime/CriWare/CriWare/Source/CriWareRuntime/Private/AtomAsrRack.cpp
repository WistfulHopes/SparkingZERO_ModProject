#include "AtomAsrRack.h"

UAtomAsrRack::UAtomAsrRack() {
    this->RackId = -1;
}

void UAtomAsrRack::SetEffectBypass(const FString& BusName, const FString& EffectName, bool Bypasses) {
}

void UAtomAsrRack::SetBusVolumeByName(const FString& BusName, float Volume) {
}

void UAtomAsrRack::SetBusSendLevelByName(const FString& SourceBusName, const FString& DestBusName, float Level) {
}

void UAtomAsrRack::SetAisacControlByName(const FString& control_name, float control_value) {
}

UAtomAsrRack* UAtomAsrRack::GetDefaultAsrRack() {
    return NULL;
}

FString UAtomAsrRack::GetCurrentAppliedSnapshot(int32 AsrRackID) {
    return TEXT("");
}

bool UAtomAsrRack::GetBusAnalyzerInfo(const FString& DspBusName, int32& num_channels, TArray<float>& rms_levels, TArray<float>& peak_levels, TArray<float>& peak_hold_levels) {
    return false;
}

UAtomAsrRack* UAtomAsrRack::GetAsrRack(int32 AsrRackID) {
    return NULL;
}

void UAtomAsrRack::DetachDspBusSetting() {
}

void UAtomAsrRack::ConnectToPadVibrator(int32 UserIndex) {
}

void UAtomAsrRack::ConnectToPadSpeaker(int32 UserIndex) {
}

void UAtomAsrRack::AttachDspBusSetting(const FString& SettingName) {
}

bool UAtomAsrRack::AssociateOutputPort(const FString& OutputPortName) {
    return false;
}

void UAtomAsrRack::ApplyDspBusSnapshot(const FString& SnapshotName, int32 Milliseconds) {
}


