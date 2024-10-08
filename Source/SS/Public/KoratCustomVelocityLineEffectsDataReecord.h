#pragma once
#include "CoreMinimal.h"
#include "KoratVelocityLineEffectDataList.h"
#include "KoratVelocityLineEffectsDataAssetRecord.h"
#include "KoratCustomVelocityLineEffectsDataReecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratCustomVelocityLineEffectsDataReecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratVelocityLineEffectDataList, FKoratVelocityLineEffectsDataAssetRecord> CustomRecoreds;
    
    SS_API FKoratCustomVelocityLineEffectsDataReecord();
};

