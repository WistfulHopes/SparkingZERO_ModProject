#include "KoratResidentPostProcessCheckSequenceActor.h"
#include "KoratResidentPostProcessCheckSequencePlayer.h"

AKoratResidentPostProcessCheckSequenceActor::AKoratResidentPostProcessCheckSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UKoratResidentPostProcessCheckSequencePlayer>(TEXT("AnimationPlayer"))) {
}


