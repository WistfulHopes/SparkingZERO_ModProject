#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSPlayerCardMenuManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSPlayerCardMenuManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSPlayerCardMenuManager();

    UFUNCTION(BlueprintCallable)
    void Request(const int32 InRequest);
    
};

