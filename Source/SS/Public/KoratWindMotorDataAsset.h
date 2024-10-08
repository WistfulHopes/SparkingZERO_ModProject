#pragma once
#include "CoreMinimal.h"
#include "EWindSimFieldMotorType.h"
#include "EKoratWindSpeedClass.h"
#include "KoratWindMotorDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "WindMotorOutputCharacteristics.h"
#include "KoratWindMotorDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratWindMotorDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratWindMotorDataAssetRecord> Records;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratWindSpeedClass, float> WindSpeedClassToWindVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KoratWindSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWindSimFieldMotorType, FWindMotorOutputCharacteristics> WindOutputCharacteristics;
    
public:
    UKoratWindMotorDataAsset();

};

