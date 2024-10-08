#include "KoratDestructionSwitchOptions.h"

FKoratDestructionSwitchOptions::FKoratDestructionSwitchOptions() {
    this->bSwitchActorHiddenInGame = false;
    this->bEnableSimulatePhysics = false;
    this->bEnableDisapper = false;
    this->DisapperDelayTime = 0.00f;
    this->bPropagateDamage = false;
    this->bSwitchDestroyedCollisionProfile = false;
}

