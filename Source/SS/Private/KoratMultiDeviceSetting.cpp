#include "KoratMultiDeviceSetting.h"

UKoratMultiDeviceSetting::UKoratMultiDeviceSetting() {
}

void UKoratMultiDeviceSetting::SetupConsoleVariable(UObject* WorldContextObject) {
}

void UKoratMultiDeviceSetting::SetGraphicsOption_VSyncQuality(UObject* WorldContextObject, int32 Level) {
}

void UKoratMultiDeviceSetting::SetGraphicsOption_VisualEffectQuality(UObject* WorldContextObject, int32 Level) {
}

void UKoratMultiDeviceSetting::SetGraphicsOption_TextureQuality(UObject* WorldContextObject, int32 Level) {
}

void UKoratMultiDeviceSetting::SetGraphicsOption_ShadowQuality(UObject* WorldContextObject, int32 Level) {
}

void UKoratMultiDeviceSetting::SetGraphicsOption_PostProcessingQuality(UObject* WorldContextObject, int32 Level) {
}

void UKoratMultiDeviceSetting::SetGraphicsOption_MotionBlurQuality(UObject* WorldContextObject, int32 Level) {
}

void UKoratMultiDeviceSetting::SetGraphicsOption_LodQuality(UObject* WorldContextObject, int32 Level) {
}

void UKoratMultiDeviceSetting::SetGraphicsOption_HandyCameraShakeQuality(UObject* WorldContextObject, int32 Level) {
}

void UKoratMultiDeviceSetting::SetGraphicsOption_FoliageQuality(UObject* WorldContextObject, int32 Level) {
}

void UKoratMultiDeviceSetting::SetGraphicsOption_DOFQuality(UObject* WorldContextObject, int32 Level) {
}

void UKoratMultiDeviceSetting::SetGraphicsOption_ChaosQuality(UObject* WorldContextObject, int32 Level) {
}

void UKoratMultiDeviceSetting::SetGraphicsOption_AntiAliasingQuality(UObject* WorldContextObject, int32 Level) {
}

void UKoratMultiDeviceSetting::SetGraphicsOption(UObject* WorldContextObject, const FSSOptionVideoParam& Param) {
}

void UKoratMultiDeviceSetting::SetBrightnessOption_SDR_Brightness(UObject* WorldContextObject, float Value) {
}

void UKoratMultiDeviceSetting::SetBrightnessOption_HDR_Contrast(UObject* WorldContextObject, float Value) {
}

void UKoratMultiDeviceSetting::SetBrightnessOption_HDR_Brightness(UObject* WorldContextObject, float Value) {
}

void UKoratMultiDeviceSetting::SetBrightnessOption_HDR_Black(UObject* WorldContextObject, float Value) {
}

void UKoratMultiDeviceSetting::SetBrightnessOption_EnableHDR(UObject* WorldContextObject, bool Enable) {
}

void UKoratMultiDeviceSetting::SetBrightnessOption(UObject* WorldContextObject, const FSSOptionBrightnessParam& Param) {
}

UKoratMultiDeviceSettingDataAsset* UKoratMultiDeviceSetting::GetSettingDataAsset() {
    return NULL;
}

int32 UKoratMultiDeviceSetting::GetGraphicsOption_VSyncQuality() {
    return 0;
}

int32 UKoratMultiDeviceSetting::GetGraphicsOption_VisualEffectQuality() {
    return 0;
}

int32 UKoratMultiDeviceSetting::GetGraphicsOption_TextureQuality() {
    return 0;
}

int32 UKoratMultiDeviceSetting::GetGraphicsOption_ShadowQuality() {
    return 0;
}

int32 UKoratMultiDeviceSetting::GetGraphicsOption_PostProcessingQuality() {
    return 0;
}

int32 UKoratMultiDeviceSetting::GetGraphicsOption_MotionBlurQuality() {
    return 0;
}

int32 UKoratMultiDeviceSetting::GetGraphicsOption_LodQuality() {
    return 0;
}

int32 UKoratMultiDeviceSetting::GetGraphicsOption_HandyCameraShakeQuality() {
    return 0;
}

int32 UKoratMultiDeviceSetting::GetGraphicsOption_FoliageQuality() {
    return 0;
}

int32 UKoratMultiDeviceSetting::GetGraphicsOption_DOFQuality() {
    return 0;
}

int32 UKoratMultiDeviceSetting::GetGraphicsOption_ChaosQuality() {
    return 0;
}

int32 UKoratMultiDeviceSetting::GetGraphicsOption_AntiAliasingQuality() {
    return 0;
}

TArray<FString> UKoratMultiDeviceSetting::GetDeviceChangeList() {
    return TArray<FString>();
}

float UKoratMultiDeviceSetting::GetBrightnessOption_SDR_Brightness() {
    return 0.0f;
}

float UKoratMultiDeviceSetting::GetBrightnessOption_HDR_Contrast() {
    return 0.0f;
}

float UKoratMultiDeviceSetting::GetBrightnessOption_HDR_Brightness() {
    return 0.0f;
}

float UKoratMultiDeviceSetting::GetBrightnessOption_HDR_Black() {
    return 0.0f;
}

bool UKoratMultiDeviceSetting::GetBrightnessOption_EnableHDR() {
    return false;
}

void UKoratMultiDeviceSetting::DeviceChange(const FString& Name) {
}


