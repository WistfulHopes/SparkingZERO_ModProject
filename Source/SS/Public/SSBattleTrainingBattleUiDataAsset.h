#pragma once
#include "CoreMinimal.h"
#include "ESSBattleTrainingBattleUiType.h"
#include "MutualDataAsset.h"
#include "SSBattleTrainingBattleUiCharacterInfo.h"
#include "SSTrainingBattleAiInfo.h"
#include "SSBattleTrainingBattleUiDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSBattleTrainingBattleUiDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBattleTrainingBattleUiCharacterInfo> CharacterInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> CameraSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSBattleTrainingBattleUiType, TSoftClassPtr<UObject>> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSTrainingBattleAiInfo> TrainingBattleAiInfo;
    
public:
    USSBattleTrainingBattleUiDataAsset();

};

