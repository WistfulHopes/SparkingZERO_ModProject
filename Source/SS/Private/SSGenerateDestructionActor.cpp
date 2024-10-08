#include "SSGenerateDestructionActor.h"

ASSGenerateDestructionActor::ASSGenerateDestructionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExecType = ESSGenerateDestructionType::Tick;
    this->ExplosionRadius = 100.00f;
    this->DestructionFieldScale = 1.00f;
    this->EnableDebugDraw = false;
}


