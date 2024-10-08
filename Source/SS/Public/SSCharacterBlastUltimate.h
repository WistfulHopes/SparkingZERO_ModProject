#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESSBlastDemoBranchType.h"
#include "KoratActionDataList.h"
#include "KoratBlastActionCategoryDataList.h"
#include "KoratBlastActionDataAssetRecord.h"
#include "KoratBlastActionDataList.h"
#include "KoratCharacterBlastUltimateParameter.h"
#include "SSCharacterBlastUltimate.generated.h"

class UAnimSequence;
class UKoratEffectExpDataAsset;
class UKoratEffectHitDataAsset;
class UKoratEffectRatDataAsset;
class UKoratEffectStaDataAsset;
class UKoratEquipmentPointLightDataAsset;
class UKoratEquipmentRimLightDataAsset;
class UKoratHitBackMovementDataAsset;
class UKoratWorldPointLightDataAsset;
class USSBlastUltimateDataAsset;
class USSCharacterItemEquipment;

UCLASS(Blueprintable)
class USSCharacterBlastUltimate : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBlastUltimateDataAsset* BlastUltimateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlastActionDataList BlastUltimateActionDataList;
    
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
    FKoratCharacterBlastUltimateParameter BlastUltimateParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlastActionDataAssetRecord BlastUltimateActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratActionDataList, FKoratBlastActionCategoryDataList> BlastUltimateActionCategoryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESSBlastDemoBranchType, TSoftObjectPtr<UAnimSequence>> BlastDashLPAnimOverrides;
    
public:
    USSCharacterBlastUltimate();

    UFUNCTION(BlueprintCallable)
    UAnimSequence* GetBlastDashAnimOverride(ESSBlastDemoBranchType InType) const;
    
};

