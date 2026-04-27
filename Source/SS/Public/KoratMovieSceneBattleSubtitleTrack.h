#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Evaluation/MovieSceneEvaluationTrack.h"
#include "Tracks/MovieSceneEventTrack.h"
#include "KoratMovieSceneBattleSubtitleTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneBattleSubtitleTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenBackwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireEventsAtPosition EventPosition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UKoratMovieSceneBattleSubtitleTrack();

    virtual bool SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const override;
    virtual UMovieSceneSection* CreateNewSection() override;
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;
    virtual void AddSection(UMovieSceneSection& Section) override;
    virtual void RemoveSection(UMovieSceneSection& Section) override;
    virtual bool HasSection(const UMovieSceneSection& Section) const override;
    virtual bool IsEmpty() const override;
    virtual const TArray<UMovieSceneSection*>& GetAllSections() const override;
#if WITH_EDITOR
    virtual FText GetDisplayName() const override;
#endif
    virtual void PostCompile(FMovieSceneEvaluationTrack& Track, const FMovieSceneTrackCompilerArgs& Args) const override;

};

