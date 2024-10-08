#pragma once
#include "CoreMinimal.h"
#include "ESSTrainingBattleUiCharaActionType.h"
#include "KoratCharacterDataList.h"
#include "KoratPlayerStartDataList.h"
#include "SSTrainingBattleUiCharacterInfo.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSTrainingBattleUiCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList CharacterDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratPlayerStartDataList StartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSTrainingBattleUiCharaActionType, TSoftObjectPtr<ULevelSequence>> Actions;
    
    SS_API FSSTrainingBattleUiCharacterInfo();
};

