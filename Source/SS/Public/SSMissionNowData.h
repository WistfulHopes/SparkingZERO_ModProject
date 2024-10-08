#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSMissionNowData.generated.h"

USTRUCT(BlueprintType)
struct FSSMissionNowData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, int32> AdventureCleraRates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleNum;
    
    SS_API FSSMissionNowData();
};

