#pragma once
#include "CoreMinimal.h"
#include "ESSSpeedImpactTimingUiJudge.h"
#include "SSImpactBaseUi.h"
#include "SSSpeedImpactTimingUi.generated.h"

class UCurveFloat;
class UImage;
class UMaterialInstanceDynamic;
class USSDecideReactionUi;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSSpeedImpactTimingUi : public USSImpactBaseUi {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultJustTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultJustJudgeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CircleScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugProgressSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CircleTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CircleSuccessLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> SuccessScaleTrackingWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CircleSuccessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDecideReactionUi* PressButton;
    
public:
    USSSpeedImpactTimingUi();

    UFUNCTION(BlueprintCallable)
    void SetResult(ESSSpeedImpactTimingUiJudge InJudge);
    
    UFUNCTION(BlueprintCallable)
    void SetProgress(float InProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetJustTiming(float InJustTiming);
    
    UFUNCTION(BlueprintCallable)
    void SetJustLength(float InJustLength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJudgeStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideStartSpeedImpact(int32 InJudgeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideSpeedImpact(int32 InJudgeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecided();
    
    UFUNCTION(BlueprintCallable)
    void JudgeStart();
    
    UFUNCTION(BlueprintCallable)
    void DebugTimingDecided();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DebugIsDecided() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugEnablebAutoProgress(bool bEnable);
    
};

