#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSExplosion.h"
#include "SSExplosionManager.generated.h"

UCLASS(Blueprintable)
class ASSExplosionManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSExplosion> Explosions;
    
public:
    ASSExplosionManager(const FObjectInitializer& ObjectInitializer);

};

