#include "KoratMovieSceneEventSceneTrackEditor.h"
#include "KoratMovieSceneEventSceneTrack.h"
#include "MovieSceneTrackEditor.h" 
#include "ScopedTransaction.h"
#include "MovieScene.h"
#include "SequencerSectionPainter.h"

#define LOCTEXT_NAMESPACE "FKoratEventSceneTrackEditor"

void FKoratEventSceneTrackEditor::ExtendObjectBindingTrackMenu(
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
                LOCTEXT("AddKoratEventSceneTrackActor", "Korat Event Scene Track"),
                LOCTEXT("AddKoratEventSceneTrackActorTooltip", "Adds a Korat Event Scene Track to this actor."),
                FSlateIcon(),
                FUIAction(FExecuteAction::CreateRaw(this, &FKoratEventSceneTrackEditor::HandleAddKoratEventSceneTrack, Binding))
            );
        })
    );
}

void FKoratEventSceneTrackEditor::HandleAddKoratEventSceneTrack(FGuid Binding)
{
    UMovieScene* MovieScene = GetFocusedMovieScene();
    if (!MovieScene) return;

    const FScopedTransaction Transaction(LOCTEXT("AddKoratEventSceneTrackActor_Transaction", "Add Korat Event Scene Track to Actor"));
    MovieScene->Modify();

    UKoratMovieSceneEventSceneTrack* NewTrack = MovieScene->AddTrack<UKoratMovieSceneEventSceneTrack>(Binding);
    if (NewTrack)
    {
        NewTrack->Modify();

        UMovieSceneSection* NewSection = NewTrack->CreateNewSection();
        NewSection->SetRange(TRange<FFrameNumber>::All());
        NewTrack->AddSection(*NewSection);

        GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
    }
}


bool FKoratEventSceneTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const
{
    return TrackClass == UKoratMovieSceneEventSceneTrack::StaticClass();
}

void FKoratEventSceneTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        LOCTEXT("AddKoratEventSceneTrack", "Korat Event Scene Track"),
        LOCTEXT("AddKoratEventSceneTrackTooltip", "Adds a Korat Event Scene Track to this actor."),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FKoratEventSceneTrackEditor::HandleAddKoratEventSceneTrackForSelectedObjects))
    );
}

void FKoratEventSceneTrackEditor::HandleAddKoratEventSceneTrackForSelectedObjects()
{
    if (!GetSequencer()) return;

    TArray<FGuid> SelectedObjectGuids;
    GetSequencer()->GetSelectedObjects(SelectedObjectGuids);

    for (const FGuid& Guid : SelectedObjectGuids)
    {
        HandleAddKoratEventSceneTrack(Guid);
    }
}

TSharedRef<ISequencerSection> FKoratEventSceneTrackEditor::MakeSectionInterface(
    UMovieSceneSection& SectionObject,
    UMovieSceneTrack& Track,
    FGuid ObjectBinding)
{
    return MakeShareable(new FKoratEventSceneSection(SectionObject));
}

int32 FKoratEventSceneSection::OnPaintSection(FSequencerSectionPainter& Painter) const
{
    return Painter.LayerId;
}

#undef LOCTEXT_NAMESPACE