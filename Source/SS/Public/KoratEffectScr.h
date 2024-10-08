#pragma once
#include "CoreMinimal.h"
#include "KoratEffectScr.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratEffectScr {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequenceIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequenceLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequenceOut;
    
    SS_API FKoratEffectScr();
};

