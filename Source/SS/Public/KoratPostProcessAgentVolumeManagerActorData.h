#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/Scene.h"
#include "KoratPostProcessAgentAgentVolumeList.h"
#include "KoratPostProcessViewActorItem.h"
#include "KoratPostProcessAgentVolumeManagerActorData.generated.h"

class APostProcessVolume;

UCLASS(Blueprintable)
class UKoratPostProcessAgentVolumeManagerActorData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APostProcessVolume> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APostProcessVolume> CreatedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratPostProcessAgentAgentVolumeList AgentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPostProcessSettings Cache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPostProcessSettings Fade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratPostProcessViewActorItem ViewActorItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> EditorViewTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ClossFadeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ClossFadeTimerMax;
    
public:
    UKoratPostProcessAgentVolumeManagerActorData();

};

