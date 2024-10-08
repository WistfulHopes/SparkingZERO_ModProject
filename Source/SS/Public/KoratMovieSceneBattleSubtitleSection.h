#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "KoratMovieSceneBattleSubtitleSectionData.h"
#include "KoratMovieSceneBattleSubtitleSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneBattleSubtitleSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMovieSceneBattleSubtitleSectionData EventData;
    
public:
    UKoratMovieSceneBattleSubtitleSection();

};

