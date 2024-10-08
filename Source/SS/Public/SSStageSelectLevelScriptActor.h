#pragma once
#include "CoreMinimal.h"
#include "SSUiLevelScriptActor.h"
#include "SSStageSelectLevelScriptActor.generated.h"

class ASSLevelSequenceActor;

UCLASS(Blueprintable)
class ASSStageSelectLevelScriptActor : public ASSUiLevelScriptActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* CurrentLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* StageChangeLevelSequenceActor;
    
public:
    ASSStageSelectLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

