#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Evaluation/MovieSceneEvaluationTrack.h"
#include "KoratMovieSceneSoundSceneTrack.generated.h"

class UEnum;
class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneSoundSceneTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* Enum;
    
public:
    UKoratMovieSceneSoundSceneTrack();

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

};


