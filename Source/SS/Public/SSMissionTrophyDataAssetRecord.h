#pragma once
#include "CoreMinimal.h"
#include "KoratMissionDataList.h"
#include "MutualDataAsset.h"
#include "SSMissionTrophyDataAssetRecord.generated.h"

UCLASS(Blueprintable)
class USSMissionTrophyDataAssetRecord : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMissionDataList MissionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SteamAchievementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SteamAchievementStatsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GdkAchievementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ps5TrophyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenAchievement;
    
    USSMissionTrophyDataAssetRecord();

};

