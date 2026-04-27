#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "KoratCharacterLocomotionSubBase.generated.h"

class ACharacter;
class ASSCharacter;

UCLASS(Blueprintable)
class UKoratCharacterLocomotionSubBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XYSpeedThreshold;
    
public:
    UKoratCharacterLocomotionSubBase();

    UFUNCTION(BlueprintCallable)
    void PrintHitResult(const FHitResult& InHitResult);
    
    UFUNCTION(BlueprintCallable)
    float CalculationSideStepAddYaw(ASSCharacter* InCharacter, float InDeltaSeconds, float InMaxSpeed);
    
    UFUNCTION(BlueprintCallable)
    bool CalculationLookatRotationStoneThrow(ACharacter* InCharacter, FVector InLookAtNormal, FRotator& OutLocation);
    
    UFUNCTION(BlueprintCallable)
    bool CalculationLookatLotationIdleMove(ACharacter* InCharacter, FRotator& OutLocation);
    
};

