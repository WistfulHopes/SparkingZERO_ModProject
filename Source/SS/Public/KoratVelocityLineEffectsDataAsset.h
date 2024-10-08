#pragma once
#include "CoreMinimal.h"
#include "KoratCustomVelocityLineEffectsDataReecord.h"
#include "KoratVelocityLineEffectTypeDataList.h"
#include "KoratVelocityLineEffectsDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratVelocityLineEffectsDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratVelocityLineEffectsDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratVelocityLineEffectTypeDataList, FKoratVelocityLineEffectsDataAssetRecord> CommonRecord2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratVelocityLineEffectTypeDataList, FKoratCustomVelocityLineEffectsDataReecord> CustomRecoreds;
    
public:
    UKoratVelocityLineEffectsDataAsset();

};

