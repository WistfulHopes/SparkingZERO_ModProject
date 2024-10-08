#pragma once
#include "CoreMinimal.h"
#include "SSTravelSystemSceneTransitionBas.h"
#include "SSTravelSystemSceneTransDEDBWrk.generated.h"

class ASSLevelSequenceActor;

UCLASS(Blueprintable)
class ASSTravelSystemSceneTransDEDBWrk : public ASSTravelSystemSceneTransitionBas {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* LevelSequenceActor;
    
public:
    ASSTravelSystemSceneTransDEDBWrk(const FObjectInitializer& ObjectInitializer);

};

