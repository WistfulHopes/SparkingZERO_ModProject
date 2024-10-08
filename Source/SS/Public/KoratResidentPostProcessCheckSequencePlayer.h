#pragma once
#include "CoreMinimal.h"
#include "LevelSequencePlayer.h"
#include "KoratResidentPostProcessCheckSequencePlayer.generated.h"

UCLASS(Blueprintable)
class UKoratResidentPostProcessCheckSequencePlayer : public ULevelSequencePlayer {
    GENERATED_BODY()
public:
    UKoratResidentPostProcessCheckSequencePlayer(const FObjectInitializer& ObjectInitializer);

};

