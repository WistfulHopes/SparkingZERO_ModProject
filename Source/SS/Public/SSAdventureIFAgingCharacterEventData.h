#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSAdventureIFAgingEventData.h"
#include "SSAdventureIFAgingCharacterEventData.generated.h"

USTRUCT(BlueprintType)
struct FSSAdventureIFAgingCharacterEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, FSSAdventureIFAgingEventData> EventDatas;
    
    SS_API FSSAdventureIFAgingCharacterEventData();
};

