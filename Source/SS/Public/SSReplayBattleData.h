#pragma once
#include "CoreMinimal.h"
#include "SSBattleKey.h"
#include "SSReplayBattleEtcData.h"
#include "SSReplayChecksum.h"
#include "SSStampData.h"
#include "SSReplayBattleData.generated.h"

USTRUCT(BlueprintType)
struct FSSReplayBattleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBattleKey> ReplayKey0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBattleKey> ReplayKey1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSStampData> StampData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSReplayBattleEtcData> EtcData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSReplayChecksum> ReplayChechsum0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSReplayChecksum> ReplayChechsum1;
    
    SS_API FSSReplayBattleData();
};

