#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EWindSimFieldMotorType.h"
#include "KoratWindFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UKoratWindFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKoratWindFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMotorPowerByKoratWindSpeed(EWindSimFieldMotorType InMotorType, float InRadius, float InKoratWindSpeed);
    
};

