#include "SoundAtomCueSheet.h"

USoundAtomCueSheet::USoundAtomCueSheet() {
    this->Contains = false;
    this->NumSlots = -1;
    this->bOverrideAwbDirectory = false;
    this->AdditionalData = NULL;
}

void USoundAtomCueSheet::ReleaseAcb(FName AcbName) {
}

USoundAtomCueSheet* USoundAtomCueSheet::LoadAtomCueSheet(USoundAtomCueSheet* CueSheet, bool bAddToLevel) {
    return NULL;
}

USoundAtomCueSheet* USoundAtomCueSheet::LoadAcb(FName AcbName, bool bAddToLevel) {
    return NULL;
}

bool USoundAtomCueSheet::IsLoaded() {
    return false;
}

int32 USoundAtomCueSheet::GetNumCues() const {
    return 0;
}

USoundAtomCue* USoundAtomCueSheet::GetAtomCueByName(const FString& CueName) {
    return NULL;
}

USoundAtomCue* USoundAtomCueSheet::GetAtomCueByIndex(int32 CueIndex) {
    return NULL;
}

USoundAtomCue* USoundAtomCueSheet::GetAtomCueById(int32 CueId) {
    return NULL;
}

void USoundAtomCueSheet::DetachDspBusSetting() {
}

bool USoundAtomCueSheet::BP_GetCueInfoFromName(const FString& Name, FAtomCueInfo& CueInfo) const {
    return false;
}

bool USoundAtomCueSheet::BP_GetCueInfoFromIndex(int32 Index, FAtomCueInfo& CueInfo) const {
    return false;
}

bool USoundAtomCueSheet::BP_GetCueInfoFromId(int32 ID, FAtomCueInfo& CueInfo) const {
    return false;
}

void USoundAtomCueSheet::AttachDspBusSetting(const FString& SettingName) {
}

void USoundAtomCueSheet::ApplyDspBusSnapshot(const FString& SnapshotName, int32 Milliseconds) {
}


