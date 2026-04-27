#pragma once

#include "CoreMinimal.h"
#include "PropertyTrackEditor.h"
#include "KoratMovieSceneUIActionBlendOptionTrack.h"
#include "MovieSceneTrack.h"
#include "ISequencerTrackEditor.h"

class FKoratUIActionBlendOptionTrackEditor : public FPropertyTrackEditor<UKoratMovieSceneUIActionBlendOptionTrack>
{
public:
    FKoratUIActionBlendOptionTrackEditor(TSharedRef<ISequencer> InSequencer);

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer);

    virtual bool SupportsSequence(UMovieSceneSequence* InSequence) const override;
    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override;
    virtual void BuildAddTrackMenu(FMenuBuilder& MenuBuilder) override;

    void HandleAddKoratUIActionBlendOptionTrackForSelectedObjects();

private:
    void HandleAddKoratUIActionBlendOptionTrack(FGuid Binding);

    virtual void GenerateKeysFromPropertyChanged(const FPropertyChangedParams&, UMovieSceneSection* SectionToKey, FGeneratedTrackKeys&) override;
};
