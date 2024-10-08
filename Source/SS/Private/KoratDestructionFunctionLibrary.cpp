#include "KoratDestructionFunctionLibrary.h"

UKoratDestructionFunctionLibrary::UKoratDestructionFunctionLibrary() {
}

void UKoratDestructionFunctionLibrary::RemoveInstancedFoliageInSphere(ULevel* InLevel, const FVector& Location, const float Radius) {
}

void UKoratDestructionFunctionLibrary::RemoveInstancedFoliageInBox(ULevel* InLevel, const FBox& Bounds) {
}

bool UKoratDestructionFunctionLibrary::IsLowSpecDestruction() {
    return false;
}

bool UKoratDestructionFunctionLibrary::IsDestructionObject(const AActor* Actor) {
    return false;
}

bool UKoratDestructionFunctionLibrary::IsBrokenObject(const AActor* Actor) {
    return false;
}

UKoratDestructionDamageComponent* UKoratDestructionFunctionLibrary::FindDestructionDamageComponent(const AActor* Actor) {
    return NULL;
}

FKoratDestructionDamageResult UKoratDestructionFunctionLibrary::DestructionDirectDamage(const AActor* Actor, const FKoratDestructionFieldParameter& Parameter) {
    return FKoratDestructionDamageResult{};
}

FKoratDestructionDamageResult UKoratDestructionFunctionLibrary::DestructionDamage(const AActor* Actor, const FKoratDestructionFieldParameter& Parameter) {
    return FKoratDestructionDamageResult{};
}


