#include "KoratPostprocessCndSystem.h"

UKoratPostprocessCndSystem::UKoratPostprocessCndSystem() {
}

bool UKoratPostprocessCndSystem::SetValueInt(UKoratPostprocessCndHandle* Handle, int32 Value) {
    return false;
}

bool UKoratPostprocessCndSystem::SetValueFloat(UKoratPostprocessCndHandle* Handle, float Value) {
    return false;
}

bool UKoratPostprocessCndSystem::SetValueBool(UKoratPostprocessCndHandle* Handle, bool Value) {
    return false;
}

void UKoratPostprocessCndSystem::SetupDefaultValue() {
}

bool UKoratPostprocessCndSystem::Delete(UKoratPostprocessCndHandle* Handle) {
    return false;
}

UKoratPostprocessCndHandle* UKoratPostprocessCndSystem::AddInt(EKoratPostprocessCndParamTypeInt Type, int32 Priority, int32 Value) {
    return NULL;
}

UKoratPostprocessCndHandle* UKoratPostprocessCndSystem::AddFloat(EKoratPostprocessCndParamTypeFloat Type, int32 Priority, float Value) {
    return NULL;
}

UKoratPostprocessCndHandle* UKoratPostprocessCndSystem::AddBool(EKoratPostprocessCndParamTypeBool Type, int32 Priority, bool Value) {
    return NULL;
}


