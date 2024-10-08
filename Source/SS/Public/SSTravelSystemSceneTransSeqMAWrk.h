#pragma once
#include "CoreMinimal.h"
#include "SSTravelSystemSceneTransitionBas.h"
#include "SSTravelSystemSceneTransSeqMAWrk.generated.h"

class ASSLevelSequenceActor;
class ULevelStreamingDynamic;

UCLASS(Blueprintable)
class ASSTravelSystemSceneTransSeqMAWrk : public ASSTravelSystemSceneTransitionBas {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* AssetContainerLevelStream;
    
public:
    ASSTravelSystemSceneTransSeqMAWrk(const FObjectInitializer& ObjectInitializer);

};

