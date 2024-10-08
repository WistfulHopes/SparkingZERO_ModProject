#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleRetryMode.h"
#include "KoratBattleRetryCharaData.h"
#include "KoratBattleRetrySetting.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleRetrySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleRetryMode BattleRetryMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleRetryCharaData> RetryCharaData;
    
    SS_API FKoratBattleRetrySetting();
};

