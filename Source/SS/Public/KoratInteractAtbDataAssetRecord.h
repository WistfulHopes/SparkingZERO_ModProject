#pragma once
#include "CoreMinimal.h"
#include "KoratInteractAtbDataAssetRecord.generated.h"

class UKoratEffectAtbDataAsset;
class UKoratParticleBranchDataAsset;

USTRUCT(BlueprintType)
struct FKoratInteractAtbDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectAtbDataAsset* EffectAtbDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratParticleBranchDataAsset* ParticleBranchRecored;
    
    SS_API FKoratInteractAtbDataAssetRecord();
};

