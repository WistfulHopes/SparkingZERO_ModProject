#include "KoratMovieSceneEventSceneImpactTrackEditor.h"
#include "KoratMovieSceneEventSceneImpactTrack.h"
#include "KoratMovieSceneEventSceneImpactSection.h"
#include "MovieScene.h"
#include "ScopedTransaction.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

#define LOCTEXT_NAMESPACE "FKoratEventSceneImpactTrackEditor"

FKoratEventSceneImpactTrackEditor::FKoratEventSceneImpactTrackEditor(TSharedRef<ISequencer> InSequencer)
    : FPropertyTrackEditor<UKoratMovieSceneEventSceneImpactTrack>(InSequencer)
{}

TSharedRef<ISequencerTrackEditor> FKoratEventSceneImpactTrackEditor::CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
{
    return MakeShareable(new FKoratEventSceneImpactTrackEditor(InSequencer));
}

bool FKoratEventSceneImpactTrackEditor::SupportsSequence(UMovieSceneSequence* InSequence) const
{
    return true;
}

bool FKoratEventSceneImpactTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const
{
    return TrackClass == UKoratMovieSceneEventSceneImpactTrack::StaticClass();
}

void FKoratEventSceneImpactTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        FText::FromString("Korat Event Scene Impact Track"),
        FText::FromString("Add Korat Event Scene Impact track"),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FKoratEventSceneImpactTrackEditor::HandleAddKoratEventSceneImpactTrackForSelectedObjects))
    );
}

void FKoratEventSceneImpactTrackEditor::HandleAddKoratEventSceneImpactTrackForSelectedObjects()
{
    if (!GetSequencer()) return;

    TArray<FGuid> SelectedObjectGuids;
    GetSequencer()->GetSelectedObjects(SelectedObjectGuids);

    for (const FGuid& Guid : SelectedObjectGuids)
    {
        HandleAddKoratEventSceneImpactTrack(Guid);
    }
}

void FKoratEventSceneImpactTrackEditor::HandleAddKoratEventSceneImpactTrack(FGuid Binding)
{
    if (UMovieScene* MovieScene = GetFocusedMovieScene())
    {
        const FScopedTransaction Transaction(LOCTEXT("Add Korat Event Scene Impact Track", "Add Korat Event Scene Impact Track"));
        MovieScene->Modify();

        UKoratMovieSceneEventSceneImpactTrack* NewTrack = MovieScene->AddTrack<UKoratMovieSceneEventSceneImpactTrack>(Binding);
        if (NewTrack)
        {
            NewTrack->Modify();
            NewTrack->SetPropertyNameAndPath("Korat Event Scene Impact Track", "Korat Event Scene Impact Track");

            UMovieSceneSection* NewSection = NewTrack->CreateNewSection();
            NewSection->SetRange(TRange<FFrameNumber>::All());
            NewTrack->AddSection(*NewSection);

            GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
        }
    }
}

void FKoratEventSceneImpactTrackEditor::GenerateKeysFromPropertyChanged(const FPropertyChangedParams&, UMovieSceneSection* SectionToKey, FGeneratedTrackKeys&)
{
}

#undef LOCTEXT_NAMESPACE