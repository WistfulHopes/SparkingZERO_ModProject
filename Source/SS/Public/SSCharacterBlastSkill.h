#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESSBlastDemoBranchType.h"
#include "KoratActionDataList.h"
#include "KoratBlastActionCategoryDataList.h"
#include "KoratBlastActionDataAssetRecord.h"
#include "KoratBlastActionDataList.h"
#include "KoratCharacterBlastSkillParameter.h"
#include "SSCharacterBlastSkill.generated.h"

class UAnimSequence;
class UKoratEffectExpDataAsset;
class UKoratEffectHitDataAsset;
class UKoratEffectRatDataAsset;
class UKoratEffectStaDataAsset;
class UKoratEquipmentPointLightDataAsset;
class UKoratEquipmentRimLightDataAsset;
class UKoratHitBackMovementDataAsset;
class UKoratWorldPointLightDataAsset;
class USSBlastSkillDataAsset;
class USSCharacterItemEquipment;

UCLASS(Blueprintable)
class USSCharacterBlastSkill : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBlastSkillDataAsset* BlastSkill1Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBlastSkillDataAsset* BlastSkill2Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlastActionDataList BlastSkill1ActionDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlastActionDataList BlastSkill2ActionDataList;
    
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
    FKoratCharacterBlastSkillParameter BlastSkill1Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterBlastSkillParameter BlastSkill2Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlastActionDataAssetRecord BlastSkill1Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlastActionDataAssetRecord BlastSkill2Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratActionDataList, FKoratBlastActionCategoryDataList> BlastSkill1ActionCategoryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratActionDataList, FKoratBlastActionCategoryDataList> BlastSkill2ActionCategoryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESSBlastDemoBranchType, TSoftObjectPtr<UAnimSequence>> BlastSkill1DashLPAnimOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESSBlastDemoBranchType, TSoftObjectPtr<UAnimSequence>> BlastSkill2DashLPAnimOverrides;
    
public:
    USSCharacterBlastSkill();

    UFUNCTION(BlueprintCallable)
    UAnimSequence* GetBlastDashAnimOverrideOfBlastSkill2(ESSBlastDemoBranchType InType) const;
    
    UFUNCTION(BlueprintCallable)
    UAnimSequence* GetBlastDashAnimOverrideOfBlastSkill1(ESSBlastDemoBranchType InType) const;
    
};

