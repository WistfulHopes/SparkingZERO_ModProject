#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratDramaticBattleCommonListData.h"
#include "KoratDramaticBattleCreaterInfo.h"
#include "KoratDramaticReplayAdditionalData.h"
#include "KoratDramaticReplayCommonListData.generated.h"

class USSBattleReplaySaveGame;

USTRUCT(BlueprintType)
struct FKoratDramaticReplayCommonListData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBattleReplaySaveGame* ReplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCommonListData BattleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EditVersion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 EditBattleVersion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 EditDramaVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCreaterInfo CreaterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ReplayId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 BattleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticReplayAdditionalData AdditionalData;
    
    SS_API FKoratDramaticReplayCommonListData();
};

