#include "KoratPostProcessAgent.h"
#include "Components/SceneComponent.h"

AKoratPostProcessAgent::AKoratPostProcessAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Priority = 0;
    this->SerialNo = 0;
    this->ActiveFlag = false;
    this->DynamicActorPriority = 0.00f;
    this->CameraType = EKoratPostProcessCameraType::ALL;
    this->DidSetOperandOnSpawn = false;
    this->IsSequenceInfoSetup = false;
    this->PlaySequenceCharacter = NULL;
    this->ClossFadeSec = 0.00f;
    this->OverrideParameterComponent = NULL;
}


