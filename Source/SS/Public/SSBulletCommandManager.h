#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSBulletCommandManager.generated.h"

class ASSBulletStopActor;

UCLASS(Blueprintable)
class ASSBulletCommandManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBulletStopActor* BulletStopActor;
    
public:
    ASSBulletCommandManager(const FObjectInitializer& ObjectInitializer);

};

