#pragma once
#include "CoreMinimal.h"
#include "SSMenuButton.h"
#include "SSPropertySettingsButton.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSPropertySettingsButton : public USSMenuButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Label;
    
    USSPropertySettingsButton();

    UFUNCTION(BlueprintCallable)
    void OnDecidedArrowRight();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedArrowLeft();
    
};

