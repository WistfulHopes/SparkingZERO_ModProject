#pragma once
#include "CoreMinimal.h"
#include "SSTravelSystemSceneTransitionBas.h"
#include "SSTravelSystemSceneTransSeqMDWrk.generated.h"

class ASSLevelSequenceActor;
class ULevelStreamingDynamic;

UCLASS(Blueprintable)
class ASSTravelSystemSceneTransSeqMDWrk : public ASSTravelSystemSceneTransitionBas {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* AssetContainerLevelStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* LightingLevelStream;
    
public:
    ASSTravelSystemSceneTransSeqMDWrk(const FObjectInitializer& ObjectInitializer);

};

