#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSAiManager.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class ASSAiManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BaseBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOptimizationEnabled;
    
public:
    ASSAiManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBehaviorTreeAsset(UBehaviorTree* InBehaviorTreeAsset);
    
    UFUNCTION(BlueprintCallable)
    void OptimizeBehaviorTree(const int32 InPlaySide);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPureBattleStartNoClear();
    
};