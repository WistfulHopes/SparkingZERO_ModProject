#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECharacterBattleState.h"
#include "EKoratCharacterActionFinishReason.h"
#include "KoratActionDataList.h"
#include "KoratAuraLevelDataList.h"
#include "KoratBuffFormTypeDataList.h"
#include "KoratCharacterAuraComponent.generated.h"

class ASSLevelSequenceActor;
class UKoratFreeTimelineAuraPlayer;
class USSCharacterDitherComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratCharacterAuraComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratAuraLevelDataList, ASSLevelSequenceActor*> TimelineActorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratAuraLevelDataList VisibleValueCtrlAuraLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrevVisibleValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForceAlwaysAuraStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWaitAlwaysAura;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelineAuraPlayer* AlwaysAuraPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterDitherComponent* DitherComponent;
    
    UKoratCharacterAuraComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopCurrentAura();
    
    UFUNCTION(BlueprintCallable)
    bool StopAlwaysAura();
    
    UFUNCTION(BlueprintCallable)
    void StartSparkingAura();
    
    UFUNCTION(BlueprintCallable)
    void StartAlwaysAura();
    
private:
    UFUNCTION(BlueprintCallable)
    void RestoreRimLightMaterial();
    
    UFUNCTION(BlueprintCallable)
    void OnEndMontageLevelSequence(FKoratActionDataList InAction, EKoratCharacterActionFinishReason InActionFinishReason);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCharacterBattleStateChanged(const ECharacterBattleState InOldState, const ECharacterBattleState InNewState);
    
    UFUNCTION(BlueprintCallable)
    void OnChanedBuffForm(const FKoratBuffFormTypeDataList& InPreForm, const FKoratBuffFormTypeDataList& InNewForm);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBeginMontageLevelSequence(FKoratActionDataList InAction);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndSparkingAura(const bool InEndNow);
    
};

