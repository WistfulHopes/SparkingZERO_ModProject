#pragma once
#include "CoreMinimal.h"
#include "ESSKeyInputType.h"
#include "ESSBattleTrainingSequencerType.h"
#include "ESSBattleTrainingUIType.h"
#include "KoratBGMDataList.h"
#include "KoratBattleTrainingItemDataList.h"
#include "KoratBattleTrainingLinesDataList.h"
#include "KoratMissionDataList.h"
#include "MutualDataAsset.h"
#include "SSBattleTrainingCharacterInfo.h"
#include "SSBattleTrainingTalkInfo.h"
#include "SSBattleTrainingDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSBattleTrainingDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBattleTrainingCharacterInfo> CharacterInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSBattleTrainingSequencerType, TSoftObjectPtr<ULevelSequence>> SceneSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleTrainingLinesDataList> StartLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleTrainingItemDataList> TrainingItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList BGMDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSBattleTrainingUIType, TSoftClassPtr<UObject>> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSKeyInputType, int32> InputSupportSe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMissionDataList> TalkConditionMissionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBattleTrainingTalkInfo> TalkInfoArray;
    
public:
    USSBattleTrainingDataAsset();

};

