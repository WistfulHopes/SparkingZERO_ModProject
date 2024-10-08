#pragma once
#include "CoreMinimal.h"
#include "KoratPostProcessSubManager.h"
#include "KoratPostProcessAgentVolumeManager.generated.h"

class UKoratPostProcessAgentVolumeManagerActorData;

UCLASS(Blueprintable)
class SS_API UKoratPostProcessAgentVolumeManager : public UKoratPostProcessSubManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UKoratPostProcessAgentVolumeManagerActorData*> ActorList_Resident;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UKoratPostProcessAgentVolumeManagerActorData*> ActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UKoratPostProcessAgentVolumeManagerActorData*> DynamicActorList;
    
public:
    UKoratPostProcessAgentVolumeManager();

};

