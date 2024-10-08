#include "KoratControlRigFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UKoratControlRigFunctionLibrary::UKoratControlRigFunctionLibrary() {
}

void UKoratControlRigFunctionLibrary::SetControlMinimumRotator(UControlRig* ControlRig, const FName Name, const FRotator Value) {
}

void UKoratControlRigFunctionLibrary::SetControlMaximumRotator(UControlRig* ControlRig, const FName Name, const FRotator Value) {
}

void UKoratControlRigFunctionLibrary::OverwriteControlLimits(UControlRig* ControlRig, TSubclassOf<UControlRig> SourceClass) {
}

bool UKoratControlRigFunctionLibrary::EqualControlRig(const UControlRig* ControlRig, const TSoftClassPtr<UControlRig> ClassPtr) {
    return false;
}

bool UKoratControlRigFunctionLibrary::EqualClass(const UClass* InClass, const TSoftClassPtr<UControlRig> ClassPtr) {
    return false;
}


