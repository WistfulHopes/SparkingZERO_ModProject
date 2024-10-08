#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "SSBattleLoadingFunctionLibrary.generated.h"

class UObject;
class USSBattleLoadingSubsystem;

UCLASS(Blueprintable)
class USSBattleLoadingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USSBattleLoadingFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    static void StartPreloadContainer(const UObject* WorldContextObject, FLatentActionInfo InLatentInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void SetPreloading(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPreloading();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetSublevelPreloadedCount(const UObject* WorldContextObject, int32& loadedCount, int32& requestCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPreloadedCount(const UObject* WorldContextObject, int32& finishContainerCount, int32& requestContainerCount, int32& loadedObjectCount, int32& requestObjectCount);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USSBattleLoadingSubsystem* GetBattleLoadingSubsystem(const UObject* WorldContextObject);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndPreloading(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearPreloadContainer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BeginPreloading(const UObject* WorldContextObject);
    
};

