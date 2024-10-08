#pragma once
#include "CoreMinimal.h"
#include "KoratBGMDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "SSBGMDataAsset.generated.h"

UCLASS(Blueprintable)
class USSBGMDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataAssetRecord BGMDataAssetRecord;
    
    USSBGMDataAsset();

};

