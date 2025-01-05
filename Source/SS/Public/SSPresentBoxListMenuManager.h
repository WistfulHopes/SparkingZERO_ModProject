#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSPresentBoxListMenuManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSPresentBoxListMenuManager : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSPresentBoxListMenuManager();

    UFUNCTION(BlueprintCallable)
    void Request(const int32 InRequest);
    
};

