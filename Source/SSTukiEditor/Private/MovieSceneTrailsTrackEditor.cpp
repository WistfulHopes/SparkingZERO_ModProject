#include "MovieSceneTrailsTrackEditor.h"
#include "MovieSceneTrailsTrack.h"
#include "MovieSceneTrackEditor.h" 
#include "ScopedTransaction.h"
#include "MovieScene.h"
#include "SequencerSectionPainter.h"

#define LOCTEXT_NAMESPACE "FMovieSceneTrailsTrackEditor"

void FMovieSceneTrailsTrackEditor::ExtendObjectBindingTrackMenu(
    TSharedRef<FExtender> Extender,
    const TArray<FGuid>& ObjectBindings,
    const UClass* ObjectClass)
{
    if (ObjectBindings.Num() != 1)
    {
        return;
    }

    if (!ObjectClass->IsChildOf(AActor::StaticClass()))
    {
        return;
    }

    const FGuid Binding = ObjectBindings[0];

    Extender->AddMenuExtension(
        "AddTrack",
        EExtensionHook::After,
        nullptr,
        FMenuExtensionDelegate::CreateLambda([this, Binding](FMenuBuilder& MenuBuilder)
        {
            MenuBuilder.AddMenuEntry(
                LOCTEXT("AddMovieSceneTrailsTrackActor", "Movie Scene Trails Track"),
                LOCTEXT("AddMovieSceneTrailsTrackActorTooltip", "Adds a Movie Scene Trails Track to this actor."),
                FSlateIcon(),
                FUIAction(FExecuteAction::CreateRaw(this, &FMovieSceneTrailsTrackEditor::HandleAddMovieSceneTrailsTrack, Binding))
            );
        })
    );
}

void FMovieSceneTrailsTrackEditor::HandleAddMovieSceneTrailsTrack(FGuid Binding)
{
    UMovieScene* MovieScene = GetFocusedMovieScene();
    if (!MovieScene) return;

    const FScopedTransaction Transaction(LOCTEXT("AddMovieSceneTrailsTrackActor_Transaction", "Add Movie Scene Trails Track to Actor"));
    MovieScene->Modify();

    UMovieSceneTrailsTrack* NewTrack = MovieScene->AddTrack<UMovieSceneTrailsTrack>(Binding);
    if (NewTrack)
    {
        NewTrack->Modify();

        UMovieSceneSection* NewSection = NewTrack->CreateNewSection();
        NewSection->SetRange(TRange<FFrameNumber>(0, 60000));
        NewTrack->AddSection(*NewSection);

        GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
    }
}


bool FMovieSceneTrailsTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const
{
    return TrackClass == UMovieSceneTrailsTrack::StaticClass();
}

void FMovieSceneTrailsTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        LOCTEXT("AddMovieSceneTrailsTrack", "Movie Scene Trails Track"),
        LOCTEXT("AddMovieSceneTrailsTrackTooltip", "Adds a Movie Scene Trails Track to this actor."),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FMovieSceneTrailsTrackEditor::HandleAddMovieSceneTrailsTrackForSelectedObjects))
    );
}
void FMovieSceneTrailsTrackEditor::BuildTrackContextMenu(FMenuBuilder& MenuBuilder, UMovieSceneTrack* Track)
{
    MenuBuilder.AddMenuEntry(
        LOCTEXT("AddSection", "Add Section"),
        LOCTEXT("AddSectionTooltip", "Adds a new section to this track."),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateLambda([=]()
        {
            if (Track)
            {
                const FScopedTransaction Transaction(LOCTEXT("AddTrailsSection_Transaction", "Add Trails Section"));
                Track->Modify();

                UMovieSceneSection* NewSection = Cast<UMovieSceneTrailsTrack>(Track)->CreateNewSection();
                NewSection->SetRange(TRange<FFrameNumber>(0, 60000));
                Track->AddSection(*NewSection);

                GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
            }
        }))
    );
}

void FMovieSceneTrailsTrackEditor::HandleAddMovieSceneTrailsTrackForSelectedObjects()
{
    if (!GetSequencer()) return;

    TArray<FGuid> SelectedObjectGuids;
    GetSequencer()->GetSelectedObjects(SelectedObjectGuids);

    for (const FGuid& Guid : SelectedObjectGuids)
    {
        HandleAddMovieSceneTrailsTrack(Guid);
    }
}

TSharedRef<ISequencerSection> FMovieSceneTrailsTrackEditor::MakeSectionInterface(
    UMovieSceneSection& SectionObject,
    UMovieSceneTrack& Track,
    FGuid ObjectBinding)
{
    return MakeShareable(new FMovieSceneTrailsSection(SectionObject));
}

int32 FMovieSceneTrailsSection::OnPaintSection(FSequencerSectionPainter& Painter) const
{
    return Painter.LayerId;
}

#undef LOCTEXT_NAMESPACE