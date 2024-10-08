#pragma once
#include "CoreMinimal.h"
#include "KoratBulletEffectDataList.h"
#include "KoratBulletKeyDataList.h"
#include "SSBulletDataAssetRecordParamAdditional.h"
#include "SSBulletDataAssetRecordParam.generated.h"

class ASSBulletActor;
class USSBulletParamDataAsset;

USTRUCT(BlueprintType)
struct FSSBulletDataAssetRecordParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBulletEffectDataList Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBulletParamDataAsset* Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASSBulletActor> BulletActorBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratBulletKeyDataList, FSSBulletDataAssetRecordParamAdditional> AdditionalBullets;
    
    SS_API FSSBulletDataAssetRecordParam();
};

