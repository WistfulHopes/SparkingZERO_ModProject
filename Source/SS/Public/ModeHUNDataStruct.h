#pragma once
#include "CoreMinimal.h"
#include "EKoratModeHUNClearRank.h"
#include "KoratRewardDataList.h"
#include "ModeHUNDataStruct.generated.h"

class USSDramaticBattleDataRecordAsset;

USTRUCT(BlueprintType)
struct FModeHUNDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrderNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleDataRecordAsset* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModeHUNTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratModeHUNClearRank, FKoratRewardDataList> ModeHUNRewards;
    
    SS_API FModeHUNDataStruct();
};

