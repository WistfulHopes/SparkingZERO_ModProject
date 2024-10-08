#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSBattleTrainingSettingListDataAsset.generated.h"

class USSBattleTrainingSettingDataAsset;

UCLASS(Blueprintable)
class USSBattleTrainingSettingListDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSBattleTrainingSettingDataAsset*> PtrRecords;
    
    USSBattleTrainingSettingListDataAsset();

};

