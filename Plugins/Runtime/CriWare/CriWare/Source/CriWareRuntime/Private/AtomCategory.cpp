#include "AtomCategory.h"

UAtomCategory::UAtomCategory() {
}

void UAtomCategory::StopByName(const FString& CategoryName) {
}

void UAtomCategory::SetVolumeByName(const FString& CategoryName, float Volume) {
}

void UAtomCategory::SetMute(const FString& CategoryName, bool IsMute) {
}

void UAtomCategory::SetAisacControlByName(const FString& CategoryName, const FString& AisacName, float Value) {
}

bool UAtomCategory::ResetAllAisacControlByName(const FString& CategoryName) {
    return false;
}

bool UAtomCategory::ResetAllAisacControlById(int32 CategoryId) {
    return false;
}

void UAtomCategory::PauseByName(const FString& CategoryName, bool bPause) {
}

bool UAtomCategory::IsPausedByName(const FString& CategoryName) {
    return false;
}

float UAtomCategory::GetVolumeByName(const FString& CategoryName) {
    return 0.0f;
}

int32 UAtomCategory::GetNumAttachedAisacsByName(const FString& CategoryName) {
    return 0;
}

int32 UAtomCategory::GetNumAttachedAisacsById(int32 CategoryId) {
    return 0;
}

float UAtomCategory::GetCurrentAisacControlValueByName(const FString& CategoryName, const FString& AisacControlName) {
    return 0.0f;
}

float UAtomCategory::GetCurrentAisacControlValueById(int32 CategoryId, int32 AisacControlID) {
    return 0.0f;
}

void UAtomCategory::GetAttachedAisacInfoByName(const FString& CategoryName, int32 AisacAttachedIndex, bool& IsSuccess, FAtomAisacInfo& AisacInfo) {
}

void UAtomCategory::GetAttachedAisacInfoById(int32 CategoryId, int32 AisacAttachedIndex, bool& IsSuccess, FAtomAisacInfo& AisacInfo) {
}


