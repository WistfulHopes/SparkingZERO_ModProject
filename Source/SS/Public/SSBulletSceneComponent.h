#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SSBulletSceneComponent.generated.h"

class ASSBulletActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSBulletSceneComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBulletActor* BulletActor;
    
public:
    USSBulletSceneComponent(const FObjectInitializer& ObjectInitializer);

};

