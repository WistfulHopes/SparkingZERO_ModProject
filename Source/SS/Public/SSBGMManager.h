#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECharacterBattleState.h"
#include "KoratActorIdentityInterface.h"
#include "OnPlaySparkingBGMDelegate.h"
#include "SSBGMManager.generated.h"

class ASSBattleLevelScriptActor;
class ASSCharacter;

UCLASS(Blueprintable)
class SS_API ASSBGMManager : public AActor, public IKoratActorIdentityInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBattleLevelScriptActor* BattleLevelScriptActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveCharacterUniqueID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlaySparkingBGM OnPlaySparkingBGM;
    
    ASSBGMManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnCharacterBattleStateChanged2P(const ECharacterBattleState InOldState, const ECharacterBattleState InNewState);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterBattleStateChanged1P(const ECharacterBattleState InOldState, const ECharacterBattleState InNewState);
    
private:
    UFUNCTION(BlueprintCallable)
    void AddCharacter(const int32 InPlayerNumber, ASSCharacter* InCharacter);
    

    // Fix for true pure virtual functions not being implemented
};

