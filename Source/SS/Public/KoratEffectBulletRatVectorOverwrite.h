#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratEffectBulletRatVectorOverwrite.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectBulletRatVectorOverwrite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VecotorValue;
    
    SS_API FKoratEffectBulletRatVectorOverwrite();
};

