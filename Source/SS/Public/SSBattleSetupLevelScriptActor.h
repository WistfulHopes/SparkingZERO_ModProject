#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSBattleSetupLevelScriptActorBase.h"
#include "SSBattleSetupLevelScriptActor.generated.h"

class ASSCharacter;

UCLASS(Blueprintable)
class ASSBattleSetupLevelScriptActor : public ASSBattleSetupLevelScriptActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList InitialCharacter1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList InitialCharacter2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestMaxDP;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, ASSCharacter*> BattleCharacters;
    
public:
    ASSBattleSetupLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

