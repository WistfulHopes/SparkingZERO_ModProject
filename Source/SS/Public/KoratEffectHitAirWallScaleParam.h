#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterFigureDataList.h"
#include "KoratEffectHitAirWallBulletScaleFactor.h"
#include "KoratEffectHitAirWallCharacterScaleFactor.h"
#include "KoratEffectHitAirWallScaleParam.generated.h"

class USSBulletShapeBase;

USTRUCT(BlueprintType)
struct FKoratEffectHitAirWallScaleParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultCharacterFigureScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterFigureDataList, FKoratEffectHitAirWallCharacterScaleFactor> CharacterFigureScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultBulletFigureScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<USSBulletShapeBase>, FKoratEffectHitAirWallBulletScaleFactor> BulletFigureScale;
    
    SS_API FKoratEffectHitAirWallScaleParam();
};

