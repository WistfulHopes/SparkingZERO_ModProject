#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterSearchParameterChanging.generated.h"

class UKoratSearchParamDataAsset;

USTRUCT(BlueprintType)
struct FKoratCharacterSearchParameterChanging {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewingTargetLockOnSecScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSearchRadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSearchLockOnSecScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuraSearchDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuraSearchLockOnSecScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuraLostSecScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EasyFindingScaleByTargetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratSearchParamDataAsset* EquipSearchParamData;
    
    SS_API FKoratCharacterSearchParameterChanging();
};

