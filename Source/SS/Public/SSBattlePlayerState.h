#pragma once
#include "CoreMinimal.h"
#include "EKoratMapChangeStartTiming.h"
#include "EKoratMapChangeType.h"
#include "KoratActionDataList.h"
#include "KoratCharacterCostumeDataList.h"
#include "KoratCharacterDataChangeCharacterActionDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterItemDataList.h"
#include "KoratMapDataList.h"
#include "OnActivateBattleCharacterDelegate.h"
#include "OnStartImpactDelegate.h"
#include "SSPlayerState.h"
#include "SSSupportingCharacterData.h"
#include "SSBattlePlayerState.generated.h"

class ASSBattlePlayerState;
class ASSCharacter;
class ULevelSequence;

UCLASS(Blueprintable)
class ASSBattlePlayerState : public ASSPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActivateBattleCharacter OnActivateBattleCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartImpact OnStartPowerImpact;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartImpact OnStartCrashImpact;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartImpact OnStartSpeedImpact;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartImpact OnStartBlastImpact;
    
    ASSBattlePlayerState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetForSwitchController(const ASSBattlePlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerWaitForSpeedImpact(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerWaitForPowerImpact(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerWaitForMapChange(ASSCharacter* InCharacter, const EKoratMapChangeType& InMapChangeType, const EKoratMapChangeStartTiming& InStartTiming, const FKoratMapDataList& InMapDataList, const TSoftObjectPtr<ULevelSequence>& InLevelSequence, const TSoftObjectPtr<ULevelSequence>& InOTLevelSequence);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerWaitForEventRequest(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerWaitForCrashImpact(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerWaitForCharacterTaketurns(ASSCharacter* InCharacter, const FKoratCharacterDataList& InChangeCharacter, const FKoratCharacterCostumeDataList& InChangeCostume, const TArray<FKoratCharacterItemDataList>& InEquipItems, int32 InCostumeDamageLv, int32 InCostumeScratchLv);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerWaitForCharacterDamageCostume(ASSCharacter* InCharacter, const FKoratCharacterDataList& InChangeCharacter, const FKoratCharacterCostumeDataList& InChangeCostume, const TArray<FKoratCharacterItemDataList>& InEquipItems, int32 InCostumeDamageLv, int32 InCostumeScratchLv);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerWaitForCharacterChange(ASSCharacter* InCharacter, const FKoratCharacterDataList& InChangeCharacter, const FKoratCharacterCostumeDataList& InChangeCostume, const TArray<FKoratCharacterItemDataList>& InEquipItems, const FKoratCharacterDataChangeCharacterActionDataList& InChangeCharacterActionList, const TArray<FKoratCharacterDataList>& InForbitChangeCharacters, int32 InCostumeDamageLv, int32 InCostumeScratchLv);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerWaitForBodyChange(ASSCharacter* InCharacter, FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerWaitForBlastImpactReflecter(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerWaitForBlastImpactAttacker(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerSupporterUnloadRequest(ASSCharacter* InCharacter, const TArray<FSSSupportingCharacterData>& SupportCharacters);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerSupporterLoadRequest(ASSCharacter* InCharacter, const TArray<FSSSupportingCharacterData>& SupportCharacters);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerStop(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerSpeedImpact(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerSettle();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerResult();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerReadyForFadeInBattleSetup();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerReadyForFadeIn();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerReadyForBattle();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerReadyForAbortByNetworkError();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerReadyForAbortByMatched();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerReadyForAbortByInterruptCommon();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerPowerImpact(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerPossessedCharacter(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerMapChange(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerInitialized();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerDone();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerCrashImpact(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerCharacterTaketurns(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerCharacterDamageCostume(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerCharacterChange(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerBodyChange(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerBlastImpact(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerBattle(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void OutGameRestart();
    
};

