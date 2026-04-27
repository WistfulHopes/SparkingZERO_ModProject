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
	
    void AddKey(const FFrameNumber& InTime, const FKoratMovieSceneBattleSubtitlePayload& InPayload);
    const TArray<FKoratMovieSceneBattleSubtitlePayload>& GetKeyValues() const
    {
        return KeyValues;
    }
    const TArray<FFrameNumber>& GetTimes() const
    {
        return Times;
    }

private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMovieSceneBattleSubtitlePayload> KeyValues;
    
public:
    SS_API FKoratMovieSceneBattleSubtitleSectionData();
};

