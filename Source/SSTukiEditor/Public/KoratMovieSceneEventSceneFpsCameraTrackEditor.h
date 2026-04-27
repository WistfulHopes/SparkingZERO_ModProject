#pragma once

#include "CoreMinimal.h"
#include "PropertyTrackEditor.h"
#include "KoratMovieSceneEventSceneFpsCameraTrack.h"
#include "MovieSceneTrack.h"
#include "ISequencerTrackEditor.h"

class FKoratEventSceneFpsCameraTrackEditor : public FPropertyTrackEditor<UKoratMovieSceneEventSceneFpsCameraTrack>
{
public:
    FKoratEventSceneFpsCameraTrackEditor(TSharedRef<ISequencer> InSequencer);

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer);

    virtual bool SupportsSequence(UMovieSceneSequence* InSequence) const override;
    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override;
    virtual void BuildAddTrackMenu(FMenuBuilder& MenuBuilder) override;

    void HandleAddKoratEventSceneFpsCameraTrackForSelectedObjects();

private:
    void HandleAddKoratEventSceneFpsCameraTrack(FGuid Binding);

    virtual void GenerateKeysFromPropertyChanged(const FPropertyChangedParams&, UMovieSceneSection* SectionToKey, FGeneratedTrackKeys&) override;
};
