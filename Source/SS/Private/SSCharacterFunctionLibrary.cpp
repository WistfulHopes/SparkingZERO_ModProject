#include "SSCharacterFunctionLibrary.h"

USSCharacterFunctionLibrary::USSCharacterFunctionLibrary() {
}

bool USSCharacterFunctionLibrary::SetCharacterLocation(APawn* Character, const FVector NewLocation, const TEnumAsByte<ESSCharacterLocationType> LocationType, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    return false;
}

float USSCharacterFunctionLibrary::GetOneMinusCurveValue(const UAnimInstance* Target, FName CurveName) {
    return 0.0f;
}

FTransform USSCharacterFunctionLibrary::GetCharacterSocketTransform(const APawn* Character, const FName SocketName, const TEnumAsByte<ERelativeTransformSpace> TransformSpace, bool& Exist) {
    return FTransform{};
}

FVector USSCharacterFunctionLibrary::GetCharacterLocation(const APawn* Character, const TEnumAsByte<ESSCharacterLocationType> LocationType) {
    return FVector{};
}

FRotator USSCharacterFunctionLibrary::GetCharacterConfrontRotator(const APawn* Character, float AdditionalAngle) {
    return FRotator{};
}

bool USSCharacterFunctionLibrary::DoesCharacterSocketExist(const APawn* Character, const FName SocketName) {
    return false;
}

FTransform USSCharacterFunctionLibrary::CalcCharacterTransformFromSocketTarget(const APawn* Character, const FName SocketName, FVector SocketLocation, FRotator ActorRotation, bool bIgnorePitchRotation) {
    return FTransform{};
}

FRotator USSCharacterFunctionLibrary::CalcCharacterRotatorFromLocationTarget(const APawn* Character, FVector Location, bool bIgnorePitchRotation, FRotator AdditionalRotation) {
    return FRotator{};
}

FVector USSCharacterFunctionLibrary::CalcCharacterLocationFromSocketTarget(const APawn* Character, const FName SocketName, FVector SocketLocation) {
    return FVector{};
}

FVector USSCharacterFunctionLibrary::CalcCharacterLocation(const APawn* Character, const FVector NewLocation, const TEnumAsByte<ESSCharacterLocationType> LocationType) {
    return FVector{};
}


