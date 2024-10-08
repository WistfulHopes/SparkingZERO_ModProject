#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratActionDataList.h"
#include "SSCharacterEnergyBulletRecord.h"
#include "SSCharacterEnergyBullet.generated.h"

class UKoratBulletEffectDataAsset;
class UKoratEffectBulletDecalAndKnockDataAsset;
class UKoratEffectBulletRatDataAsset;
class UKoratEffectDrownOutDataAsset;
class UKoratEffectExpDataAsset;
class UKoratEffectHitDataAsset;
class UKoratEffectRatDataAsset;
class UKoratEffectStaDataAsset;
class UKoratHitBackMovementDataAsset;
class UKoratHitStopDataAsset;
class UKoratWindMotorDataAsset;
class UKoratWorldPointLightDataAsset;
class USSBulletSettingDataAsset;
class USSBulletVisualDataAsset;

UCLASS(Blueprintable)
class USSCharacterEnergyBullet : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBulletEffectDataAsset* BulletEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratWorldPointLightDataAsset* WorldPointLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratWindMotorDataAsset* WindMotorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectExpDataAsset* EffectExpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectDrownOutDataAsset* EffectDrownOutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectHitDataAsset* EffectHitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectBulletRatDataAsset* EffectBulletRatData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectBulletDecalAndKnockDataAsset* EffectBulletDecalAndKnockData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectRatDataAsset* EffectRatData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectStaDataAsset* EffectStaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratHitBackMovementDataAsset* HitBackMovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratHitStopDataAsset* HitStopData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBulletVisualDataAsset* BulletVisualData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBulletSettingDataAsset* BulletSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratActionDataList, FSSCharacterEnergyBulletRecord> EnergyBulletParameter;
    
public:
    USSCharacterEnergyBullet();

};

