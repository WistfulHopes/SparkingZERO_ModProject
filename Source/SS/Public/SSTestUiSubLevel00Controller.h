#pragma once
#include "CoreMinimal.h"
#include "SSMenuSceneController.h"
#include "SSSubLevelTravelInfo.h"
#include "SSTestUiSubLevel00Controller.generated.h"

UCLASS(Blueprintable)
class ASSTestUiSubLevel00Controller : public ASSMenuSceneController {
    GENERATED_BODY()
public:
    ASSTestUiSubLevel00Controller(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnClickNext(const FSSSubLevelTravelInfo InInfo);
    
};

