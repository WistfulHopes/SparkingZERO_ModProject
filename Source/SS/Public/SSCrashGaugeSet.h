#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSCrashGaugeSet.generated.h"

class USSCrashGauge;
class USSDecideReactionUi;

UCLASS(Blueprintable, EditInlineNew)
class USSCrashGaugeSet : public USSHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSCrashGauge* CrashGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDecideReactionUi* PressButton;
    
public:
    USSCrashGaugeSet();

    UFUNCTION(BlueprintCallable)
    void StartInPlayerIndex(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void DebugDecided(bool bInSuccess);
    
};

