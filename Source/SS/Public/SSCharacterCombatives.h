#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratActionDataList.h"
#include "KoratCharacterDataList.h"
#include "SSCharacterCombativesRecord.h"
#include "SSCharacterCombatives.generated.h"

class UKoratEffectHitDataAsset;
class UKoratEquipmentPointLightDataAsset;
class UKoratEquipmentRimLightDataAsset;
class UKoratHitBackMovementDataAsset;
class UKoratHitStopDataAsset;
class UKoratWorldPointLightDataAsset;
class USSCharacterCombativesDataAsset;

UCLASS(Blueprintable)
class USSCharacterCombatives : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList OpponentCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCharacterCombativesDataAsset* CombativesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEquipmentPointLightDataAsset* EquipmentPointLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEquipmentRimLightDataAsset* EquipmentRimLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratWorldPointLightDataAsset* WorldPointLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectHitDataAsset* EffectHitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratHitBackMovementDataAsset* HitBackMovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratHitStopDataAsset* HitStopData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratActionDataList, FSSCharacterCombativesRecord> CombativesParameter;
    
public:
    USSCharacterCombatives();

};

