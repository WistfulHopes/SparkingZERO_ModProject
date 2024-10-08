#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSBulletRatSpawnActorManagerParameterWithInit.generated.h"

USTRUCT(BlueprintType)
struct FSSBulletRatSpawnActorManagerParameterWithInit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DistanceXYCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PrevLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PrevSpawnLocation;
    
    SS_API FSSBulletRatSpawnActorManagerParameterWithInit();
};

