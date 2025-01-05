#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSEffectHighSpeedMoveActor.generated.h"

class USplineMeshComponent;

UCLASS(Blueprintable)
class ASSEffectHighSpeedMoveActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* SplineMeshComponent;
    
public:
    ASSEffectHighSpeedMoveActor(const FObjectInitializer& ObjectInitializer);

};

