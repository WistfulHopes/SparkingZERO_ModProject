#pragma once

#include "CoreMinimal.h"
#include "ISequencerTrackEditor.h"
#include "MovieSceneTrack.h"
#include "MovieSceneKoratFreeMaterialTrack.h"
#include "MovieSceneTrackEditor.h"
#include "Sections/MovieSceneParameterSection.h"
#include "ISequencerSection.h"
#include "MovieSceneSection.h"
#include "Widgets/SNullWidget.h"

class FKoratFreeMaterialTrackEditor : public FMovieSceneTrackEditor
{
public:
    FKoratFreeMaterialTrackEditor(TSharedRef<ISequencer> InSequencer)
        : FMovieSceneTrackEditor(InSequencer) {}

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
    {
        return MakeShareable(new FKoratFreeMaterialTrackEditor(InSequencer));
    }

    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override;
    
    virtual bool SupportsSequence(UMovieSceneSequence* InSequence) const override
    {
        return true;
    }

    virtual void BuildAddTrackMenu(FMenuBuilder& MenuBuilder) override;
    virtual void BuildTrackContextMenu(FMenuBuilder& MenuBuilder, UMovieSceneTrack* Track) override;
    
    void HandleAddKoratFreeMaterialTrackForSelectedObjects();

    virtual void ExtendObjectBindingTrackMenu(
        TSharedRef<FExtender> Extender,
        const TArray<FGuid>& ObjectBindings,
        const UClass* ObjectClass) override;

        virtual TSharedRef<ISequencerSection> MakeSectionInterface(
            UMovieSceneSection& SectionObject,
            UMovieSceneTrack& Track,
            FGuid ObjectBinding) override;

private:
    void HandleAddKoratFreeMaterialTrack(FGuid Binding);
};

class FKoratFreeMaterialSection : public ISequencerSection
{
public:
    FKoratFreeMaterialSection(UMovieSceneSection& InSection, TSharedRef<ISequencer> InSequencer)
        : Section(&InSection)
        , Sequencer(InSequencer)
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
    
    void ExtendSectionContextMenu(FMenuBuilder& MenuBuilder, UMovieSceneSection* Section);

private:
    UMovieSceneSection* Section;

    TWeakPtr<ISequencer> Sequencer;
    void AddParameterSubMenu(FMenuBuilder& MenuBuilder, UMovieSceneParameterSection* ParamSection);
};