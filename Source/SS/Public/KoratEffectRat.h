#pragma once
#include "CoreMinimal.h"
#include "KoratEffectRat.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratEffectRat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    SS_API FKoratEffectRat();
};

