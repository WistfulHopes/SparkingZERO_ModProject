#include "KoratMovieSceneEventSceneFpsCameraTrackEditor.h"
#include "KoratMovieSceneEventSceneFpsCameraTrack.h"
#include "KoratMovieSceneEventSceneFpsCameraSection.h"
#include "MovieScene.h"
#include "ScopedTransaction.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

#define LOCTEXT_NAMESPACE "FKoratEventSceneFpsCameraTrackEditor"

FKoratEventSceneFpsCameraTrackEditor::FKoratEventSceneFpsCameraTrackEditor(TSharedRef<ISequencer> InSequencer)
    : FPropertyTrackEditor<UKoratMovieSceneEventSceneFpsCameraTrack>(InSequencer)
{}

TSharedRef<ISequencerTrackEditor> FKoratEventSceneFpsCameraTrackEditor::CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
{
    return MakeShareable(new FKoratEventSceneFpsCameraTrackEditor(InSequencer));
}

bool FKoratEventSceneFpsCameraTrackEditor::SupportsSequence(UMovieSceneSequence* InSequence) const
{
    return true;
}

bool FKoratEventSceneFpsCameraTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const
{
    return TrackClass == UKoratMovieSceneEventSceneFpsCameraTrack::StaticClass();
}

void FKoratEventSceneFpsCameraTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        FText::FromString("Korat Event Scene Fps Camera Track"),
        FText::FromString("Add Korat Event Scene Fps Camera track"),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FKoratEventSceneFpsCameraTrackEditor::HandleAddKoratEventSceneFpsCameraTrackForSelectedObjects))
    );
}

void FKoratEventSceneFpsCameraTrackEditor::HandleAddKoratEventSceneFpsCameraTrackForSelectedObjects()
{
    if (!GetSequencer()) return;

    TArray<FGuid> SelectedObjectGuids;
    GetSequencer()->GetSelectedObjects(SelectedObjectGuids);

    for (const FGuid& Guid : SelectedObjectGuids)
    {
        HandleAddKoratEventSceneFpsCameraTrack(Guid);
    }
}

void FKoratEventSceneFpsCameraTrackEditor::HandleAddKoratEventSceneFpsCameraTrack(FGuid Binding)
{
    if (UMovieScene* MovieScene = GetFocusedMovieScene())
    {
        const FScopedTransaction Transaction(LOCTEXT("AddKoratEventSceneFpsCameraTrack", "Add Korat Event Scene Fps Camera Track"));
        MovieScene->Modify();

        UKoratMovieSceneEventSceneFpsCameraTrack* NewTrack = MovieScene->AddTrack<UKoratMovieSceneEventSceneFpsCameraTrack>(Binding);
        if (NewTrack)
        {
            NewTrack->Modify();
            NewTrack->SetPropertyNameAndPath("Korat Event Scene Fps Camera Track", "Korat Event Scene Fps Camera Track");

            UMovieSceneSection* NewSection = NewTrack->CreateNewSection();
            NewSection->SetRange(TRange<FFrameNumber>::All());
            NewTrack->AddSection(*NewSection);

            GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
        }
    }
}

void FKoratEventSceneFpsCameraTrackEditor::GenerateKeysFromPropertyChanged(const FPropertyChangedParams&, UMovieSceneSection* SectionToKey, FGeneratedTrackKeys&)
{
}

#undef LOCTEXT_NAMESPACE