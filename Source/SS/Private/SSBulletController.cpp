#include "SSBulletController.h"

ASSBulletController::ASSBulletController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnerSequencePlayer = NULL;
    this->bIsSpawnedLevelSequencePlayer = false;
    this->BulletCommandManager = NULL;
    this->ExecuteActor = NULL;
    this->CommandType = EBulletControlCommand::None;
    this->SupporterIndex = -1;
    this->ShotTrigger = false;
    this->bDirectControl = false;
    this->EffectMultipleColorComponent = NULL;
}

void ASSBulletController::Setup() {
}

bool ASSBulletController::SetSourceColor(const FKoratEffectColorDataDetail& InColor) {
    return false;
}

void ASSBulletController::SetShotTrigger(bool bShot) {
}

void ASSBulletController::SetFireSocketName(const FString& Name) {
}

void ASSBulletController::SetDirectControl(bool bControl) {
}

void ASSBulletController::SetCommandType(EBulletControlCommand Num) {
}

void ASSBulletController::SetCommandName(EBulletControlCommand Num) {
}

FKoratEffectColorDataDetail ASSBulletController::GetSourceColor() {
    return FKoratEffectColorDataDetail{};
}

ASSBulletCommandManager* ASSBulletController::GetBulletCommandManager() {
    return NULL;
}

void ASSBulletController::ExecCommand(EBulletControlCommand Num) {
}


