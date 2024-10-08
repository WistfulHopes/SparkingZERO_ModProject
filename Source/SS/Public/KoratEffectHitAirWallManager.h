#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratEffectHitAirWallInstanceInfo.h"
#include "KoratEffectHitAirWallManager.generated.h"

UCLASS(Blueprintable)
class AKoratEffectHitAirWallManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratEffectHitAirWallInstanceInfo> InstanceInfo;
    
public:
    AKoratEffectHitAirWallManager(const FObjectInitializer& ObjectInitializer);

};

