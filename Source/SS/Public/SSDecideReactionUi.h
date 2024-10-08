#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSDecideReactionUi.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDecideReactionUi : public USSUiWidget {
    GENERATED_BODY()
public:
    USSDecideReactionUi();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideSuccessStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideFailedStarted();
    
};

