#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBoneSocketDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratEffectBoneSocketDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectBoneSocketDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEffectBoneSocketDataAssetRecord> Records;
    
public:
    UKoratEffectBoneSocketDataAsset();

};

