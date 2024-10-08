#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBulletDecalDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectBulletDecalDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectBulletDecalDataList();
};

