#pragma once
#include "CoreMinimal.h"
#include "SSBulletWindMotorComponent.h"
#include "SSBulletBeamWindMotorComponent.generated.h"

class ASSBulletActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSBulletBeamWindMotorComponent : public USSBulletWindMotorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSBulletActor* BulletActor;
    
public:
    USSBulletBeamWindMotorComponent(const FObjectInitializer& ObjectInitializer);

};

