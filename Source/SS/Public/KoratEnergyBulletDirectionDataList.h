#pragma once
#include "CoreMinimal.h"
#include "KoratEnergyBulletDirectionDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEnergyBulletDirectionDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEnergyBulletDirectionDataList();
};

