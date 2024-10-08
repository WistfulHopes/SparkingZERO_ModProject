#pragma once
#include "CoreMinimal.h"
#include "EKoratPostProcessChameleonBindType.h"
#include "KoratPostProcessAgent.h"
#include "KoratPostProcessAgentChameleon.generated.h"

class UKoratPostProcessAgentChameleonManager;
class UKoratPostProcessAgentChameleonManagerActorData;
class UKoratPostProcessChameleonComponent;
class UKoratPostProcessWorldToScreenComponent;

UCLASS(Abstract, Blueprintable)
class SS_API AKoratPostProcessAgentChameleon : public AKoratPostProcessAgent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratPostProcessChameleonBindType BindType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratPostProcessChameleonComponent* KoratPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratPostProcessWorldToScreenComponent* WorldToScreenRadialBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratPostProcessWorldToScreenComponent* WorldToScreenSpeedLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratPostProcessWorldToScreenComponent* WorldToScreenBWSpeedLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratPostProcessWorldToScreenComponent* WorldToScreenFVS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratPostProcessWorldToScreenComponent* WorldToScreenDrmarize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratPostProcessAgentChameleonManager* Manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratPostProcessAgentChameleonManagerActorData* ManagerActorData;
    
public:
    AKoratPostProcessAgentChameleon(const FObjectInitializer& ObjectInitializer);

};

