#include "KoratWeatherManagementActor.h"
#include "Components/SceneComponent.h"

AKoratWeatherManagementActor::AKoratWeatherManagementActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootWeatherManagement"));
    this->LevelSequenceActor = NULL;
    this->ModeState = EKoratWeatherModeState::Normal;
    this->bPreviewModeNoSequencerPlay = false;
    this->bUseCelestialSphere = false;
    this->PlayBackFrame = 0;
    this->bForceControl = false;
    this->PlaySectionForForce = EKoratWeatherSection::Level1;
    this->SectionSeekRateForForce = 0.00f;
    this->MyRootComponent = (USceneComponent*)RootComponent;
}

void AKoratWeatherManagementActor::SetUseCelestialSphereName(const FString& InName) {
}

FString AKoratWeatherManagementActor::GetUseCelestialSphereName() const {
    return TEXT("");
}

UStaticMeshComponent* AKoratWeatherManagementActor::GetLocatorMeshComponent() {
    return NULL;
}


