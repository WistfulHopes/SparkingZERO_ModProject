#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSMpcPriorityManager.generated.h"

class ASSMpcPriorityActorBase;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class ASSMpcPriorityManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASSMpcPriorityActorBase>> MonitoringActors;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlackoutLerpSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* BlackoutMpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BlackoutParameterName;
    
public:
    ASSMpcPriorityManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Update(const float InDeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetFalseUpdateFlagMonitoringActors();
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetTopPriorityInfo(TArray<ASSMpcPriorityActorBase*>& OutActors);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugCommandFlag() const;
    
    UFUNCTION(BlueprintCallable)
    void CleanMonitoringActors();
    
public:
    UFUNCTION(BlueprintCallable)
    bool CheckExistAndAddActor(UPARAM(Ref) ASSMpcPriorityActorBase*& InActor);
    
};

