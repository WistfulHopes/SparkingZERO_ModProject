#pragma once
#include "CoreMinimal.h"
#include "SSDramaticEventBaseController.h"
#include "SSDramaticBattleOpeningSceneController.generated.h"

class USSDramaticBattleTitleUi;

UCLASS(Blueprintable)
class ASSDramaticBattleOpeningSceneController : public ASSDramaticEventBaseController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSDramaticBattleTitleUi* TitleWidget;
    
public:
    ASSDramaticBattleOpeningSceneController(const FObjectInitializer& ObjectInitializer);

};

