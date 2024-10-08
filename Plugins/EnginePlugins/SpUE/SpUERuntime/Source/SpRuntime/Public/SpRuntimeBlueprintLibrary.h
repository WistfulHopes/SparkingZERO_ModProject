#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SpRuntimeBlueprintLibrary.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class SPRUNTIME_API USpRuntimeBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpRuntimeBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetDebugGuiMeterVisible(bool InVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugGuiEnable(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugDisplayTelopVisible(bool InVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugDisplayPrintVisible(bool InVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugDisplayEnable(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    static void PrintGamepadAttached();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGamepadAttached_Valve(int32 InControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGamepadAttached_Sony(int32 InControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGamepadAttached_Microsft(int32 InControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGamepadAttached(int32 InControllerId);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> CreateViewportCaptureSoftTexture();
    
    UFUNCTION(BlueprintCallable)
    static void AssertionWarning(const FString& InMessage, bool InExpression);
    
    UFUNCTION(BlueprintCallable)
    static void AssertionPrint(const FString& InMessage);
    
    UFUNCTION(BlueprintCallable)
    static void AssertionInfo(const FString& InMessage);
    
    UFUNCTION(BlueprintCallable)
    static void AssertionFatal(const FString& InMessage, bool InExpression);
    
    UFUNCTION(BlueprintCallable)
    static void AssertionError(const FString& InMessage, bool InExpression);
    
    UFUNCTION(BlueprintCallable)
    static void AssertionAssert(const FString& InMessage, bool InExpression);
    
};

