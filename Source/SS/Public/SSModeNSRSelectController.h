#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSModeNSRSelectController.generated.h"

class UObject;
class USSBattleModeNSRSelectManager;

UCLASS(Blueprintable)
class ASSModeNSRSelectController : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleModeNSRSelectManager* BattleModeNSRWidget_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleModeNSRSelectManager* BattleModeNSRWidget_Threat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> ModeNSRLoadClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> ModeNSRLoadInstances;
    
public:
    ASSModeNSRSelectController(const FObjectInitializer& ObjectInitializer);

};

