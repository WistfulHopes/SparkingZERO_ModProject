#include "SSCharacterBulletManager.h"
#include "SSGroupExplosionManager.h"

USSCharacterBulletManager::USSCharacterBulletManager() {
    this->GroupExplosionManager = CreateDefaultSubobject<USSGroupExplosionManager>(TEXT("GroupExplosionManager"));
}

void USSCharacterBulletManager::ResetCountUpEnemyHitBullet(FKoratActionDataList InAction) {
}

void USSCharacterBulletManager::ResetCountMultiHitBullet(FKoratActionDataList InAction) {
}

void USSCharacterBulletManager::ResetCountInvalidatedBullet(FKoratActionDataList InAction) {
}

void USSCharacterBulletManager::ResetCountFinishedBullet(FKoratActionDataList InAction) {
}

void USSCharacterBulletManager::RemoveMessageByBullet(TSoftObjectPtr<ASSBulletActor> bullet) {
}

void USSCharacterBulletManager::ReceiveControllerMessage(FBulletControllerManagerMessage Message) {
}

int32 USSCharacterBulletManager::GetMultiHitBulletCount(FKoratActionDataList InAction) {
    return 0;
}

TArray<FBulletControllerManagerMessage> USSCharacterBulletManager::GetMessages() const {
    return TArray<FBulletControllerManagerMessage>();
}

int32 USSCharacterBulletManager::GetInvalidatedBulletCount(FKoratActionDataList InAction) {
    return 0;
}

int32 USSCharacterBulletManager::GetFinishedBulletCount(FKoratActionDataList InAction) {
    return 0;
}

int32 USSCharacterBulletManager::GetFieldExistinRunBulletsNum(FKoratActionDataList Action) {
    return 0;
}

int32 USSCharacterBulletManager::GetFieldExistinBulletsNum(FKoratActionDataList Action) {
    return 0;
}

int32 USSCharacterBulletManager::GetEnemyHitBulletCount(FKoratActionDataList InAction) {
    return 0;
}

TArray<TSoftObjectPtr<ASSBulletActor>> USSCharacterBulletManager::GetActiveBullets() const {
    return TArray<TSoftObjectPtr<ASSBulletActor>>();
}

void USSCharacterBulletManager::FinsishByDamage() {
}

void USSCharacterBulletManager::CountUpMultiHitBullet(FKoratActionDataList InAction) {
}

void USSCharacterBulletManager::CountUpInvalidatedBullet(FKoratActionDataList InAction) {
}

void USSCharacterBulletManager::CountUpFinishedBullet(FKoratActionDataList InAction) {
}

void USSCharacterBulletManager::CountUpEnemyHitBullet(FKoratActionDataList InAction) {
}


