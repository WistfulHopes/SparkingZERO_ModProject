#pragma once

#include "CoreMinimal.h"
#include "PropertyTrackEditor.h"
#include "KoratMovieSceneAttachTrack.h"
#include "MovieSceneTrack.h"
#include "ISequencerTrackEditor.h"

class FKoratAttachTrackEditor : public FPropertyTrackEditor<UKoratMovieSceneAttachTrack>
{
public:
    FKoratAttachTrackEditor(TSharedRef<ISequencer> InSequencer);

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer);

    virtual bool SupportsSequence(UMovieSceneSequence* InSequence) const override;
    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override;
    virtual void BuildAddTrackMenu(FMenuBuilder& MenuBuilder) override;

    void HandleAddKoratAttachTrackForSelectedObjects();

private:
    void HandleAddKoratAttachTrack(FGuid Binding);

    virtual void GenerateKeysFromPropertyChanged(const FPropertyChangedParams&, UMovieSceneSection* SectionToKey, FGeneratedTrackKeys&) override;
};
