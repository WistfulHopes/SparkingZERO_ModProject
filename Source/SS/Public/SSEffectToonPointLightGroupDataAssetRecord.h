#pragma once
#include "CoreMinimal.h"
#include "KoratEffectToonPointLightGroupDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "SSEffectToonPointLightGroupDataAssetRecord.generated.h"

UCLASS(Blueprintable)
class USSEffectToonPointLightGroupDataAssetRecord : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectToonPointLightGroupDataAssetRecord EffectToonPointLightGroupDataAssetRecord;
    
    USSEffectToonPointLightGroupDataAssetRecord();

};

