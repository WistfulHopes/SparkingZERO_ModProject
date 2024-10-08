#pragma once
#include "CoreMinimal.h"
#include "SSMenuButton.h"
#include "SSMainMenuSettingsPropertyButton.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuSettingsPropertyButton : public USSMenuButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Label;
    
    USSMainMenuSettingsPropertyButton();

    UFUNCTION(BlueprintCallable)
    void OnDecidedArrowRight();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedArrowLeft();
    
};

