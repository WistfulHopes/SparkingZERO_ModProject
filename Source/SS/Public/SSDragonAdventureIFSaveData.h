#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSDragonAdventureIFCharacterSaveData.h"
#include "SSDragonAdventureIFSaveData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSDragonAdventureIFSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, FSSDragonAdventureIFCharacterSaveData> CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDifficultyEasy;
    
    FSSDragonAdventureIFSaveData();
};

