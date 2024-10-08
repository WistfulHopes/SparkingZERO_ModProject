#pragma once
#include "CoreMinimal.h"
#include "KoratEffectSta.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratEffectSta {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequenceIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequenceLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequenceOut;
    
    SS_API FKoratEffectSta();
};

