#pragma once
#include "CoreMinimal.h"
#include "EBattleImpactTriggerEventOpt.h"
#include "SSWarpRequestInfoDataAsset.h"
#include "SSWarpRequestInfo.generated.h"

class ASSCharacter;

USTRUCT(BlueprintType)
struct FSSWarpRequestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWarpRequestInfoDataAsset WarpRequestInfoDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImpactProcedureDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleImpactTriggerEventOpt BattleImpactTriggerEventOpt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnIgnoreCharaOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> ExecuteCharacter;
    
    SS_API FSSWarpRequestInfo();
};

