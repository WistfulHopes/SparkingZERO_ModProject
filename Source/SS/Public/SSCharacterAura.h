#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratAuraLevelDataList.h"
#include "SSCharacterAuraRecord.h"
#include "SSCharacterAura.generated.h"

class UKoratAuraPointLightDataAsset;
class UKoratAuraRimLightDataAsset;
class UKoratRimLightFrequencyDataAsset;
class USSAuraAssignDataAsset;
class USSAuraDataAsset;

UCLASS(Blueprintable)
class USSCharacterAura : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAuraPointLightDataAsset* AuraPointLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAuraRimLightDataAsset* AuraRimLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratRimLightFrequencyDataAsset* RimLightFrequencyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSAuraDataAsset* AuraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSAuraAssignDataAsset* AuraAssignData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratAuraLevelDataList, FSSCharacterAuraRecord> AuraTable;
    
public:
    USSCharacterAura();

};

