#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratDestructionDamageResult.h"
#include "KoratDestructionFieldParameter.h"
#include "KoratDestructionSwitchOptions.h"
#include "KoratDestructionSwitchController.generated.h"

class AStaticMeshActor;
class UKoratDestructionTimerComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AKoratDestructionSwitchController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratDestructionTimerComponent* SwitchTimerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratDestructionTimerComponent* DisapperTimerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> ChangedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDestructionSwitchOptions SwitchOptions;
    
public:
    AKoratDestructionSwitchController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveOnEndChange(const TArray<AActor*>& Actors, const FKoratDestructionFieldParameter& DamageParams);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveOnDamage(const FKoratDestructionFieldParameter& DamageParams);
    
    UFUNCTION(BlueprintCallable)
    void OnSwitchTimerEventCallback(int32 DelayIndex, const FKoratDestructionFieldParameter& DestructionFieldParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FKoratDestructionDamageResult OnPreDamage(const FKoratDestructionFieldParameter& DamageParams);
    
    UFUNCTION(BlueprintCallable)
    void OnDisapperTimerEventCallback(int32 DelayIndex, const FKoratDestructionFieldParameter& DestructionFieldParameter);
    
    UFUNCTION(BlueprintCallable)
    FKoratDestructionDamageResult OnDamageEventCallback(AActor* Actor, FKoratDestructionFieldParameter DamageParams);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetChangedActors();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeStart(float Delay, const FKoratDestructionFieldParameter& DestructionFieldParameter);
    
};

