#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratPostProcessAgentAgentChameleonList.h"
#include "KoratPostProcessChameleonCacheParameters.h"
#include "KoratPostProcessViewActorItem.h"
#include "KoratPostProcessAgentChameleonManagerActorData.generated.h"

class ASSChameleon;

UCLASS(Blueprintable)
class UKoratPostProcessAgentChameleonManagerActorData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSChameleon> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSChameleon> CreatedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratPostProcessAgentAgentChameleonList AgentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratPostProcessChameleonCacheParameters Cache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratPostProcessChameleonCacheParameters Fade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratPostProcessViewActorItem ViewActorItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> EditorViewTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ClossFadeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ClossFadeTimerMax;
    
public:
    UKoratPostProcessAgentChameleonManagerActorData();

};

