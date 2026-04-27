#pragma once

#include "CoreMinimal.h"
#include "ISequencerTrackEditor.h"
#include "MovieSceneTrack.h"
#include "KoratMovieSceneEventSceneTrack.h"
#include "MovieSceneTrackEditor.h"
#include "KoratMovieSceneEventSceneSection.h"
#include "ISequencerSection.h"
#include "MovieSceneSection.h"
#include "Widgets/SNullWidget.h"

class FKoratEventSceneTrackEditor : public FMovieSceneTrackEditor
{
public:
    FKoratEventSceneTrackEditor(TSharedRef<ISequencer> InSequencer)
        : FMovieSceneTrackEditor(InSequencer) {}

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
    {
        return MakeShareable(new FKoratEventSceneTrackEditor(InSequencer));
    }

    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override;
    
    virtual bool SupportsSequence(UMovieSceneSequence* InSequence) const override
    {
        return true;
    }

    virtual void BuildAddTrackMenu(FMenuBuilder& MenuBuilder) override;
    
    void HandleAddKoratEventSceneTrackForSelectedObjects();

    virtual void ExtendObjectBindingTrackMenu(
        TSharedRef<FExtender> Extender,
        const TArray<FGuid>& ObjectBindings,
        const UClass* ObjectClass) override;

        virtual TSharedRef<ISequencerSection> MakeSectionInterface(
            UMovieSceneSection& SectionObject,
            UMovieSceneTrack& Track,
            FGuid ObjectBinding) override;

private:
    void HandleAddKoratEventSceneTrack(FGuid Binding);
};

class FKoratEventSceneSection : public ISequencerSection
{
public:
    FKoratEventSceneSection(UMovieSceneSection& InSection)
        : Section(&InSection)
    {}

    virtual UMovieSceneSection* GetSectionObject() override
    {
        return Section;
    }
    
    virtual int32 OnPaintSection(FSequencerSectionPainter& Painter) const override;

    virtual TSharedRef<SWidget> GenerateSectionWidget() override
    {
        return SNullWidget::NullWidget;
    }

private:
    UMovieSceneSection* Section;
};