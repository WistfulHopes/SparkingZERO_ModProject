#pragma once
#include "CoreMinimal.h"
#include "KoratFreeTimelinePlayerBase.h"
#include "KoratFreeTimelineSequencePlayer.generated.h"

class ASSLevelSequenceActor;

UCLASS(Blueprintable, EditInlineNew)
class UKoratFreeTimelineSequencePlayer : public UKoratFreeTimelinePlayerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* LevelSequenceActor;
    
    UKoratFreeTimelineSequencePlayer();

};

