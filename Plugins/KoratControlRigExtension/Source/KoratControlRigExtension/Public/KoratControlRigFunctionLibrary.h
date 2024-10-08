#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "KoratControlRigFunctionLibrary.generated.h"

class UControlRig;

UCLASS(Blueprintable)
class KORATCONTROLRIGEXTENSION_API UKoratControlRigFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKoratControlRigFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetControlMinimumRotator(UControlRig* ControlRig, const FName Name, const FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetControlMaximumRotator(UControlRig* ControlRig, const FName Name, const FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    static void OverwriteControlLimits(UControlRig* ControlRig, TSubclassOf<UControlRig> SourceClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualControlRig(const UControlRig* ControlRig, const TSoftClassPtr<UControlRig> ClassPtr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualClass(const UClass* InClass, const TSoftClassPtr<UControlRig> ClassPtr);
    
};

