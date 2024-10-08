#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "EKoratPostprocessCndParamTypeBool.h"
#include "EKoratPostprocessCndParamTypeFloat.h"
#include "EKoratPostprocessCndParamTypeInt.h"
#include "KoratPostprocessCndSystem.generated.h"

class UKoratPostprocessCndHandle;
class UKoratPostprocessCndNodeTable;

UCLASS(Blueprintable)
class UKoratPostprocessCndSystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UKoratPostprocessCndNodeTable*> Tables;
    
public:
    UKoratPostprocessCndSystem();

    UFUNCTION(BlueprintCallable)
    bool SetValueInt(UKoratPostprocessCndHandle* Handle, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueFloat(UKoratPostprocessCndHandle* Handle, float Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueBool(UKoratPostprocessCndHandle* Handle, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetupDefaultValue();
    
    UFUNCTION(BlueprintCallable)
    bool Delete(UKoratPostprocessCndHandle* Handle);
    
    UFUNCTION(BlueprintCallable)
    UKoratPostprocessCndHandle* AddInt(EKoratPostprocessCndParamTypeInt Type, int32 Priority, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    UKoratPostprocessCndHandle* AddFloat(EKoratPostprocessCndParamTypeFloat Type, int32 Priority, float Value);
    
    UFUNCTION(BlueprintCallable)
    UKoratPostprocessCndHandle* AddBool(EKoratPostprocessCndParamTypeBool Type, int32 Priority, bool Value);
    
};

