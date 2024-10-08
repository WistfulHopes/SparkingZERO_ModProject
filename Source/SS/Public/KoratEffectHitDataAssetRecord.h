#pragma once
#include "CoreMinimal.h"
#include "ESSHitEffectType.h"
#include "KoratEffectHitDataAssetByColor.h"
#include "KoratEffectHitDataList.h"
#include "KoratWorldPointLightDataList.h"
#include "KoratEffectHitDataAssetRecord.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratEffectHitDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratEffectHitDataAssetByColor> LevelSequenceByColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratWorldPointLightDataList DefaultWorldToonPointLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHitEffectType HitEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectHitDataList SlashOverrideEffect;
    
    SS_API FKoratEffectHitDataAssetRecord();
};

