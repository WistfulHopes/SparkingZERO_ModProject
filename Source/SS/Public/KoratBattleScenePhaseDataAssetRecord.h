#pragma once
#include "CoreMinimal.h"
#include "KoratBattleScenePhaseDataAssetRecord.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratBattleScenePhaseDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> Sequencer;
    
    SS_API FKoratBattleScenePhaseDataAssetRecord();
};

