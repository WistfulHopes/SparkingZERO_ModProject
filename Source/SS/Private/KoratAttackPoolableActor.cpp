#include "KoratAttackPoolableActor.h"

AKoratAttackPoolableActor::AKoratAttackPoolableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SourceActor = NULL;
    this->SourceObject = NULL;
    this->SourceIndex = -1;
    this->SourceCount = 0;
    this->GroupId = -1;
    this->IsDamage = false;
    this->bReflectedHit = false;
}

void AKoratAttackPoolableActor::SetupReceivedDamageParameter(ASSCharacter* InCharacter, const FKoratAdditionalDamageInfo& InAdditionalDamageInfo, EKoratActionAttackType InAttackType) {
}

void AKoratAttackPoolableActor::SetAttackType(EKoratActionAttackType InAttackType) {
}

void AKoratAttackPoolableActor::SetAttackCollision(UPrimitiveComponent* InCollision) {
}


int32 AKoratAttackPoolableActor::GetOptimizeMode() const {
    return 0;
}



void AKoratAttackPoolableActor::ExecCollision(const FVector& InStart, const FVector& InEnd, const FQuat& InRot, EKoratCombativesCollisionType InShape, float Radius, float CapsuleHalfHeight, const FVector& BoxHalfSize, ASSCharacter* InAttacker, const FKoratActionDataList& InAction, const FVector& InClosestPointOrigin) {
}


void AKoratAttackPoolableActor::DisposeCollision() {
}

bool AKoratAttackPoolableActor::CheckAndSetGroupHitFlag(FName InUniqName) {
    return false;
}

bool AKoratAttackPoolableActor::CalculatCrossPointOnPhysicsAsset(AActor* InOverlapActor, FTransform InTransform, FTransform& OutTransform, FName& OutBoneName) {
    return false;
}


