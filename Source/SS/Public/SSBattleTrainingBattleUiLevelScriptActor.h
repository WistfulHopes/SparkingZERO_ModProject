#pragma once
#include "CoreMinimal.h"
#include "KoratBattleTrainingSettingDataList.h"
#include "SSUiLevelScriptActor.h"
#include "SSBattleTrainingBattleUiLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class ASSBattleTrainingBattleUiLevelScriptActor : public ASSUiLevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleTrainingSettingDataList SetupTrainingSetting;
    
    ASSBattleTrainingBattleUiLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

