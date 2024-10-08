#pragma once
#include "CoreMinimal.h"
#include "KoratEnergyBulletDirectionDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "SSEnergyBulletDirectionDataAssetRecord.generated.h"

UCLASS(Blueprintable)
class USSEnergyBulletDirectionDataAssetRecord : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEnergyBulletDirectionDataAssetRecord EnergyBulletDirectionDataAssetRecord;
    
    USSEnergyBulletDirectionDataAssetRecord();

};

