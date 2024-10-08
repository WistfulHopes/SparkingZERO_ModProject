#include "KoratFreeTimelineSpawn.h"
#include "Components/SceneComponent.h"
#include "KoratDefaultIdData.h"

AKoratFreeTimelineSpawn::AKoratFreeTimelineSpawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootCompo"));
    this->TimeLineType = EKoratFreeTimelineType::None;
    this->TimelineAtbType = EKoratFreeTimelineAtbType::None;
    this->TimelinePlayType = EKoratFreeTimelinePlayType::None;
    this->ExecuteActor = NULL;
    this->bRebind = true;
    this->bOverrideTransformAtSocket = false;
    this->SocketName = TEXT("socket_NULL_Offset");
    this->SpawnRotateRule = EKoratAttachRotRule::ChrFront;
    this->bFollowTransform = false;
    this->bUseMyTransform = false;
    this->bEnableLocation = true;
    this->bEnableRotation = true;
    this->bEnableScale = true;
    this->bEnablePlayOT = false;
    this->IdDataInstance = CreateDefaultSubobject<UKoratDefaultIdData>(TEXT("IdData"));
    this->PreTimelinePlayType = EKoratFreeTimelinePlayType::None;
}

void AKoratFreeTimelineSpawn::SetExecuteActor(AActor* InActor) {
}


