#pragma once
#include "CoreMinimal.h"
#include "KoratBulletKeyDataList.h"
#include "SSCharacterEnergyBulletParameter.h"
#include "SSCharacterEnergyBulletRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterEnergyBulletRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratBulletKeyDataList, FSSCharacterEnergyBulletParameter> AdditionalBullets;
    
    SS_API FSSCharacterEnergyBulletRecord();
};

