#include "KoratMovieSceneUIActionBlendOptionTrackEditor.h"
#include "KoratMovieSceneUIActionBlendOptionTrack.h"
#include "KoratMovieSceneUIActionBlendOptionSection.h"
#include "MovieScene.h"
#include "ScopedTransaction.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

#define LOCTEXT_NAMESPACE "FKoratUIActionBlendOptionTrackEditor"

FKoratUIActionBlendOptionTrackEditor::FKoratUIActionBlendOptionTrackEditor(TSharedRef<ISequencer> InSequencer)
    : FPropertyTrackEditor<UKoratMovieSceneUIActionBlendOptionTrack>(InSequencer)
{}

TSharedRef<ISequencerTrackEditor> FKoratUIActionBlendOptionTrackEditor::CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
{
    return MakeShareable(new FKoratUIActionBlendOptionTrackEditor(InSequencer));
}

bool FKoratUIActionBlendOptionTrackEditor::SupportsSequence(UMovieSceneSequence* InSequence) const
{
    return true;
}

bool FKoratUIActionBlendOptionTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const
{
    return TrackClass == UKoratMovieSceneUIActionBlendOptionTrack::StaticClass();
}

void FKoratUIActionBlendOptionTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        FText::FromString("UIAction Blend Option Track"),
        FText::FromString("Add UIAction Blend Option Track"),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FKoratUIActionBlendOptionTrackEditor::HandleAddKoratUIActionBlendOptionTrackForSelectedObjects))
    );
}

void FKoratUIActionBlendOptionTrackEditor::HandleAddKoratUIActionBlendOptionTrackForSelectedObjects()
{
    if (!GetSequencer()) return;

    TArray<FGuid> SelectedObjectGuids;
    GetSequencer()->GetSelectedObjects(SelectedObjectGuids);

    for (const FGuid& Guid : SelectedObjectGuids)
    {
        HandleAddKoratUIActionBlendOptionTrack(Guid);
    }
}

void FKoratUIActionBlendOptionTrackEditor::HandleAddKoratUIActionBlendOptionTrack(FGuid Binding)
{
    if (UMovieScene* MovieScene = GetFocusedMovieScene())
    {
        const FScopedTransaction Transaction(LOCTEXT("AddKoratUIActionBlendOptionTrack", "Add UIAction Blend Option Track"));
        MovieScene->Modify();

        UKoratMovieSceneUIActionBlendOptionTrack* NewTrack = MovieScene->AddTrack<UKoratMovieSceneUIActionBlendOptionTrack>(Binding);
        if (NewTrack)
        {
            NewTrack->Modify();
            NewTrack->SetPropertyNameAndPath("UIAction030_BlendOption", "UIAction030_BlendOption");

            UMovieSceneSection* NewSection = NewTrack->CreateNewSection();
            NewSection->SetRange(TRange<FFrameNumber>::All());
            NewTrack->AddSection(*NewSection);

            GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
        }
    }
}

void FKoratUIActionBlendOptionTrackEditor::GenerateKeysFromPropertyChanged(const FPropertyChangedParams&, UMovieSceneSection* SectionToKey, FGeneratedTrackKeys&)
{
}

#undef LOCTEXT_NAMESPACE