#include "WindSimFieldMotor.h"
#include "WindSimFieldMotorComponent.h"

AWindSimFieldMotor::AWindSimFieldMotor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UWindSimFieldMotorComponent>(TEXT("WindSimFieldMotorComponent0"));
    this->MotorComponent = (UWindSimFieldMotorComponent*)RootComponent;
}


