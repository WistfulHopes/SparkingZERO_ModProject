#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSTutorialBattleScriptDirector.generated.h"

class ASSCharacter;

UCLASS(Blueprintable)
class ASSTutorialBattleScriptDirector : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* TargetCharacter;
    
public:
    ASSTutorialBattleScriptDirector(const FObjectInitializer& ObjectInitializer);

};

