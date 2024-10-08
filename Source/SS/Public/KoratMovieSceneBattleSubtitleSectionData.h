#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "KoratMovieSceneBattleSubtitlePayload.h"
#include "KoratMovieSceneBattleSubtitleSectionData.generated.h"

USTRUCT(BlueprintType)
struct FKoratMovieSceneBattleSubtitleSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMovieSceneBattleSubtitlePayload> KeyValues;
    
public:
    SS_API FKoratMovieSceneBattleSubtitleSectionData();
};

