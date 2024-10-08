#pragma once
#include "CoreMinimal.h"
#include "SSDramaticEventBaseController.h"
#include "SSDramaticBattleEndingSceneController.generated.h"

class USSDramaticEndingNotice;

UCLASS(Blueprintable)
class ASSDramaticBattleEndingSceneController : public ASSDramaticEventBaseController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSDramaticEndingNotice* EndingNoticeWidget;
    
public:
    ASSDramaticBattleEndingSceneController(const FObjectInitializer& ObjectInitializer);

};

