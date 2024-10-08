#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratPostProcessAgentManagerTickingActor.generated.h"

class UKoratPostProcessAgentManager;

UCLASS(Blueprintable, MinimalAPI)
class AKoratPostProcessAgentManagerTickingActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UKoratPostProcessAgentManager> AgentManager;
    
public:
    AKoratPostProcessAgentManagerTickingActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAgentManager(UKoratPostProcessAgentManager* InAgentManager);
    
};

