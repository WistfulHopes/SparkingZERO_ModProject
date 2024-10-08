#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtomAsrRack.generated.h"

class UAtomAsrRack;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UAtomAsrRack : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RackId;
    
    UAtomAsrRack();

    UFUNCTION(BlueprintCallable)
    void SetEffectBypass(const FString& BusName, const FString& EffectName, bool Bypasses);
    
    UFUNCTION(BlueprintCallable)
    void SetBusVolumeByName(const FString& BusName, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelByName(const FString& SourceBusName, const FString& DestBusName, float Level);
    
    UFUNCTION(BlueprintCallable)
    void SetAisacControlByName(const FString& control_name, float control_value);
    
    UFUNCTION(BlueprintCallable)
    static UAtomAsrRack* GetDefaultAsrRack();
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentAppliedSnapshot(int32 AsrRackID);
    
    UFUNCTION(BlueprintCallable)
    bool GetBusAnalyzerInfo(const FString& DspBusName, int32& num_channels, TArray<float>& rms_levels, TArray<float>& peak_levels, TArray<float>& peak_hold_levels);
    
    UFUNCTION(BlueprintCallable)
    static UAtomAsrRack* GetAsrRack(int32 AsrRackID);
    
    UFUNCTION(BlueprintCallable)
    void DetachDspBusSetting();
    
    UFUNCTION(BlueprintCallable)
    void ConnectToPadVibrator(int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void ConnectToPadSpeaker(int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void AttachDspBusSetting(const FString& SettingName);
    
    UFUNCTION(BlueprintCallable)
    bool AssociateOutputPort(const FString& OutputPortName);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDspBusSnapshot(const FString& SnapshotName, int32 Milliseconds);
    
};

