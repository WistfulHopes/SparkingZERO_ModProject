#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterEffectColorSetDataTypeDataList.h"
#include "KoratCustomEffectColorSetting.generated.h"

class UKoratCustomEffectColorDataAsset;

USTRUCT(BlueprintType)
struct FKoratCustomEffectColorSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetDataTypeDataList TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCustomEffectColorDataAsset* CustomEffectColorDataAsset;
    
    SS_API FKoratCustomEffectColorSetting();
};

