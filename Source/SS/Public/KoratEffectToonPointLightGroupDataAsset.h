#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratEffectToonPointLightGroupDataAsset.generated.h"

class USSEffectToonPointLightGroupDataAssetRecord;

UCLASS(Blueprintable)
class UKoratEffectToonPointLightGroupDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSEffectToonPointLightGroupDataAssetRecord*> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSEffectToonPointLightGroupDataAssetRecord* DefaultRecod;
    
public:
    UKoratEffectToonPointLightGroupDataAsset();

};

