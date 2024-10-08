#pragma once
#include "CoreMinimal.h"
#include "ESSTrainingBattleUiType.h"
#include "MutualDataAsset.h"
#include "SSTrainingBattleUiCharacterInfo.h"
#include "SSTrainingBattleUiDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSTrainingBattleUiDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSTrainingBattleUiCharacterInfo> CharacterInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> CameraSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSTrainingBattleUiType, TSoftClassPtr<UObject>> PtrRecords;
    
public:
    USSTrainingBattleUiDataAsset();

};

