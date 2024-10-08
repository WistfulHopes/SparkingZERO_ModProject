#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSRandom.generated.h"

UCLASS(Blueprintable)
class USSRandom : public UObject {
    GENERATED_BODY()
public:
    USSRandom();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 RandomIntegerInRange(int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 RandomInteger(int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float RandomFloatInRange(float Min, float Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float RandomFloat();
    
};

