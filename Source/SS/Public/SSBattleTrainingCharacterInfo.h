#pragma once
#include "CoreMinimal.h"
#include "ESSBattleTrainingCharaActionType.h"
#include "KoratCharacterCostumeDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterItemDataList.h"
#include "KoratPlayerStartDataList.h"
#include "SSBattleTrainingCharacterInfo.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSBattleTrainingCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList CharacterDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterCostumeDataList CostumeDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterItemDataList> ItemDataListArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratPlayerStartDataList StartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratPlayerStartDataList SceneStartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSBattleTrainingCharaActionType, TSoftObjectPtr<ULevelSequence>> Actions;
    
    SS_API FSSBattleTrainingCharacterInfo();
};

