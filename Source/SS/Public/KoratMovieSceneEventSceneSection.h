#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "KoratMovieSceneEventSceneSectionData.h"
#include "KoratMovieSceneEventSceneSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneEventSceneSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMovieSceneEventSceneSectionData EventData;
    
public:
    UKoratMovieSceneEventSceneSection();

};

