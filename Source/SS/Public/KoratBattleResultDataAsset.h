#pragma once
#include "CoreMinimal.h"
#include "KoratBattleRewardDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratBattleResultDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratBattleResultDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PlayerRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ProficiencyRank;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProficiencyPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratBattleRewardDataAssetRecord> RemunerationTableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratBattleRewardDataAssetRecord> TenkaichBasicRemunerationTableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UObject>> PtrRecords;
    
    UKoratBattleResultDataAsset();

};

