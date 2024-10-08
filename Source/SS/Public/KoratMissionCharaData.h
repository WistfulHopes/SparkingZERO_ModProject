#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "KoratMissionCharaSequencerData.h"
#include "KoratPlayerStartDataList.h"
#include "KoratMissionCharaData.generated.h"

USTRUCT(BlueprintType)
struct FKoratMissionCharaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratPlayerStartDataList LocatorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMissionCharaSequencerData> CharaSequencerData;
    
    SS_API FKoratMissionCharaData();
};

