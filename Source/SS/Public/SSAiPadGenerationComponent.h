#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleKey.h"
#include "ESSAiPadGenerationProcess.h"
#include "OnInputCommandDelegate.h"
#include "SSAiUtilityComponent.h"
#include "SSAiPadGenerationComponent.generated.h"

class ASSCharacter;
class UBTNode;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSAiPadGenerationComponent : public USSAiUtilityComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputCommand OnInputCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputCommand OnFinishCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawPath: 1;
    
    USSAiPadGenerationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetProcess(const ESSAiPadGenerationProcess InProcess);
    
    UFUNCTION(BlueprintCallable)
    void SetProbabilityLog(const int32 InNumerator, const int32 InDenominator);
    
    UFUNCTION(BlueprintCallable)
    void ResetCoolDown();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnResetThinking();
    
    UFUNCTION(BlueprintCallable)
    void OnInitializeAi();
    
    UFUNCTION(BlueprintCallable)
    void OnFinalizeAi();
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(const float InDamage);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeCharacter(int32 InPlayerNumber, ASSCharacter* InNewCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveAction() const;
    
    UFUNCTION(BlueprintCallable)
    bool InputCommand(const FName InCommandId, const int32 InIndex, const FName InLog, const bool InForced, const bool InOverwriteProtected, const UBTNode* InMyNode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeOutCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSAiPadGenerationProcess GetProcess() const;
    
    UFUNCTION(BlueprintCallable)
    void GetPressedPadAll(TArray<EKoratBattleKey>& OutBattleKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNowOrder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActiveActionName() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishCommand();
    
    UFUNCTION(BlueprintCallable)
    bool DoesCommandExist(const FName InCommandId);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCommandIndex(const int32 InIndex);
    
};

