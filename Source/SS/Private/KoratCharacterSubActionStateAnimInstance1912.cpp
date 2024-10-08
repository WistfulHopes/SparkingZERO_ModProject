#include "KoratCharacterSubActionStateAnimInstance1912.h"

UKoratCharacterSubActionStateAnimInstance1912::UKoratCharacterSubActionStateAnimInstance1912() {
    this->SubActionMovingAction = NULL;
    this->SubActionAction = NULL;
}

void UKoratCharacterSubActionStateAnimInstance1912::SetSetSectionName(const EKoratAnimType InAnimType, const int32 InPlayIndex, const FString& InSetSectionName) {
}

void UKoratCharacterSubActionStateAnimInstance1912::SetNextSectionName(const EKoratAnimType InAnimType, const int32 InPlayIndex, const FString& InNextSectionName) {
}

bool UKoratCharacterSubActionStateAnimInstance1912::SetMontageSetNextSection(const EKoratAnimType InAnimType, const int32 InPlayIndex) {
    return false;
}

void UKoratCharacterSubActionStateAnimInstance1912::SetMontage(const EKoratAnimType InAnimType, const int32 InPlayIndex, UAnimMontage* InMontage) {
}

void UKoratCharacterSubActionStateAnimInstance1912::SetIsContinued(const EKoratAnimType InAnimType, const int32 InPlayIndex, const bool InIsContinued) {
}

void UKoratCharacterSubActionStateAnimInstance1912::PlayMontage(const EKoratAnimType InAnimType, const int32 InPlayIndex, UAnimMontage* InMontage) {
}

FString UKoratCharacterSubActionStateAnimInstance1912::GetSetSectionName(const EKoratAnimType InAnimType, const int32 InPlayIndex) {
    return TEXT("");
}

FString UKoratCharacterSubActionStateAnimInstance1912::GetNextSectionName(const EKoratAnimType InAnimType, const int32 InPlayIndex) {
    return TEXT("");
}

int32 UKoratCharacterSubActionStateAnimInstance1912::GetMontageSlotNum(const EKoratAnimType InAnimType, const int32 InPlayIndex) {
    return 0;
}

FName UKoratCharacterSubActionStateAnimInstance1912::GetMontageSlotName(const EKoratAnimType InAnimType, const int32 InPlayIndex, int32 InSlotIndex) {
    return NAME_None;
}

UAnimMontage* UKoratCharacterSubActionStateAnimInstance1912::GetMontage(const EKoratAnimType InAnimType, const int32 InPlayIndex) {
    return NULL;
}

bool UKoratCharacterSubActionStateAnimInstance1912::GetIsContinued(const EKoratAnimType InAnimType, const int32 InPlayIndex) {
    return false;
}


