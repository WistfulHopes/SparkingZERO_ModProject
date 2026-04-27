#include "KoratMovieSceneLookAtTrackEditor.h"
#include "KoratMovieSceneLookAtTrack.h"
#include "KoratMovieSceneLookAtSection.h"
#include "MovieScene.h"
#include "ScopedTransaction.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

#define LOCTEXT_NAMESPACE "FKoratLookAtTrackEditor"

FKoratLookAtTrackEditor::FKoratLookAtTrackEditor(TSharedRef<ISequencer> InSequencer)
    : FPropertyTrackEditor<UKoratMovieSceneLookAtTrack>(InSequencer)
{}

TSharedRef<ISequencerTrackEditor> FKoratLookAtTrackEditor::CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
{
    return MakeShareable(new FKoratLookAtTrackEditor(InSequencer));
}

bool FKoratLookAtTrackEditor::SupportsSequence(UMovieSceneSequence* InSequence) const
{
    return true;
}

bool FKoratLookAtTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const
{
    return TrackClass == UKoratMovieSceneLookAtTrack::StaticClass();
}

void FKoratLookAtTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        FText::FromString("Korat Look At Track"),
        FText::FromString("Add Korat Look At track"),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FKoratLookAtTrackEditor::HandleAddKoratLookAtTrackForSelectedObjects))
    );
}

void FKoratLookAtTrackEditor::HandleAddKoratLookAtTrackForSelectedObjects()
{
    if (!GetSequencer()) return;

    TArray<FGuid> SelectedObjectGuids;
    GetSequencer()->GetSelectedObjects(SelectedObjectGuids);

    for (const FGuid& Guid : SelectedObjectGuids)
    {
        HandleAddKoratLookAtTrack(Guid);
    }
}

void FKoratLookAtTrackEditor::HandleAddKoratLookAtTrack(FGuid Binding)
{
    if (UMovieScene* MovieScene = GetFocusedMovieScene())
    {
        const FScopedTransaction Transaction(LOCTEXT("AddKoratLookAtTrack", "Add Korat Look At Track"));
        MovieScene->Modify();

        UKoratMovieSceneLookAtTrack* NewTrack = MovieScene->AddTrack<UKoratMovieSceneLookAtTrack>(Binding);
        if (NewTrack)
        {
            NewTrack->Modify();
            NewTrack->SetPropertyNameAndPath("Korat Look At Track", "Korat Look At Track");

            UMovieSceneSection* NewSection = NewTrack->CreateNewSection();
            NewSection->SetRange(TRange<FFrameNumber>::All());
            NewTrack->AddSection(*NewSection);

            GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
        }
    }
}

void FKoratLookAtTrackEditor::GenerateKeysFromPropertyChanged(const FPropertyChangedParams&, UMovieSceneSection* SectionToKey, FGeneratedTrackKeys&)
{
}

#undef LOCTEXT_NAMESPACE