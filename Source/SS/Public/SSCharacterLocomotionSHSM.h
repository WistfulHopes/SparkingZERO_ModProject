#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SSCharacterLocomotionSHSM.generated.h"

class AActor;
class UCurveFloat;

UCLASS(Blueprintable)
class USSCharacterLocomotionSHSM : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USSCharacterLocomotionSHSM();

    UFUNCTION(BlueprintCallable)
    static void CalculateSHSMMove(FVector& OutTargetPosition, FVector& OutTargetVector, FVector& OutNextVector, const FVector& InStartPoint, const FVector& InMoveVector, AActor* InActor, const float InLength, UCurveFloat* InCurveFloat, const float InClearTime, const float InConeAngle);
    
};

