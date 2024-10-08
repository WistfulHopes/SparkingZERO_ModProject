#pragma once
#include "CoreMinimal.h"
#include "KoratMovieSceneSequenceGetter.generated.h"

class ALevelSequenceActor;
class ULevelSequencePlayer;
class UMovieSceneSequence;

USTRUCT(BlueprintType)
struct FKoratMovieSceneSequenceGetter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* SequencePlayer;
    
public:
    SS_API FKoratMovieSceneSequenceGetter();
};

