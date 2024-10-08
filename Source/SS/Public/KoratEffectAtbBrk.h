#pragma once
#include "CoreMinimal.h"
#include "KoratEffectAtbBrk.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratEffectAtbBrk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    SS_API FKoratEffectAtbBrk();
};

