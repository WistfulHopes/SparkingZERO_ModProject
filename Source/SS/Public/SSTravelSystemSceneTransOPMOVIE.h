#pragma once
#include "CoreMinimal.h"
#include "SSTravelSystemSceneTransitionBas.h"
#include "SSTravelSystemSceneTransOPMOVIE.generated.h"

class ASSLevelSequenceActor;
class ASSTutorialMoviePlayer;
class ULevelStreamingDynamic;

UCLASS(Blueprintable)
class ASSTravelSystemSceneTransOPMOVIE : public ASSTravelSystemSceneTransitionBas {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* AssetContainerLevelStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSTutorialMoviePlayer* TutorialMoviePlayer;
    
public:
    ASSTravelSystemSceneTransOPMOVIE(const FObjectInitializer& ObjectInitializer);

};

