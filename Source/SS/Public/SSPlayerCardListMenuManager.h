#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSPlayerCardListMenuManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSPlayerCardListMenuManager : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSPlayerCardListMenuManager();

    UFUNCTION(BlueprintCallable)
    void Request(const int32 InRequest);
    
};

