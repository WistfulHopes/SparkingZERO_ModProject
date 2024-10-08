#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SceneComponent.h"
#include "Engine/HitResult.h"
#include "ESSCharacterLocationType.h"
#include "SSCharacterFunctionLibrary.generated.h"

class APawn;
class UAnimInstance;

UCLASS(Blueprintable)
class USSCharacterFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USSCharacterFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool SetCharacterLocation(APawn* Character, const FVector NewLocation, const TEnumAsByte<ESSCharacterLocationType> LocationType, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetOneMinusCurveValue(const UAnimInstance* Target, FName CurveName);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetCharacterSocketTransform(const APawn* Character, const FName SocketName, const TEnumAsByte<ERelativeTransformSpace> TransformSpace, bool& Exist);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetCharacterLocation(const APawn* Character, const TEnumAsByte<ESSCharacterLocationType> LocationType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetCharacterConfrontRotator(const APawn* Character, float AdditionalAngle);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesCharacterSocketExist(const APawn* Character, const FName SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform CalcCharacterTransformFromSocketTarget(const APawn* Character, const FName SocketName, FVector SocketLocation, FRotator ActorRotation, bool bIgnorePitchRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator CalcCharacterRotatorFromLocationTarget(const APawn* Character, FVector Location, bool bIgnorePitchRotation, FRotator AdditionalRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector CalcCharacterLocationFromSocketTarget(const APawn* Character, const FName SocketName, FVector SocketLocation);
    
    UFUNCTION(BlueprintCallable)
    static FVector CalcCharacterLocation(const APawn* Character, const FVector NewLocation, const TEnumAsByte<ESSCharacterLocationType> LocationType);
    
};

