#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSTeamTalkRollData.h"
#include "SSTeamTalkSettingData.h"
#include "SSTeamTalkDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSTeamTalkDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSTeamTalkRollData> RollSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSTeamTalkSettingData> TeamTalkSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> TeamTalkSequencer;
    
    USSTeamTalkDataAsset();

    UFUNCTION(BlueprintCallable)
    void AutoGenerateDataAsset();
    
};

