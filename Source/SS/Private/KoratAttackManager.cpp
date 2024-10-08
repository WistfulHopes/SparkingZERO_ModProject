#include "KoratAttackManager.h"

UKoratAttackManager::UKoratAttackManager() {
}

bool UKoratAttackManager::IsMapChangeEscapePhysicalSurface(const TEnumAsByte<EPhysicalSurface> InPhysicalSurface) {
    return false;
}

bool UKoratAttackManager::IsMapChangeDestructPhysicalSurface(const TEnumAsByte<EPhysicalSurface> InPhysicalSurface) {
    return false;
}

bool UKoratAttackManager::IsAirWallPhysicalSurface(const TEnumAsByte<EPhysicalSurface> InPhysicalSurface) {
    return false;
}

bool UKoratAttackManager::GaveDamageAtStrcut(const FKoratGaveDamageParameter& InGaveDamageParameter) {
    return false;
}

bool UKoratAttackManager::GaveDamage(AActor* InGaveDamageActor, ASSCharacter* FiredCharacter, AActor* InReceivedDamageActor, const FKoratActionDataList& InAction, const FTransform InHitTransform, const FName InHitBoneName, const FKoratReceivedDamageParameter& InReceivedDamageParameter, bool bBlastFinished) {
    return false;
}


