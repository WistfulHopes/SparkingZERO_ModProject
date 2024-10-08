#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "EKoratPostProcessVolumeBindType.h"
#include "KoratPostProcessAgent.h"
#include "KoratPostProcessAgentVolume.generated.h"

class UKoratPostProcessAgentVolumeManager;
class UKoratPostProcessAgentVolumeManagerActorData;

UCLASS(Blueprintable)
class SS_API AKoratPostProcessAgentVolume : public AKoratPostProcessAgent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratPostProcessVolumeBindType BindType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPostProcessSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratPostProcessAgentVolumeManager* Manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratPostProcessAgentVolumeManagerActorData* ManagerActorData;
    
public:
    AKoratPostProcessAgentVolume(const FObjectInitializer& ObjectInitializer);

};

