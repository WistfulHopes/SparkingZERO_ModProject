#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSMenuSceneController.h"
#include "SSPlayerCardController.generated.h"

class ASSPlayerCardControllerActor;

UCLASS(Blueprintable)
class ASSPlayerCardController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSPlayerCardControllerActor* PlayerCardActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor StartFadeColor;
    
public:
    ASSPlayerCardController(const FObjectInitializer& ObjectInitializer);

};

