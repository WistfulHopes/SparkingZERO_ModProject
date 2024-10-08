#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratEffectInteractNiagaraTypeDataList.h"
#include "KoratNiagaraSkeletalMeshActor.generated.h"

class UNiagaraComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AKoratNiagaraSkeletalMeshActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachRootComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyOnSystemFinish: 1;
    
public:
    AKoratNiagaraSkeletalMeshActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNoneSettingValue(const FKoratEffectInteractNiagaraTypeDataList InNone);
    
    UFUNCTION(BlueprintCallable)
    void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNiagaraComponent* GetNiagaraComponent() const;
    
};

