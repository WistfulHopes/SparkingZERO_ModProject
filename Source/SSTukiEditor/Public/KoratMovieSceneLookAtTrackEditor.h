#pragma once

#include "CoreMinimal.h"
#include "PropertyTrackEditor.h"
#include "KoratMovieSceneLookAtTrack.h"
#include "MovieSceneTrack.h"
#include "ISequencerTrackEditor.h"

class FKoratLookAtTrackEditor : public FPropertyTrackEditor<UKoratMovieSceneLookAtTrack>
{
public:
    FKoratLookAtTrackEditor(TSharedRef<ISequencer> InSequencer);

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer);

    virtual bool SupportsSequence(UMovieSceneSequence* InSequence) const override;
    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override;
    virtual void BuildAddTrackMenu(FMenuBuilder& MenuBuilder) override;

    void HandleAddKoratLookAtTrackForSelectedObjects();

private:
    void HandleAddKoratLookAtTrack(FGuid Binding);

    virtual void GenerateKeysFromPropertyChanged(const FPropertyChangedParams&, UMovieSceneSection* SectionToKey, FGeneratedTrackKeys&) override;
};
