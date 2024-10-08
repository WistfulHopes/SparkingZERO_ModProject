#include "SSBulletRatSpawnActor.h"

ASSBulletRatSpawnActor::ASSBulletRatSpawnActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BulletRatType = EKoratBulletRatType::None;
    this->SoundGroupType = ESSSoundGroupType::UI;
    this->bUseSoundSelectorLabel = false;
    this->bCanSpawnFlag = true;
    this->bFirstTickSetup = false;
    this->BulletRatSpawnActorManager = NULL;
    this->bBorrowingPool = false;
}


void ASSBulletRatSpawnActor::RemoveSpawnedObjects(AActor* InActor) {
}



void ASSBulletRatSpawnActor::GetTransformForRandomScale(const FVector& InLocation, FTransform& OutTransform) const {
}

void ASSBulletRatSpawnActor::GetTransformForRandomRotationAndScale(const FVector& InLocation, FTransform& OutTransform) const {
}

FVector ASSBulletRatSpawnActor::GetRandomizedKnockScale() const {
    return FVector{};
}

FVector ASSBulletRatSpawnActor::GetRandomizedDecalScale() const {
    return FVector{};
}

FRotator ASSBulletRatSpawnActor::GetRandomizedDecalRotation() const {
    return FRotator{};
}

void ASSBulletRatSpawnActor::GetKnockNiagaraTypeDisplayString(FString& OutString) {
}



