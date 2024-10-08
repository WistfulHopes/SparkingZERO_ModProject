#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSLine.h"
#include "SSBulletCharacterCollisionInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSBulletCharacterCollisionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSLine CollisionSweep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CharacterLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitCount;
    
    SS_API FSSBulletCharacterCollisionInfo();
};

