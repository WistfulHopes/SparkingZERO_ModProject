#pragma once
#include "CoreMinimal.h"
#include "SSBulletRatSpawnActorManagerParameterResident.generated.h"

USTRUCT(BlueprintType)
struct FSSBulletRatSpawnActorManagerParameterResident {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SpawnNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ExistNum;
    
    SS_API FSSBulletRatSpawnActorManagerParameterResident();
};

