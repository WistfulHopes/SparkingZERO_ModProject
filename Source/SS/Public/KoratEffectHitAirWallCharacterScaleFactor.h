#pragma once
#include "CoreMinimal.h"
#include "KoratEffectHitAirWallCharacterScaleFactor.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectHitAirWallCharacterScaleFactor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    SS_API FKoratEffectHitAirWallCharacterScaleFactor();
};

