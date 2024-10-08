#include "SSDragonAdventureIFEventIconActor.h"

ASSDragonAdventureIFEventIconActor::ASSDragonAdventureIFEventIconActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IslandIndex = 0;
    this->MIOut = NULL;
    this->MIIn = NULL;
    this->MIOutActive = NULL;
    this->MIInActive = NULL;
    this->IconInfoActor = NULL;
}


