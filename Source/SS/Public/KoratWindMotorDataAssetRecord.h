#pragma once
#include "CoreMinimal.h"
#include "KoratWindMotorDataAssetRecord.generated.h"

class USSBulletWindMotorComponent;

USTRUCT(BlueprintType)
struct FKoratWindMotorDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSBulletWindMotorComponent> Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KoratWindSpeed;
    
    SS_API FKoratWindMotorDataAssetRecord();
};

