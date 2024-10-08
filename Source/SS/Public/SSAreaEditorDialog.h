#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSAreaEditorDialog.generated.h"

UCLASS(Blueprintable)
class USSAreaEditorDialog : public UObject {
    GENERATED_BODY()
public:
    USSAreaEditorDialog();

    UFUNCTION(BlueprintCallable)
    static void ShowSimpleDialog(FString& InMessage);
    
};

