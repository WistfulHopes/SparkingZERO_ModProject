#include "SpRuntimeBlueprintLibrary.h"

USpRuntimeBlueprintLibrary::USpRuntimeBlueprintLibrary() {
}

void USpRuntimeBlueprintLibrary::SetDebugGuiMeterVisible(bool InVisible) {
}

void USpRuntimeBlueprintLibrary::SetDebugGuiEnable(bool InEnable) {
}

void USpRuntimeBlueprintLibrary::SetDebugDisplayTelopVisible(bool InVisible) {
}

void USpRuntimeBlueprintLibrary::SetDebugDisplayPrintVisible(bool InVisible) {
}

void USpRuntimeBlueprintLibrary::SetDebugDisplayEnable(bool InEnable) {
}

void USpRuntimeBlueprintLibrary::PrintGamepadAttached() {
}

bool USpRuntimeBlueprintLibrary::IsGamepadAttached_Valve(int32 InControllerId) {
    return false;
}

bool USpRuntimeBlueprintLibrary::IsGamepadAttached_Sony(int32 InControllerId) {
    return false;
}

bool USpRuntimeBlueprintLibrary::IsGamepadAttached_Microsft(int32 InControllerId) {
    return false;
}

bool USpRuntimeBlueprintLibrary::IsGamepadAttached(int32 InControllerId) {
    return false;
}

TSoftObjectPtr<UTexture2D> USpRuntimeBlueprintLibrary::CreateViewportCaptureSoftTexture() {
    return NULL;
}

void USpRuntimeBlueprintLibrary::AssertionWarning(const FString& InMessage, bool InExpression) {
}

void USpRuntimeBlueprintLibrary::AssertionPrint(const FString& InMessage) {
}

void USpRuntimeBlueprintLibrary::AssertionInfo(const FString& InMessage) {
}

void USpRuntimeBlueprintLibrary::AssertionFatal(const FString& InMessage, bool InExpression) {
}

void USpRuntimeBlueprintLibrary::AssertionError(const FString& InMessage, bool InExpression) {
}

void USpRuntimeBlueprintLibrary::AssertionAssert(const FString& InMessage, bool InExpression) {
}


