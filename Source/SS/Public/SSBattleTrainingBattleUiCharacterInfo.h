#pragma once
#include "CoreMinimal.h"
#include "ESSBattleTrainingBattleUiCharaActionType.h"
#include "KoratCharacterDataList.h"
#include "KoratPlayerStartDataList.h"
#include "SSBattleTrainingBattleUiCharacterInfo.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSBattleTrainingBattleUiCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList CharacterDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratPlayerStartDataList StartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSBattleTrainingBattleUiCharaActionType, TSoftObjectPtr<ULevelSequence>> Actions;
    
    SS_API FSSBattleTrainingBattleUiCharacterInfo();
};

