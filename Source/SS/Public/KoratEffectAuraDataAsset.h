#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterPointLightData.h"
#include "KoratCharacterRimLightData.h"
#include "KoratRimLightFrequencyData.h"
#include "MutualDataAsset.h"
#include "KoratEffectAuraDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectAuraDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterPointLightData EquipmentPointLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterPointLightData AuraPointLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterRimLightData AuraRimLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRimLightFrequencyData RimLightFrequencyLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRimLightFrequencyLv1Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRimLightFrequencyData RimLightFrequencyLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRimLightFrequencyLv2Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRimLightFrequencyData RimLightFrequencyLv3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRimLightFrequencyLv3Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRimLightFrequencyData RimLightFrequencyLv4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRimLightFrequencyLv4Enable;
    
    UKoratEffectAuraDataAsset();

};

