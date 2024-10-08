#pragma once
#include "CoreMinimal.h"
#include "KoratBattleScenePhaseDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratBattleScenePhaseDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratBattleScenePhaseDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratBattleScenePhaseDataAssetRecord> Records;
    
public:
    UKoratBattleScenePhaseDataAsset();

};

