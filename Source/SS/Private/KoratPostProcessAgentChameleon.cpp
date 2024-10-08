#include "KoratPostProcessAgentChameleon.h"
#include "KoratPostProcessChameleonComponent.h"
#include "KoratPostProcessWorldToScreenComponent.h"

AKoratPostProcessAgentChameleon::AKoratPostProcessAgentChameleon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BindType = EKoratPostProcessChameleonBindType::POST_COMMON;
    this->KoratPostProcess = CreateDefaultSubobject<UKoratPostProcessChameleonComponent>(TEXT("KoratPostProcess"));
    this->WorldToScreenRadialBlur = CreateDefaultSubobject<UKoratPostProcessWorldToScreenComponent>(TEXT("WorldToScreenRadialBlur"));
    this->WorldToScreenSpeedLines = CreateDefaultSubobject<UKoratPostProcessWorldToScreenComponent>(TEXT("WorldToScreenSpeedLines"));
    this->WorldToScreenBWSpeedLines = CreateDefaultSubobject<UKoratPostProcessWorldToScreenComponent>(TEXT("WorldToScreenBWSpeedLines"));
    this->WorldToScreenFVS = CreateDefaultSubobject<UKoratPostProcessWorldToScreenComponent>(TEXT("WorldToScreenFVS"));
    this->WorldToScreenDrmarize = CreateDefaultSubobject<UKoratPostProcessWorldToScreenComponent>(TEXT("WorldToScreenDrmarize"));
    this->Manager = NULL;
    this->ManagerActorData = NULL;
    this->KoratPostProcess->SetupAttachment(RootComponent);
}


