#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSTrainingSettingController.generated.h"

class USSOperationGuideSet;
class USSTrainingBattleUiTreinSetManager;
class USSTrainingBattleUiTreinSetRListManager;
class USSTrainingBattleUiTreinSetRManager;

UCLASS(Blueprintable)
class ASSTrainingSettingController : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSTrainingBattleUiTreinSetManager* TreinSetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSTrainingBattleUiTreinSetRManager* TreinSetRManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSTrainingBattleUiTreinSetRListManager* TreinSetRListManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
public:
    ASSTrainingSettingController(const FObjectInitializer& ObjectInitializer);

};

