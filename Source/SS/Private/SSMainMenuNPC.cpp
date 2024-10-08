#include "SSMainMenuNPC.h"

FSSMainMenuNPC::FSSMainMenuNPC() {
    this->AnimDeltaTime = 0.00f;
    this->WaitAnimIndex = 0;
    this->MenuCharacter = NULL;
    this->AnimSequenceActor = NULL;
    this->bEntryActionPlayed = false;
    this->bForceOrigin = false;
}

