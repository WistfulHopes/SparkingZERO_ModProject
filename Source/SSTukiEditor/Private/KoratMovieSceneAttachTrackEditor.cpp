#include "KoratMovieSceneAttachTrackEditor.h"
#include "KoratMovieSceneAttachTrack.h"
#include "KoratMovieSceneAttachSection.h"
#include "MovieScene.h"
#include "ScopedTransaction.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

#define LOCTEXT_NAMESPACE "FKoratAttachTrackEditor"

FKoratAttachTrackEditor::FKoratAttachTrackEditor(TSharedRef<ISequencer> InSequencer)
    : FPropertyTrackEditor<UKoratMovieSceneAttachTrack>(InSequencer)
{}

TSharedRef<ISequencerTrackEditor> FKoratAttachTrackEditor::CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
{
    return MakeShareable(new FKoratAttachTrackEditor(InSequencer));
}

bool FKoratAttachTrackEditor::SupportsSequence(UMovieSceneSequence* InSequence) const
{
    return true;
}

bool FKoratAttachTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const
{
    return TrackClass == UKoratMovieSceneAttachTrack::StaticClass();
}

void FKoratAttachTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        FText::FromString("Korat Attach Track"),
        FText::FromString("Add Korat attach track"),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FKoratAttachTrackEditor::HandleAddKoratAttachTrackForSelectedObjects))
    );
}

void FKoratAttachTrackEditor::HandleAddKoratAttachTrackForSelectedObjects()
{
    if (!GetSequencer()) return;

    TArray<FGuid> SelectedObjectGuids;
    GetSequencer()->GetSelectedObjects(SelectedObjectGuids);

    for (const FGuid& Guid : SelectedObjectGuids)
    {
        HandleAddKoratAttachTrack(Guid);
    }
}

void FKoratAttachTrackEditor::HandleAddKoratAttachTrack(FGuid Binding)
{
    if (UMovieScene* MovieScene = GetFocusedMovieScene())
    {
        const FScopedTransaction Transaction(LOCTEXT("AddKoratAttachTrack", "Add Korat Attach Track"));
        MovieScene->Modify();

        UKoratMovieSceneAttachTrack* NewTrack = MovieScene->AddTrack<UKoratMovieSceneAttachTrack>(Binding);
        if (NewTrack)
        {
            NewTrack->Modify();
            NewTrack->SetPropertyNameAndPath("KoratAttach", "KoratAttach");

            UMovieSceneSection* NewSection = NewTrack->CreateNewSection();
            NewSection->SetRange(TRange<FFrameNumber>::All());
            NewTrack->AddSection(*NewSection);

            GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
        }
    }
}

void FKoratAttachTrackEditor::GenerateKeysFromPropertyChanged(const FPropertyChangedParams&, UMovieSceneSection* SectionToKey, FGeneratedTrackKeys&)
{
}

#undef LOCTEXT_NAMESPACE