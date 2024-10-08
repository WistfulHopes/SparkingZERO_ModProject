#pragma once
#include "CoreMinimal.h"
#include "SSMenuButton.h"
#include "SSMenuButtonChip.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMenuButtonChip : public USSMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMouseDecideKeyRepeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseDecideKeyRepeatStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseDecideKeyRepeatStepTime;
    
public:
    USSMenuButtonChip();

    UFUNCTION(BlueprintCallable)
    void OnValueChangeKey();
    
    UFUNCTION(BlueprintCallable)
    void OnValueChangeEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnValueChangeDisabled();
    
};

