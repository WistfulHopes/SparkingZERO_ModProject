#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSActionListController.generated.h"

class USSActionListManager;
class USSOperationGuideSet;

UCLASS(Blueprintable)
class ASSActionListController : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSActionListManager* ActionListManager1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSActionListManager* ActionListManager2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSActionListManager* ActionListManagerBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
public:
    ASSActionListController(const FObjectInitializer& ObjectInitializer);

};

