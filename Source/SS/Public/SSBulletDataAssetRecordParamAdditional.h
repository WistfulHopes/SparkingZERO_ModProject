#pragma once
#include "CoreMinimal.h"
#include "KoratBulletEffectDataList.h"
#include "SSBulletDataAssetRecordParamAdditional.generated.h"

class ASSBulletActor;
class USSBulletParamDataAsset;

USTRUCT(BlueprintType)
struct FSSBulletDataAssetRecordParamAdditional {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBulletEffectDataList Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBulletParamDataAsset* Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASSBulletActor> BulletActorBP;
    
    SS_API FSSBulletDataAssetRecordParamAdditional();
};

