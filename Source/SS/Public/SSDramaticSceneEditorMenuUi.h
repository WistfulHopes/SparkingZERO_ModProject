#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticSceneEditorMenuUi.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticSceneEditorMenuUi : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitButtonName;
    
public:
    USSDramaticSceneEditorMenuUi();

protected:
    UFUNCTION(BlueprintCallable)
    void DecidePanel(USSMenuButton* InButton);
    
};

