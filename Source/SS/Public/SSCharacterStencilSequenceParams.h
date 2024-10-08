#pragma once
#include "CoreMinimal.h"
#include "SSCharacterStencilParams.h"
#include "SSCharacterStencilSequenceParams.generated.h"

UCLASS(Blueprintable)
class USSCharacterStencilSequenceParams : public USSCharacterStencilParams {
    GENERATED_BODY()
public:
    USSCharacterStencilSequenceParams();

    UFUNCTION(BlueprintCallable)
    void SetPriority(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPriority() const;
    
};

