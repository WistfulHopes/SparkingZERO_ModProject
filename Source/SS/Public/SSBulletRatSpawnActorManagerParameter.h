#pragma once
#include "CoreMinimal.h"
#include "SSBulletRatSpawnActorManagerParameterResident.h"
#include "SSBulletRatSpawnActorManagerParameterWithInit.h"
#include "SSBulletRatSpawnActorManagerParameter.generated.h"

USTRUCT(BlueprintType)
struct FSSBulletRatSpawnActorManagerParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSBulletRatSpawnActorManagerParameterWithInit WithInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSBulletRatSpawnActorManagerParameterResident Resident;
    
    SS_API FSSBulletRatSpawnActorManagerParameter();
};

