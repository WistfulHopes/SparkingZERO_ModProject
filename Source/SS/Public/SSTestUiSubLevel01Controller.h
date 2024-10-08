#pragma once
#include "CoreMinimal.h"
#include "SSMenuSceneController.h"
#include "SSSubLevelTravelInfo.h"
#include "SSTestUiSubLevel01Controller.generated.h"

UCLASS(Blueprintable)
class ASSTestUiSubLevel01Controller : public ASSMenuSceneController {
    GENERATED_BODY()
public:
    ASSTestUiSubLevel01Controller(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnClickNext(const FSSSubLevelTravelInfo InInfo);
    
};

