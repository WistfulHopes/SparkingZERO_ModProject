#pragma once
#include "CoreMinimal.h"
#include "SSMenuButton.h"
#include "SSTournamentRuleEditorButton.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSTournamentRuleEditorButton : public USSMenuButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Description;
    
    USSTournamentRuleEditorButton();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSlideRight();
    
    UFUNCTION(BlueprintCallable)
    void OnSlideLeft();
    
};

