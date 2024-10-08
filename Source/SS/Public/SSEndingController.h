#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSMenuSceneController.h"
#include "SSEndingController.generated.h"

class ASSEndingControllerActor;

UCLASS(Blueprintable)
class ASSEndingController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSEndingControllerActor* EndingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor StartFadeColor;
    
public:
    ASSEndingController(const FObjectInitializer& ObjectInitializer);

};

