#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSBnidController.generated.h"

class USSMenuGeneralDialog;
class USSOperationGuideSet;

UCLASS(Blueprintable)
class ASSBnidController : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog2;
    
public:
    ASSBnidController(const FObjectInitializer& ObjectInitializer);

};

