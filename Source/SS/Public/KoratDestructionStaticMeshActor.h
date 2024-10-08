#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "Engine/StaticMeshActor.h"
#include "EKoratDestructionAttackParameterType.h"
#include "EKoratDestructionObjectType.h"
#include "EKoratStaticMeshDestructedExecType.h"
#include "KoratDestructionDamageResult.h"
#include "KoratDestructionFieldParameter.h"
#include "KoratDestructionLandedParameter.h"
#include "KoratDestructionLowSpecOption.h"
#include "KoratDestructionSwitchOptions.h"
#include "KoratDestructionStaticMeshActor.generated.h"

class AActor;
class UKoratDestructionDamageComponent;
class UKoratDestructionFadeComponent;
class UKoratDestructionTimerComponent;

UCLASS(Blueprintable)
class SS_API AKoratDestructionStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratDestructionTimerComponent* SwitchTimerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratDestructionTimerComponent* DestructionEffectTimerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratDestructionTimerComponent* DisapperTimerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratDestructionFadeComponent* FadeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    EKoratDestructionObjectType DestructionObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> ChangedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> ChainedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DependentActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
public:
    AKoratDestructionStaticMeshActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetObjectType(EKoratDestructionObjectType SetType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveOnLanded(const FKoratDestructionLandedParameter& LandedParams);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveOnDamage(const FKoratDestructionFieldParameter& FieldParams, const bool bChaindDamage);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayDestructionEffectStart(float Delay, const FKoratDestructionFieldParameter& DestructionFieldParameter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSwitchTimerEventCallback(int32 DelayIndex, const FKoratDestructionFieldParameter& DestructionFieldParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FKoratDestructionDamageResult OnPreDamage(const FKoratDestructionFieldParameter& FieldParams);
    
    UFUNCTION(BlueprintCallable)
    void OnLandedEventCallback(AActor* Actor, FKoratDestructionLandedParameter LandedParams);
    
    UFUNCTION(BlueprintCallable)
    void OnFadeEndEventCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnDestructionEffectPlayTimerEventCallback(int32 DelayIndex, const FKoratDestructionFieldParameter& DestructionFieldParameter);
    
    UFUNCTION(BlueprintCallable)
    void OnDependentBrokenEventCallback(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    FKoratDestructionDamageResult OnDamageEventCallback(AActor* Actor, FKoratDestructionFieldParameter FieldParams);
    
    UFUNCTION(BlueprintCallable)
    void OnActorHitEventCallback(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlapEventCallback(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratDestructionObjectType GetObjectType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FKoratDestructionLowSpecOption GetLowSpecOption() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UKoratDestructionDamageComponent* GetDamageComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void FadeStart(const float Time);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeStart(const FKoratDestructionSwitchOptions& Options, float Delay, const FKoratDestructionFieldParameter& DestructionFieldParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanDestructObject(EKoratDestructionAttackParameterType AttackParameterType) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BeforeReceiveDestructionDamageCallback(const EKoratStaticMeshDestructedExecType ExecType, const FKoratDestructionFieldParameter& SetFieldParameter);
    
};

