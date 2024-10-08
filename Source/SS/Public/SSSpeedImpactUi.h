#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSSpeedImpactUi.generated.h"

class UCurveFloat;
class UImage;
class USSSwitchUI;

UCLASS(Blueprintable, EditInlineNew)
class USSSpeedImpactUi : public USSHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CircleScaleCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CircleTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CircleSuccessLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSwitchUI* RapidButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSwitchUI* PressButton;
    
public:
    USSSpeedImpactUi();

    UFUNCTION(BlueprintCallable)
    void StartTimingPart(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void StartRapidPart(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSuccessLine(float InSuccessTiming);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugRapidInput(bool bInInput);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJudgeStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecided();
    
    UFUNCTION(BlueprintCallable)
    void DebugTimingDecided();
    
    UFUNCTION(BlueprintCallable)
    void DebugStartJudge();
    
};

