#pragma once
#include "CoreMinimal.h"
#include "SSWindMotorComponent.h"
#include "SSBulletWindMotorComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSBulletWindMotorComponent : public USSWindMotorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KoratWindSpeed;
    
    USSBulletWindMotorComponent(const FObjectInitializer& ObjectInitializer);

};

