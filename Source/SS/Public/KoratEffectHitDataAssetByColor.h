#pragma once
#include "CoreMinimal.h"
#include "KoratWorldPointLightDataList.h"
#include "KoratEffectHitDataAssetByColor.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratEffectHitDataAssetByColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratWorldPointLightDataList ColorBranchWorldToonPointLight;
    
    SS_API FKoratEffectHitDataAssetByColor();
};

