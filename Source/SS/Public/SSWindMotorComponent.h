#pragma once
#include "CoreMinimal.h"
#include "WindSimFieldMotorComponent.h"
#include "SSWindMotorComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSWindMotorComponent : public UWindSimFieldMotorComponent {
    GENERATED_BODY()
public:
    USSWindMotorComponent(const FObjectInitializer& ObjectInitializer);

};

