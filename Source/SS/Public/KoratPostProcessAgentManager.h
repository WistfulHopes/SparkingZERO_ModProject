#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "KoratPostProcessViewActorItem.h"
#include "KoratPostProcessViewAgentItem.h"
#include "KoratPostProcessAgentManager.generated.h"

class AKoratPostProcessAgentManagerTickingActor;
class UCurveFloat;
class UKoratPostProcessAgentChameleonManager;
class UKoratPostProcessAgentVolumeManager;

UCLASS(Blueprintable)
class SS_API UKoratPostProcessAgentManager : public UEngineSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratPostProcessAgentChameleonManager* ChameleonManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratPostProcessAgentVolumeManager* VolumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AKoratPostProcessAgentManagerTickingActor> TickingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* clossFadeCurve;
    
public:
    UKoratPostProcessAgentManager();

    UFUNCTION(BlueprintCallable)
    bool IsAgentInfo(FName agentName, const FKoratPostProcessViewAgentItem& ItemAgent);
    
    UFUNCTION(BlueprintCallable)
    bool IsActorInfo(FName ActorName, const FKoratPostProcessViewActorItem& ItemActor);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetExistAgentList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetExistActorList();
    
    UFUNCTION(BlueprintCallable)
    FString GetAgentInfoString(FName agentName);
    
    UFUNCTION(BlueprintCallable)
    bool GetAgentInfo(FName agentName, FKoratPostProcessViewAgentItem& ItemAgent);
    
    UFUNCTION(BlueprintCallable)
    FString GetActorInfoString(FName agentName);
    
    UFUNCTION(BlueprintCallable)
    bool GetActorInfo(FName ActorName, FKoratPostProcessViewActorItem& ItemActor);
    
};

