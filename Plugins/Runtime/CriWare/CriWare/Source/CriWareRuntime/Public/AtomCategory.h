#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AtomAisacInfo.h"
#include "AtomCategory.generated.h"

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UAtomCategory : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAtomCategory();

    UFUNCTION(BlueprintCallable)
    static void StopByName(const FString& CategoryName);
    
    UFUNCTION(BlueprintCallable)
    static void SetVolumeByName(const FString& CategoryName, float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void SetMute(const FString& CategoryName, bool IsMute);
    
    UFUNCTION(BlueprintCallable)
    static void SetAisacControlByName(const FString& CategoryName, const FString& AisacName, float Value);
    
    UFUNCTION(BlueprintCallable)
    static bool ResetAllAisacControlByName(const FString& CategoryName);
    
    UFUNCTION(BlueprintCallable)
    static bool ResetAllAisacControlById(int32 CategoryId);
    
    UFUNCTION(BlueprintCallable)
    static void PauseByName(const FString& CategoryName, bool bPause);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPausedByName(const FString& CategoryName);
    
    UFUNCTION(BlueprintCallable)
    static float GetVolumeByName(const FString& CategoryName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumAttachedAisacsByName(const FString& CategoryName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumAttachedAisacsById(int32 CategoryId);
    
    UFUNCTION(BlueprintCallable)
    static float GetCurrentAisacControlValueByName(const FString& CategoryName, const FString& AisacControlName);
    
    UFUNCTION(BlueprintCallable)
    static float GetCurrentAisacControlValueById(int32 CategoryId, int32 AisacControlID);
    
    UFUNCTION(BlueprintCallable)
    static void GetAttachedAisacInfoByName(const FString& CategoryName, int32 AisacAttachedIndex, bool& IsSuccess, FAtomAisacInfo& AisacInfo);
    
    UFUNCTION(BlueprintCallable)
    static void GetAttachedAisacInfoById(int32 CategoryId, int32 AisacAttachedIndex, bool& IsSuccess, FAtomAisacInfo& AisacInfo);
    
};

