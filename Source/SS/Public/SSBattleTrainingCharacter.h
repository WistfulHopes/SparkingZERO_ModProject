#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSBattleTrainingCharacter.generated.h"

class ASSLevelSequenceActor;

UCLASS(Blueprintable)
class ASSBattleTrainingCharacter : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* CharaSequencer;
    
public:
    ASSBattleTrainingCharacter(const FObjectInitializer& ObjectInitializer);

};

