#pragma once
#include "CoreMinimal.h"
#include "SSBattleSetupLevelScriptActorBase.h"
#include "SSBattleSetupLevelScriptActor.generated.h"

class ASSCharacter;

UCLASS(Blueprintable)
class ASSBattleSetupLevelScriptActor : public ASSBattleSetupLevelScriptActorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, ASSCharacter*> BattleCharacters;
    
public:
    ASSBattleSetupLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

