#include "AtomSound.h"
#include "AtomComponent.h"

AAtomSound::AAtomSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAtomComponent>(TEXT("AtomComponent0"));
    this->AtomComponent = (UAtomComponent*)RootComponent;
}


