#pragma once
#include "CoreMinimal.h"
#include "KoratBulletEffectDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratBulletEffectDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    SS_API FKoratBulletEffectDataAssetRecord();
};

