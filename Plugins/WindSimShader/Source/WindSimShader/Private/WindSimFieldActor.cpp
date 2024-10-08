#include "WindSimFieldActor.h"
#include "WindSimFieldComponent.h"

AWindSimFieldActor::AWindSimFieldActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UWindSimFieldComponent>(TEXT("WindSimFieldComponent0"));
    this->FieldComponent = (UWindSimFieldComponent*)RootComponent;
}


