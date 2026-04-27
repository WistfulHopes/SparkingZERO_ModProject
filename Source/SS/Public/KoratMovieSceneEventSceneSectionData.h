#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "KoratMovieSceneEventScenePayload.h"
#include "KoratMovieSceneEventSceneSectionData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMovieSceneEventSceneSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
	
    void AddKey(const FFrameNumber& InTime, const FKoratMovieSceneEventScenePayload& InPayload);
    const TArray<FKoratMovieSceneEventScenePayload>& GetKeyValues() const
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
    TArray<FKoratMovieSceneEventScenePayload> KeyValues;
    
public:
    FKoratMovieSceneEventSceneSectionData();
};