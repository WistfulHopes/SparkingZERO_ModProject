#pragma once
#include "CoreMinimal.h"
#include "SSMenuPlayerController.h"
#include "SSTestMenuPlayerController.generated.h"

class USSMenuManager;

UCLASS(Blueprintable)
class ASSTestMenuPlayerController : public ASSMenuPlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuManager*> MenuManager;
    
public:
    ASSTestMenuPlayerController(const FObjectInitializer& ObjectInitializer);

};

