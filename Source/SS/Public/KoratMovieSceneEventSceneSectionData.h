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
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMovieSceneEventScenePayload> KeyValues;
    
public:
    FKoratMovieSceneEventSceneSectionData();
};

