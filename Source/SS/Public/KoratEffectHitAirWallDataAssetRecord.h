#pragma once
#include "CoreMinimal.h"
#include "KoratEffectHitAirWallScaleParam.h"
#include "KoratEffectHitAirWallDataAssetRecord.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratEffectHitAirWallDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectHitAirWallScaleParam ScaleParam;
    
    SS_API FKoratEffectHitAirWallDataAssetRecord();
};

