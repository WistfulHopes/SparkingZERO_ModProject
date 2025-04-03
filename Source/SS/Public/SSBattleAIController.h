#pragma once
#include "CoreMinimal.h"
#include "OnVoidAiDelegate.h"
#include "SSAIController.h"
#include "SSBattleController.h"
#include "SSBattleAIController.generated.h"

class ASSCZSearchEffectRenderer;
class UBehaviorTreeComponent;
class USSAiBTDecoratorUtilityComponent;
class USSAiLearningComponent;
class USSAiPadGenerationComponent;
class USSAiPerceptionComponent;
class USSAiPersonalityComponent;
class USSBlastImpactUi;
class USSCrashImpactBoostUi;
class USSCrashImpactSetUi;
class USSPowerGaugeSet;
class USSRandom;
class USSSpeedImpactRapidUi;
class USSSpeedImpactTimingUi;

UCLASS(Blueprintable)
class ASSBattleAIController : public ASSAIController, public ISSBattleController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSRandom* Random;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoidAi OnInitializeAi;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoidAi OnFinalizeAi;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugRequestCharacterChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSPowerGaugeSet* PowerGaugeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSpeedImpactRapidUi* SpeedImpactRapidUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSpeedImpactRapidUi* SpeedImpactRapidUi1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSpeedImpactRapidUi* SpeedImpactRapidUi2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSpeedImpactTimingUi* SpeedImpactTimingUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSCrashImpactSetUi* CrashImpactUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSCrashImpactBoostUi* CrashImpactBoostUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSBlastImpactUi* BlastImpactUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCZSearchEffectRenderer* ZSearchEffectRenderer;
    
public:
    ASSBattleAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBrainComponentDependency();
    
    UFUNCTION(BlueprintCallable)
    void ResetLog();
    
    UFUNCTION(BlueprintCallable)
    void OutputLog();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnResetThinking();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAiCommand(const TArray<FString>& InDebugCommand);
    
    UFUNCTION(BlueprintCallable)
    bool IsAfterModelSession();
    
    UFUNCTION(BlueprintCallable)
    bool IsAcceptingCrashImpactInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSAiPerceptionComponent* GetSSPerceptionComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSRandom* GetRandom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlaySide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSAiPersonalityComponent* GetPersonalityComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSAiPadGenerationComponent* GetPadGenerationComponent();
    
    UFUNCTION(BlueprintCallable)
    float GetMoveUpDownAxisValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLogCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSAiLearningComponent* GetLearningComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSAiBTDecoratorUtilityComponent* GetDecoratorUtilityComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBehaviorTreeComponent* GetBehaviorTreeComponent();
    
    UFUNCTION(BlueprintCallable)
    bool CanAiRun();
    
    UFUNCTION(BlueprintCallable)
    void AddLog(const FString& InLog);
    

    // Fix for true pure virtual functions not being implemented
};

