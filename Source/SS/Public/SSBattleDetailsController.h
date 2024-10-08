#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSBattleDetailsController.generated.h"

class USSOperationGuideSet;
class USSPauseRequirementListManager;
class USSPauseRequirementManager;

UCLASS(Blueprintable)
class ASSBattleDetailsController : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSPauseRequirementListManager* PauseRequirementListManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSPauseRequirementManager* PauseRequirementManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
public:
    ASSBattleDetailsController(const FObjectInitializer& ObjectInitializer);

};

