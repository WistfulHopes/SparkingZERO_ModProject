#pragma once
#include "CoreMinimal.h"
#include "SSTravelSystemSceneTransitionBas.h"
#include "SSTravelSystemSceneTransSeqDEWrk.generated.h"

class ASSLevelSequenceActor;
class ULevelStreamingDynamic;

UCLASS(Blueprintable)
class ASSTravelSystemSceneTransSeqDEWrk : public ASSTravelSystemSceneTransitionBas {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* LightingLevelStream;
    
public:
    ASSTravelSystemSceneTransSeqDEWrk(const FObjectInitializer& ObjectInitializer);

};

