#pragma once
#include "CoreMinimal.h"
#include "KoratEffectEnv.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratEffectEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequenceIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequenceLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequenceOut;
    
    SS_API FKoratEffectEnv();
};

