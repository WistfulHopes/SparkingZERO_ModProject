#pragma once
#include "CoreMinimal.h"
#include "EShakeForceType.h"
#include "KoratShakeForceTypeDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratShakeForceTypeDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratShakeForceTypeDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EShakeForceType, FKoratShakeForceTypeDataAssetRecord> EnumRecords;
    
public:
    UKoratShakeForceTypeDataAsset();

};

