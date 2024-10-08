#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SSEventSceneCaptureFunctionLibrary.generated.h"

class UTexture2DDynamic;

UCLASS(Blueprintable)
class USSEventSceneCaptureFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USSEventSceneCaptureFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static UTexture2DDynamic* MakeTexturePng(const TArray<uint8>& InBytes);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2DDynamic* MakeTexture(const TArray<uint8>& InBytes);
    
};

