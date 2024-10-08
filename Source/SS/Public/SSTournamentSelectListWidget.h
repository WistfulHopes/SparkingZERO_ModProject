#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSTournamentSelectListWidget.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSTournamentSelectListWidget : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSTournamentSelectListWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

