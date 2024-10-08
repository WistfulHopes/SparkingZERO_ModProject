#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ECharacterBattleState.h"
#include "EKoratWeatherRequestPhase.h"
#include "KoratWeatherControlInterface.h"
#include "KoratWeatherControllerComp.generated.h"

class ASSBattleLevelScriptActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratWeatherControllerComp : public UActorComponent, public IKoratWeatherControlInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DefaultSequenceAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBattleLevelScriptActor* BattleLevelScriptActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveCharacterUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratWeatherRequestPhase NextPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideSaveChargeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    UKoratWeatherControllerComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnSpDown2P(float InDownValue);
    
    UFUNCTION(BlueprintCallable)
    void OnSpDown1P(float InDownValue);
    
    UFUNCTION(BlueprintCallable)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable)
    void OnEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterBattleStateChanged2P(const ECharacterBattleState InOldState, const ECharacterBattleState InNewState);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterBattleStateChanged1P(const ECharacterBattleState InOldState, const ECharacterBattleState InNewState);
    

    // Fix for true pure virtual functions not being implemented
};

