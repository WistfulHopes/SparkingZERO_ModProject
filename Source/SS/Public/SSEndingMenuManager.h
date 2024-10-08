#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSEndingMenuManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSEndingMenuManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSEndingMenuManager();

    UFUNCTION(BlueprintCallable)
    void Request(const int32 InRequest);
    
};

