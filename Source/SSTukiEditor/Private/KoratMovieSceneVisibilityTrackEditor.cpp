#include "KoratMovieSceneVisibilityTrackEditor.h"
#include "KoratMovieSceneVisibilityTrack.h"
#include "MovieSceneTrackEditor.h" 
#include "ScopedTransaction.h"
#include "MovieScene.h"
#include "Sections/MovieSceneBoolSection.h"
#include "SequencerSectionPainter.h"

#define LOCTEXT_NAMESPACE "FKoratMovieSceneVisibilityTrackEditor"

void FKoratMovieSceneVisibilityTrackEditor::ExtendObjectBindingTrackMenu(
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
                LOCTEXT("AddKoratMovieSceneVisibilityTrackActor", "Korat Visibility Track"),
                LOCTEXT("AddKoratMovieSceneVisibilityTrackActorTooltip", "Adds a Korat Visibility Track to this actor."),
                FSlateIcon(),
                FUIAction(FExecuteAction::CreateRaw(this, &FKoratMovieSceneVisibilityTrackEditor::HandleAddKoratMovieSceneVisibilityTrack, Binding))
            );
        })
    );
}

void FKoratMovieSceneVisibilityTrackEditor::HandleAddKoratMovieSceneVisibilityTrack(FGuid Binding)
{
    UMovieScene* MovieScene = GetFocusedMovieScene();
    if (!MovieScene) return;

    const FScopedTransaction Transaction(LOCTEXT("AddKoratMovieSceneVisibilityTrackActor_Transaction", "Add Korat Visibility Track to Actor"));
    MovieScene->Modify();

    UKoratMovieSceneVisibilityTrack* NewTrack = MovieScene->AddTrack<UKoratMovieSceneVisibilityTrack>(Binding);
    if (!NewTrack) return;

    NewTrack->Modify();
    NewTrack->SetPropertyNameAndPath("HiddenInGameSequencer", "bHiddenInGameSequencer");

    // Use UE's built-in parameter section
    UMovieSceneBoolSection* NewSection = Cast<UMovieSceneBoolSection>(NewTrack->CreateNewSection());
    
    NewSection->SetRange(TRange<FFrameNumber>::All());
    NewSection->Modify();
    
    FMovieSceneBoolChannel& BoolCurve = NewSection->GetChannel();
    BoolCurve.SetDefault(true); // Set default to true
    BoolCurve.Reset(); // Clear any keys if present
    
    NewSection->Easing.EaseIn = nullptr; // Remove easing
    NewSection->Easing.EaseOut = nullptr;
    
    NewTrack->AddSection(*NewSection);

    GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
}

bool FKoratMovieSceneVisibilityTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const
{
    return TrackClass == UKoratMovieSceneVisibilityTrack::StaticClass();
}

void FKoratMovieSceneVisibilityTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        LOCTEXT("AddKoratMovieSceneVisibilityTrack", "Korat Visibility Track"),
        LOCTEXT("AddKoratMovieSceneVisibilityTrackTooltip", "Adds a Korat Visibility Track to this actor."),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FKoratMovieSceneVisibilityTrackEditor::HandleAddKoratMovieSceneVisibilityTrackForSelectedObjects))
    );
}

void FKoratMovieSceneVisibilityTrackEditor::HandleAddKoratMovieSceneVisibilityTrackForSelectedObjects()
{
    if (!GetSequencer()) return;

    TArray<FGuid> SelectedObjectGuids;
    GetSequencer()->GetSelectedObjects(SelectedObjectGuids);

    for (const FGuid& Guid : SelectedObjectGuids)
    {
        HandleAddKoratMovieSceneVisibilityTrack(Guid);
    }
}

TSharedRef<ISequencerSection> FKoratMovieSceneVisibilityTrackEditor::MakeSectionInterface(
    UMovieSceneSection& SectionObject,
    UMovieSceneTrack& Track,
    FGuid ObjectBinding)
{
    return MakeShareable(new FKoratMovieSceneVisibilitySection(SectionObject, GetSequencer().ToSharedRef()));
}

int32 FKoratMovieSceneVisibilitySection::OnPaintSection(FSequencerSectionPainter& Painter) const
{
    return Painter.LayerId;
}

#undef LOCTEXT_NAMESPACE