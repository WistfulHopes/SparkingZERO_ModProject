#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EKoratActionAttackType.h"
#include "EKoratBattleKey.h"
#include "EKoratBranch.h"
#include "EKoratInequalitySignType.h"
#include "EKoratPursuitType.h"
#include "ESSFlowConditionsJudgmentType.h"
#include "KoratActionDataList.h"
#include "SSBattleAssistParameter.h"
#include "SSCharacterBattleAssistStateStruct.h"
#include "SSCharacterBattleAssistComponent.generated.h"

class APlayerController;
class ASSCharacter;
class UCanvas;
class USSBattleAssistDataAsset;
class USSCharacterBulletManager;
class USSRandom;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSCharacterBattleAssistComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSRandom* Random;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleAssistParameter AssistParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterBattleAssistStateStruct StateStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBattleAssistDataAsset* BattleAssistDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPursuitRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoGuardRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoGuardCombativesRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoGuardBulletsRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoGuardJustRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoGuardFollowTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoGuardFollowTimerMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DebugTextLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugTextWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugTextNextHeight;
    
public:
    USSCharacterBattleAssistComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void NotificationStopDragonDashAssist();
    
    UFUNCTION(BlueprintCallable)
    void NotificationStartDragonDashAssist();
    
    UFUNCTION(BlueprintCallable)
    void NotificationStartAttackDragonDashAssist();
    
    UFUNCTION(BlueprintCallable)
    void NotificationRequestPursuit();
    
    UFUNCTION(BlueprintCallable)
    void NotificationRequestComboAssistZeroClear();
    
    UFUNCTION(BlueprintCallable)
    void NotificationRequestComboAssistReset();
    
    UFUNCTION(BlueprintCallable)
    void NotificationRequestComboAssist();
    
    UFUNCTION(BlueprintCallable)
    void NotificationExecPursuit(const EKoratPursuitType& InPursuitType);
    
    UFUNCTION(BlueprintCallable)
    void NotificationEndAttackDragonDashAssist();
    
    UFUNCTION(BlueprintCallable)
    void NotificationDerivativeComboAssist();
    
    UFUNCTION(BlueprintCallable)
    void NotificationClearPursuitDragonHoming();
    
    UFUNCTION(BlueprintCallable)
    void NotificationChangeCurrentAction(const FKoratActionDataList& InAction);
    
    UFUNCTION(BlueprintCallable)
    void IsRushCancelRequest(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsReversalUkemiAssist(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsReversalRevengeCounterAssist(EKoratBranch& OutResult, float InTime, EKoratInequalitySignType InInequalitySign);
    
    UFUNCTION(BlueprintCallable)
    void IsPursuitRequest(const EKoratPursuitType& InPursuitType, EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsPursuitDragonHomingRequest(EKoratBranch& OutResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPursuitAssistMode() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPursuitAssist();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPlayablePursuit(const EKoratPursuitType& InPursuitType);
    
public:
    UFUNCTION(BlueprintCallable)
    void IsDragonDashStopRequest(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsDragonDashStartRequest(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsDragonDashPursuitRequest(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsDragonDashPursuitEndRequest(EKoratBranch& OutResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDragonDashMode() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDragonDashAttackPursuit() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDragonDashAttackMode() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDragonDashAttackAssist();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDragonDashAssist();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComboAssistMode() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void IsComboAssistDerivativeRequest(int32 InRushCount, EKoratBattleKey InRequestBattleKey, EKoratBattleKey& OutBattleKey, EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsComboAssistBurstFinishRequest(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsComboAssist(const FKoratActionDataList& InCurrentAction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void IsClassicControlMode(ESSFlowConditionsJudgmentType& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoUkemiMode() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAutoUkemi();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoRevengeCounterMode() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAutoRevengeCounter();
    
    UFUNCTION(BlueprintCallable)
    void IsAutoGuardRequest(EKoratBranch& OutResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoGuardMode() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void IsAutoGuardJustRequest(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAutoGuardCombatives();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAutoGuardBullets();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAutoGuard();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPursuitDragonHomingSafeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPursuitAssistUPHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPursuitAssistDragonSmashDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPursuitAssistDownHeight() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void GetPursuitAssistDirection(const FKoratActionDataList& InActonUP, const FKoratActionDataList& InActonDown, FKoratActionDataList& OutAttack, EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    ASSCharacter* GetPlayerCharacter();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDragonDashAssistTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetComboAssistResetCountMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCombativesGuardRecoveryTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCombativesGuardDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBulletsGuardDistance() const;
    
    UFUNCTION(BlueprintCallable)
    USSCharacterBulletManager* GetBulletManager();
    
    UFUNCTION(BlueprintCallable)
    bool GetAttackTypeFromActionData(EKoratActionAttackType& OutAttackType, const FKoratActionDataList& InAction);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugDraw(UCanvas* InCanvas, APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void ComboAssistBattleKeyTimeSincePushInAction(ESSFlowConditionsJudgmentType& OutResult, float InTime, EKoratInequalitySignType InInequalitySign);
    
    UFUNCTION(BlueprintCallable)
    void ComboAssistBattleKeyPush(ESSFlowConditionsJudgmentType& OutResult);
    
};

