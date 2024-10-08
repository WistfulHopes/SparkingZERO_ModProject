#pragma once
#include "CoreMinimal.h"
#include "Field/FieldSystemTypes.h"
#include "UObject/NoExportTypes.h"
#include "GeometryCollection/GeometryCollectionActor.h"
#include "EKoratDestructionObjectType.h"
#include "KoratDestructionDamageResult.h"
#include "KoratDestructionFieldParameter.h"
#include "KoratGeometryCollectionActor.generated.h"

class AActor;
class UKoratDestructionDamageComponent;
class UKoratDestructionFadeComponent;
class UKoratDestructionTimerComponent;

UCLASS(Blueprintable)
class SS_API AKoratGeometryCollectionActor : public AGeometryCollectionActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDestructionObjectType DestructionObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratDestructionTimerComponent* TimerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratDestructionFadeComponent* FadeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyDelay;
    
public:
    AKoratGeometryCollectionActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDynamicStateWithRadius(FVector Location, float Radius);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveOnDamage(const FKoratDestructionFieldParameter& FieldParams);
    
    UFUNCTION(BlueprintCallable)
    void OnTimerEventCallback(int32 DelayIndex, const FKoratDestructionFieldParameter& DestructionFieldParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FKoratDestructionDamageResult OnPreDamage(const FKoratDestructionFieldParameter& FieldParams);
    
    UFUNCTION(BlueprintCallable)
    void OnFadeEndEventCallback();
    
    UFUNCTION(BlueprintCallable)
    FKoratDestructionDamageResult OnDamageEventCallback(AActor* Actor, FKoratDestructionFieldParameter FieldParams);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlapEventCallback(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EFieldPhysicsType GetDisableFieldType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UKoratDestructionDamageComponent* GetDamageComponent() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void FadeStart(float Delay);
    
    UFUNCTION(BlueprintCallable)
    void DisableStart(float Delay);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisableCollection();
    
    UFUNCTION(BlueprintCallable)
    void CreateDynamicMaterials();
    
public:
    UFUNCTION(BlueprintCallable)
    void BreakStart(float Delay);
    
};

