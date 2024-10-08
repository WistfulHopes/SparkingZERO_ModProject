#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CriLipsMorphTargetBlendAmountAsJapanese.h"
#include "CriLipsMouthInfo.h"
#include "ELipsAnalyzerDataReadoutMode.h"
#include "LipsAnalyzerBase.generated.h"

UCLASS(Blueprintable)
class CRIWAREADXLIPSYNC_API ULipsAnalyzerBase : public UObject {
    GENERATED_BODY()
public:
    ULipsAnalyzerBase();

    UFUNCTION(BlueprintCallable)
    void SetSilenceThreshold(const float VolumeDb);
    
    UFUNCTION(BlueprintCallable)
    void SetSamplingRate(const int32 SamplingRateHz);
    
    UFUNCTION(BlueprintCallable)
    void SetReadoutOffset(int64 OffsetMs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAtSilence() const;
    
    UFUNCTION(BlueprintCallable)
    void Init(const int32 MaxInputSamplingRate, const ELipsAnalyzerDataReadoutMode dataReadoutMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSilenceThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCriLipsMorphTargetBlendAmountAsJapanese GetMorphTargetBlendAmountAsJapanese() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCriLipsMouthInfo GetInfoAtSilence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCriLipsMouthInfo GetInfo() const;
    
};

