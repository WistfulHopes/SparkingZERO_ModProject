#pragma once

#include "CoreMinimal.h"
#include "ISequencerTrackEditor.h"
#include "MovieSceneTrack.h"
#include "KoratMovieSceneVisibilityTrack.h"
#include "MovieSceneTrackEditor.h"
#include "Sections/MovieSceneBoolSection.h"
#include "ISequencerSection.h"
#include "MovieSceneSection.h"
#include "Widgets/SNullWidget.h"

class FKoratMovieSceneVisibilityTrackEditor : public FMovieSceneTrackEditor
{
public:
    FKoratMovieSceneVisibilityTrackEditor(TSharedRef<ISequencer> InSequencer)
        : FMovieSceneTrackEditor(InSequencer) {}

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
    {
        return MakeShareable(new FKoratMovieSceneVisibilityTrackEditor(InSequencer));
    }

    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override;
    
    virtual bool SupportsSequence(UMovieSceneSequence* InSequence) const override
    {
        return true;
    }

    virtual void BuildAddTrackMenu(FMenuBuilder& MenuBuilder) override;
    
    void HandleAddKoratMovieSceneVisibilityTrackForSelectedObjects();

    virtual void ExtendObjectBindingTrackMenu(
        TSharedRef<FExtender> Extender,
        const TArray<FGuid>& ObjectBindings,
        const UClass* ObjectClass) override;

        virtual TSharedRef<ISequencerSection> MakeSectionInterface(
            UMovieSceneSection& SectionObject,
            UMovieSceneTrack& Track,
            FGuid ObjectBinding) override;

private:
    void HandleAddKoratMovieSceneVisibilityTrack(FGuid Binding);
};

class FKoratMovieSceneVisibilitySection : public ISequencerSection
{
public:
    FKoratMovieSceneVisibilitySection(UMovieSceneSection& InSection, TSharedRef<ISequencer> InSequencer)
        : Section(&InSection)
        , Sequencer(InSequencer)
    {}

    virtual UMovieSceneSection* GetSectionObject() override
    {
        return Section;
    }
    
    virtual int32 OnPaintSection(FSequencerSectionPainter& Painter) const override;
    
private:
    UMovieSceneSection* Section;

    TWeakPtr<ISequencer> Sequencer;
};