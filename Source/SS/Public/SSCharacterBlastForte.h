#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratActionDataList.h"
#include "KoratBlastActionCategoryDataList.h"
#include "KoratBlastActionDataAssetRecord.h"
#include "KoratBlastActionDataList.h"
#include "KoratCharacterBlastForteParameter.h"
#include "SSCharacterBlastForte.generated.h"

class UKoratEffectExpDataAsset;
class UKoratEffectHitDataAsset;
class UKoratEffectRatDataAsset;
class UKoratEffectStaDataAsset;
class UKoratEquipmentPointLightDataAsset;
class UKoratEquipmentRimLightDataAsset;
class UKoratHitBackMovementDataAsset;
class UKoratWorldPointLightDataAsset;
class USSBlastForteDataAsset;
class USSCharacterItemEquipment;

UCLASS(Blueprintable)
class USSCharacterBlastForte : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBlastForteDataAsset* BlastForte1Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBlastForteDataAsset* BlastForte2Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlastActionDataList BlastForte1ActionDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlastActionDataList BlastForte2ActionDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratHitBackMovementDataAsset* HitBackMovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectExpDataAsset* EffectExpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectHitDataAsset* EffectHitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectRatDataAsset* EffectRatData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectStaDataAsset* EffectStaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEquipmentPointLightDataAsset* EquipmentPointLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEquipmentRimLightDataAsset* EquipmentRimLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratWorldPointLightDataAsset* WorldPointLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterItemEquipment* ItemEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterBlastForteParameter BlastForte1Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterBlastForteParameter BlastForte2Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlastActionDataAssetRecord BlastForte1Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlastActionDataAssetRecord BlastForte2Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratActionDataList, FKoratBlastActionCategoryDataList> BlastForte1ActionCategoryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratActionDataList, FKoratBlastActionCategoryDataList> BlastForte2ActionCategoryMap;
    
public:
    USSCharacterBlastForte();

};

