#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSTournamentRuleEditorWidget.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSTournamentRuleEditorWidget : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSTournamentRuleEditorWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoveButton, int32 InDataIndex);
    
};

