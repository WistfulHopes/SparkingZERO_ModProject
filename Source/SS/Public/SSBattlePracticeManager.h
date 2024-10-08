#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratBattlePracticsMenuDataList.h"
#include "OnFinishedDelegate.h"
#include "OnInputFailureDelegate.h"
#include "OnInputSuccessDelegate.h"
#include "OnModelStartDelegate.h"
#include "SSBattlePracticeManager.generated.h"

class AController;
class ASSCharacter;

UCLASS(Blueprintable)
class ASSBattlePracticeManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputSuccess OnInputSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputFailure OnInputFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinished OnModelFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinished OnInputFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinished OnResetFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModelStart OnModelStart;
    
    ASSBattlePracticeManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopTutorial();
    
    UFUNCTION(BlueprintCallable)
    void StopPlayerOpration();
    
    UFUNCTION(BlueprintCallable)
    void StartTutorial();
    
    UFUNCTION(BlueprintCallable)
    void StartReset(const FName InMenuName, const bool InPositionOnly);
    
    UFUNCTION(BlueprintCallable)
    void StartPlayerOpration(const FName InMenuName);
    
    UFUNCTION(BlueprintCallable)
    void StartModelAI(const FName InMenuName);
    
    UFUNCTION(BlueprintCallable)
    bool SetupTutorialMenu(const FName InMenuName, const FKoratBattlePracticsMenuDataList& InMenuDataList);
    
    UFUNCTION(BlueprintCallable)
    void SetupTutorial(const FName InMenuName);
    
    UFUNCTION(BlueprintCallable)
    bool SetupPracticeMenu(const FName InMenuName, const FKoratBattlePracticsMenuDataList& InMenuDataList);
    
    UFUNCTION(BlueprintCallable)
    void SetupPlayerOpration(const FName InMenuName);
    
    UFUNCTION(BlueprintCallable)
    void SetupModelAI(const FName InMenuName);
    
    UFUNCTION(BlueprintCallable)
    void ResetSuccessCommandIndex(const FName InMenuName);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTrainingPositionReset();
    
    UFUNCTION(BlueprintCallable)
    void OnPureBattleStartNoClear();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDebugCommand(const TArray<FString>& InDebugCommand);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCreateController(AController* InCreateController);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterChange(const int32 InPlaySide);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeToNewCharacterPost(ASSCharacter* InBefore, ASSCharacter* InAfter, const bool bInNewCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnBattleSetup();
    
    UFUNCTION(BlueprintCallable)
    void OnBattleFinishNoClear();
    
    UFUNCTION(BlueprintCallable)
    void OnAttackHit2P(const float InDamage, const bool InGuardBreak);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackHit1P(const float InDamage, const bool InGuardBreak);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsResetTiming();
    
    UFUNCTION(BlueprintCallable)
    bool IsModelAI();
    
    UFUNCTION(BlueprintCallable)
    bool IsBlackOutReset(const FName InMenuName);
    
};

