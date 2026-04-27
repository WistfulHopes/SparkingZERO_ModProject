#pragma once

#include "CoreMinimal.h"
#include "PropertyTrackEditor.h"
#include "KoratMovieSceneEventSceneImpactTrack.h"
#include "MovieSceneTrack.h"
#include "ISequencerTrackEditor.h"

class FKoratEventSceneImpactTrackEditor : public FPropertyTrackEditor<UKoratMovieSceneEventSceneImpactTrack>
{
public:
    FKoratEventSceneImpactTrackEditor(TSharedRef<ISequencer> InSequencer);

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer);

    virtual bool SupportsSequence(UMovieSceneSequence* InSequence) const override;
    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override;
    virtual void BuildAddTrackMenu(FMenuBuilder& MenuBuilder) override;

    void HandleAddKoratEventSceneImpactTrackForSelectedObjects();

private:
    void HandleAddKoratEventSceneImpactTrack(FGuid Binding);

    virtual void GenerateKeysFromPropertyChanged(const FPropertyChangedParams&, UMovieSceneSection* SectionToKey, FGeneratedTrackKeys&) override;
};
