#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSTitleLanguageSelectManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSTitleLanguageSelectManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSTitleLanguageSelectManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnChangeValueLanguage();
    
};

