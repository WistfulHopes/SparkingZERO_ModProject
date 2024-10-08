#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSGeneralDialogController.generated.h"

class USSMenuGeneralDialog;

UCLASS(Blueprintable)
class ASSGeneralDialogController : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
public:
    ASSGeneralDialogController(const FObjectInitializer& ObjectInitializer);

};

