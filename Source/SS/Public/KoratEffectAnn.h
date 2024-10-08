#pragma once
#include "CoreMinimal.h"
#include "KoratEffectAnn.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratEffectAnn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    SS_API FKoratEffectAnn();
};

