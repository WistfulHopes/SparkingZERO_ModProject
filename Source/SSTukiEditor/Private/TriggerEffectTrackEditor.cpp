#include "TriggerEffectTrackEditor.h"
#include "MovieSceneTriggerEffectTrack.h"
#include "MovieSceneTrackEditor.h" 
#include "ScopedTransaction.h"
#include "MovieScene.h"
#include "SequencerSectionPainter.h"

#define LOCTEXT_NAMESPACE "FTriggerEffectTrackEditor"

void FTriggerEffectTrackEditor::ExtendObjectBindingTrackMenu(
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
                LOCTEXT("AddTriggerEffectTrackActor", "Korat Trigger Effect Track"),
                LOCTEXT("AddTriggerEffectTrackActorTooltip", "Adds a Korat Trigger Effect Track to this actor."),
                FSlateIcon(),
                FUIAction(FExecuteAction::CreateRaw(this, &FTriggerEffectTrackEditor::HandleAddTriggerEffectTrack, Binding))
            );
        })
    );
}

void FTriggerEffectTrackEditor::HandleAddTriggerEffectTrack(FGuid Binding)
{
    UMovieScene* MovieScene = GetFocusedMovieScene();
    if (!MovieScene) return;

    const FScopedTransaction Transaction(LOCTEXT("AddTriggerEffectTrackActor_Transaction", "Add Korat Trigger Effect Track to Actor"));
    MovieScene->Modify();

    UMovieSceneTriggerEffectTrack* NewTrack = MovieScene->AddTrack<UMovieSceneTriggerEffectTrack>(Binding);
    if (NewTrack)
    {
        NewTrack->Modify();

        UMovieSceneTriggerEffectSection* NewSection = Cast<UMovieSceneTriggerEffectSection>(NewTrack->CreateNewSection());
        if (!NewSection) return;

        NewSection->Modify();
        NewSection->SetRange(TRange<FFrameNumber>(0, 120000));
        NewSection->Easing.EaseIn = nullptr;
        NewSection->Easing.EaseOut = nullptr;

        NewTrack->AddSection(*NewSection);

        GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
    }
}

bool FTriggerEffectTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const
{
    return TrackClass == UMovieSceneTriggerEffectTrack::StaticClass();
}

void FTriggerEffectTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        LOCTEXT("AddTriggerEffectTrack", "Korat Trigger Effect Track"),
        LOCTEXT("AddTriggerEffectTrackTooltip", "Adds a Korat Trigger Effect Track to this actor."),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FTriggerEffectTrackEditor::HandleAddTriggerEffectTrackForSelectedObjects))
    );
}

void FTriggerEffectTrackEditor::BuildTrackContextMenu(FMenuBuilder& MenuBuilder, UMovieSceneTrack* Track)
{
    MenuBuilder.AddMenuEntry(
        LOCTEXT("AddSection", "Add Section"),
        LOCTEXT("AddSectionTooltip", "Adds a new section to this track."),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateLambda([=]()
        {
            if (Track)
            {
                const FScopedTransaction Transaction(LOCTEXT("AddTriggerEffectSection_Transaction", "Add Trigger Effect Section"));
                Track->Modify();

                UMovieSceneSection* NewSection = Cast<UMovieSceneTriggerEffectTrack>(Track)->CreateNewSection();
                NewSection->SetRange(TRange<FFrameNumber>(0, 120000));
                NewSection->Easing.EaseIn = nullptr;
                NewSection->Easing.EaseOut = nullptr;
                Track->AddSection(*NewSection);

                GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
            }
        }))
    );
}

void FTriggerEffectTrackEditor::HandleAddTriggerEffectTrackForSelectedObjects()
{
    if (!GetSequencer()) return;

    TArray<FGuid> SelectedObjectGuids;
    GetSequencer()->GetSelectedObjects(SelectedObjectGuids);

    for (const FGuid& Guid : SelectedObjectGuids)
    {
        HandleAddTriggerEffectTrack(Guid);
    }
}

TSharedRef<ISequencerSection> FTriggerEffectTrackEditor::MakeSectionInterface(
    UMovieSceneSection& SectionObject,
    UMovieSceneTrack& Track,
    FGuid ObjectBinding)
{
    return MakeShareable(new FTriggerEffectSection(SectionObject));
}

int32 FTriggerEffectSection::OnPaintSection(FSequencerSectionPainter& Painter) const
{
    return Painter.LayerId;
}

#undef LOCTEXT_NAMESPACE