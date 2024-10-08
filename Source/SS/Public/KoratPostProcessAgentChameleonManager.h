#pragma once
#include "CoreMinimal.h"
#include "KoratPostProcessSubManager.h"
#include "KoratPostProcessAgentChameleonManager.generated.h"

class UKoratPostProcessAgentChameleonManagerActorData;

UCLASS(Blueprintable)
class SS_API UKoratPostProcessAgentChameleonManager : public UKoratPostProcessSubManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UKoratPostProcessAgentChameleonManagerActorData*> ActorList_Resident;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UKoratPostProcessAgentChameleonManagerActorData*> ActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UKoratPostProcessAgentChameleonManagerActorData*> DynamicActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UKoratPostProcessAgentChameleonManagerActorData*> CharacterActorList;
    
public:
    UKoratPostProcessAgentChameleonManager();

};

