#include "KoratEmitter.h"
#include "Components/SceneComponent.h"
#include "KoratDefaultIdData.h"
#include "KoratInteractAtbComponent.h"

AKoratEmitter::AKoratEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USceneComponent>(TEXT("AttachCompo"))) {
    this->bUseTerrainRay = false;
    this->TerrainSocketName = TEXT("NULL");
    this->bSynchronizeWithOwnerActorVisibility = false;
    this->ParticleSystemForFinishedEffect = NULL;
    this->EmitterForFinishedEffect = NULL;
    this->SequenceForFinishedEffect = NULL;
    this->IdDataInstance = CreateDefaultSubobject<UKoratDefaultIdData>(TEXT("IdData"));
    this->UtilityCompo = NULL;
    this->SelectEffectColorComponent = NULL;
    this->ExecuteActor = NULL;
    this->bEnableDitherAlpha = true;
    this->bEnableDitherAlphaAutoCtrl = false;
    this->bCheckedVisibleValueMaterials = false;
    this->DitherComponent = NULL;
    this->VisibleValue = 1.00f;
    this->InteractAtbComponent = CreateDefaultSubobject<UKoratInteractAtbComponent>(TEXT("InteractAtbCompo"));
    this->ParticleLineCheckIgnoreActorClass.AddDefaulted(1);
    this->bEnableShowingCheckByBlastImpact = false;
    this->AttachRootCompo = (USceneComponent*)RootComponent;
    this->TransformAdjustCompo = CreateDefaultSubobject<USceneComponent>(TEXT("TransformAdjustComponent"));
    this->ToonPointLightComponent = NULL;
    this->AfterimageComponent = NULL;
    this->TransformAdjustCompo->SetupAttachment(RootComponent);
}

void AKoratEmitter::UnregisterCustomTimeDilationDelegate() {
}

void AKoratEmitter::SetVisibleValue(const float InValue) {
}

void AKoratEmitter::SetExecuteActor(AActor* InActor) {
}

void AKoratEmitter::RegisterCustomTimeDilationDelegate() {
}

void AKoratEmitter::OnSpawnFinishedEffect() {
}

void AKoratEmitter::OnSetCustomTimeDilation(const float InTimeDilation, const EKoratSetCustomTimeDilationReason InReason) {
}

void AKoratEmitter::EditorParticleBranchRestore_Implementation() {
}


