#pragma once
#include "CoreMinimal.h"
#include "EMainMenuSceneArea.h"
#include "SSUiLevelScriptActor.h"
#include "SSMainMenuLevelScriptActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASSMainMenuLevelScriptActor : public ASSUiLevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShopCustomizeTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CameraAttachRootActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugFrameCounter;
    
public:
    ASSMainMenuLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TestStopDirectingSequence();
    
    UFUNCTION(BlueprintCallable)
    void TestPlayDirectingSequence(EMainMenuSceneArea InArea, int32 InSubSceneIndex);
    
    UFUNCTION(BlueprintCallable)
    void TestLevelTransition(EMainMenuSceneArea InArea, int32 InSubSceneIndex);
    
    UFUNCTION(BlueprintCallable)
    void TestExitLoopDirectingSequence();
    
    UFUNCTION(BlueprintCallable)
    void StartQuickMatch();
    
    UFUNCTION(BlueprintCallable)
    void StartOfflineBattle();
    
    UFUNCTION(BlueprintCallable)
    void ShowArea(const FString& InAreaId);
    
    UFUNCTION(BlueprintCallable)
    void DebugPlayNPCWaitAction();
    
    UFUNCTION(BlueprintCallable)
    void ChangeFocusSubScene(EMainMenuSceneArea InArea, int32 InSubSceneIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeArea(EMainMenuSceneArea InNextArea);
    
};

