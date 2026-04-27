#include "KoratMovieSceneOutlineStencilIndexTrackEditor.h"
#include "KoratMovieSceneOutlineStencilIndexTrack.h"
#include "KoratMovieSceneOutlineStencilIndexSection.h"
#include "MovieScene.h"
#include "ScopedTransaction.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

#define LOCTEXT_NAMESPACE "FKoratOutlineStencilIndexTrackEditor"

FKoratOutlineStencilIndexTrackEditor::FKoratOutlineStencilIndexTrackEditor(TSharedRef<ISequencer> InSequencer)
    : FPropertyTrackEditor<UKoratMovieSceneOutlineStencilIndexTrack>(InSequencer)
{}

TSharedRef<ISequencerTrackEditor> FKoratOutlineStencilIndexTrackEditor::CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
{
    return MakeShareable(new FKoratOutlineStencilIndexTrackEditor(InSequencer));
}

bool FKoratOutlineStencilIndexTrackEditor::SupportsSequence(UMovieSceneSequence* InSequence) const
{
    return true;
}

bool FKoratOutlineStencilIndexTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const
{
    return TrackClass == UKoratMovieSceneOutlineStencilIndexTrack::StaticClass();
}

void FKoratOutlineStencilIndexTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        FText::FromString("Korat Outline Stencil Index Track"),
        FText::FromString("Add Korat Outline Stencil Index track"),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FKoratOutlineStencilIndexTrackEditor::HandleAddKoratOutlineStencilIndexTrackForSelectedObjects))
    );
}

void FKoratOutlineStencilIndexTrackEditor::HandleAddKoratOutlineStencilIndexTrackForSelectedObjects()
{
    if (!GetSequencer()) return;

    TArray<FGuid> SelectedObjectGuids;
    GetSequencer()->GetSelectedObjects(SelectedObjectGuids);

    for (const FGuid& Guid : SelectedObjectGuids)
    {
        HandleAddKoratOutlineStencilIndexTrack(Guid);
    }
}

void FKoratOutlineStencilIndexTrackEditor::HandleAddKoratOutlineStencilIndexTrack(FGuid Binding)
{
    if (UMovieScene* MovieScene = GetFocusedMovieScene())
    {
        const FScopedTransaction Transaction(LOCTEXT("Add Korat Outline Stencil Index Track", "Add Korat Outline Stencil Index Track"));
        MovieScene->Modify();

        UKoratMovieSceneOutlineStencilIndexTrack* NewTrack = MovieScene->AddTrack<UKoratMovieSceneOutlineStencilIndexTrack>(Binding);
        if (NewTrack)
        {
            NewTrack->Modify();
            NewTrack->SetPropertyNameAndPath("Korat Outline Stencil Index Track", "Korat Outline Stencil Index Track");

            UMovieSceneSection* NewSection = NewTrack->CreateNewSection();
            NewSection->SetRange(TRange<FFrameNumber>::All());
            NewTrack->AddSection(*NewSection);

            GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
        }
    }
}

void FKoratOutlineStencilIndexTrackEditor::GenerateKeysFromPropertyChanged(const FPropertyChangedParams&, UMovieSceneSection* SectionToKey, FGeneratedTrackKeys&)
{
}

#undef LOCTEXT_NAMESPACE