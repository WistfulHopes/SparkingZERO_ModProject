#pragma once
#include "CoreMinimal.h"
#include "EKoratUnLockMode.h"
#include "SSBattleSetupUserDataSaveDataTeamingCharacter.h"
#include "SSUnLockDetail.h"
#include "KoratModeHUNSaveDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratModeHUNSaveDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUnLockMode UnLockMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSUnLockDetail UnLockDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCleard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TopScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TopRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TopBattleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleSetupUserDataSaveDataTeamingCharacter TeamingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleSetupUserDataSaveDataTeamingCharacter TopTeamingCharacter;
    
    SS_API FKoratModeHUNSaveDataRecord();
};

