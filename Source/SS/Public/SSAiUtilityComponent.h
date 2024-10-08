#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESSAiFormChangeType.h"
#include "ESSAiReactionSpeedType.h"
#include "KoratAiBlastTypeDataList.h"
#include "SSAiUtilityComponent.generated.h"

class ASSNavSystemManager;
class UBehaviorTree;
class USSAiTypeDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSAiUtilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USSAiUtilityComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsUsableBlast(const FKoratAiBlastTypeDataList InBlastType);
    
    UFUNCTION(BlueprintCallable)
    void GetTargetSectionName(FName& OutSectionName);
    
    UFUNCTION(BlueprintCallable)
    void GetTargetActionName(FName& OutActionName);
    
    UFUNCTION(BlueprintCallable)
    float GetTargetActionElapsedTime();
    
    UFUNCTION(BlueprintCallable)
    float GetReactionSpeed(const ESSAiReactionSpeedType InType);
    
    UFUNCTION(BlueprintCallable)
    ASSNavSystemManager* GetNavSystemManager();
    
    UFUNCTION(BlueprintCallable)
    void GetMyselfSectionName(FName& OutSectionName);
    
    UFUNCTION(BlueprintCallable)
    void GetMyselfActionName(FName& OutActionName);
    
    UFUNCTION(BlueprintCallable)
    float GetMyselfActionElapsedTime();
    
    UFUNCTION(BlueprintCallable)
    float GetMyaselfActionElapsedTime();
    
    UFUNCTION(BlueprintCallable)
    float GetMaxBlastPower();
    
    UFUNCTION(BlueprintCallable)
    ESSAiFormChangeType GetFormChangeType(const bool bInRandom);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToTarget();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCharacterChangeIndex(const bool bInRandom);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBlastIndex(const FKoratAiBlastTypeDataList InBlastType, const bool bInRandom);
    
    UFUNCTION(BlueprintCallable)
    USSAiTypeDataAsset* GetAiTypeDataAsset();
    
    UFUNCTION(BlueprintCallable)
    UBehaviorTree* GetAiSpecificBehaviorTree(const FName InKeyName);
    
};

