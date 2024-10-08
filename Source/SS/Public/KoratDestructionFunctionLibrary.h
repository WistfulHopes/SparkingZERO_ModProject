#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KoratDestructionDamageResult.h"
#include "KoratDestructionFieldParameter.h"
#include "KoratDestructionFunctionLibrary.generated.h"

class AActor;
class UKoratDestructionDamageComponent;
class ULevel;

UCLASS(Blueprintable)
class UKoratDestructionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKoratDestructionFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void RemoveInstancedFoliageInSphere(ULevel* InLevel, const FVector& Location, const float Radius);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveInstancedFoliageInBox(ULevel* InLevel, const FBox& Bounds);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLowSpecDestruction();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDestructionObject(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBrokenObject(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static UKoratDestructionDamageComponent* FindDestructionDamageComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static FKoratDestructionDamageResult DestructionDirectDamage(const AActor* Actor, const FKoratDestructionFieldParameter& Parameter);
    
    UFUNCTION(BlueprintCallable)
    static FKoratDestructionDamageResult DestructionDamage(const AActor* Actor, const FKoratDestructionFieldParameter& Parameter);
    
};

