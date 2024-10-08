#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticReplayInfo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticReplayInfo : public USSMenuManager {
    GENERATED_BODY()
public:
    USSDramaticReplayInfo();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDataUpdate(bool bIsClear);
    
};

