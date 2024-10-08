#pragma once
#include "CoreMinimal.h"
#include "KoratWorldPointLightDataList.h"
#include "KoratEffectExpDataAssetByColor.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratEffectExpDataAssetByColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratWorldPointLightDataList ColorBranchWorldToonPointLight;
    
    SS_API FKoratEffectExpDataAssetByColor();
};

