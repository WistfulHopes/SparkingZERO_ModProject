#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSBulletStopActor.generated.h"

class ASSBulletCommandManager;

UCLASS(Blueprintable)
class ASSBulletStopActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBulletCommandManager* BulletCommandManager;
    
public:
    ASSBulletStopActor(const FObjectInitializer& ObjectInitializer);

};

