#include "ViewSwitchTrackEditor.h"
#include "MovieSceneViewSwitchTrack.h"
#include "MovieSceneTrackEditor.h" 
#include "ScopedTransaction.h"
#include "MovieScene.h"
#include "SequencerSectionPainter.h"

#define LOCTEXT_NAMESPACE "FViewSwitchTrackEditor"

void FViewSwitchTrackEditor::ExtendObjectBindingTrackMenu(
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
                LOCTEXT("AddViewSwitchTrackActor", "Korat View Switch Track"),
                LOCTEXT("AddViewSwitchTrackActorTooltip", "Adds a Korat View Switch Track to this actor."),
                FSlateIcon(),
                FUIAction(FExecuteAction::CreateRaw(this, &FViewSwitchTrackEditor::HandleAddViewSwitchTrack, Binding))
            );
        })
    );
}

void FViewSwitchTrackEditor::HandleAddViewSwitchTrack(FGuid Binding)
{
    UMovieScene* MovieScene = GetFocusedMovieScene();
    if (!MovieScene) return;

    const FScopedTransaction Transaction(LOCTEXT("AddViewSwitchTrackActor_Transaction", "Add Korat View Switch Track to Actor"));
    MovieScene->Modify();

    UMovieSceneViewSwitchTrack* NewTrack = MovieScene->AddTrack<UMovieSceneViewSwitchTrack>(Binding);
    if (NewTrack)
    {
        NewTrack->Modify();

        UMovieSceneViewSwitchSection* NewSection = Cast<UMovieSceneViewSwitchSection>(NewTrack->CreateNewSection());
        if (!NewSection) return;

        NewSection->Modify();
        NewSection->SetRange(TRange<FFrameNumber>(0, 120000));
        NewSection->Easing.EaseIn = nullptr;
        NewSection->Easing.EaseOut = nullptr;

        NewTrack->AddSection(*NewSection);

        GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
    }
}

bool FViewSwitchTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const
{
    return TrackClass == UMovieSceneViewSwitchTrack::StaticClass();
}

void FViewSwitchTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        LOCTEXT("AddViewSwitchTrack", "Korat View Switch Track"),
        LOCTEXT("AddViewSwitchTrackTooltip", "Adds a Korat View Switch Track to this actor."),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FViewSwitchTrackEditor::HandleAddViewSwitchTrackForSelectedObjects))
    );
}

void FViewSwitchTrackEditor::BuildTrackContextMenu(FMenuBuilder& MenuBuilder, UMovieSceneTrack* Track)
{
    MenuBuilder.AddMenuEntry(
        LOCTEXT("AddSection", "Add Section"),
        LOCTEXT("AddSectionTooltip", "Adds a new section to this track."),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateLambda([=]()
        {
            if (Track)
            {
                const FScopedTransaction Transaction(LOCTEXT("AddViewSwitchSection_Transaction", "Add View Switch Section"));
                Track->Modify();

                UMovieSceneSection* NewSection = Cast<UMovieSceneViewSwitchTrack>(Track)->CreateNewSection();
                NewSection->SetRange(TRange<FFrameNumber>(0, 120000));
                NewSection->Easing.EaseIn = nullptr;
                NewSection->Easing.EaseOut = nullptr;
                Track->AddSection(*NewSection);

                GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
            }
        }))
    );
}

void FViewSwitchTrackEditor::HandleAddViewSwitchTrackForSelectedObjects()
{
    if (!GetSequencer()) return;

    TArray<FGuid> SelectedObjectGuids;
    GetSequencer()->GetSelectedObjects(SelectedObjectGuids);

    for (const FGuid& Guid : SelectedObjectGuids)
    {
        HandleAddViewSwitchTrack(Guid);
    }
}

TSharedRef<ISequencerSection> FViewSwitchTrackEditor::MakeSectionInterface(
    UMovieSceneSection& SectionObject,
    UMovieSceneTrack& Track,
    FGuid ObjectBinding)
{
    return MakeShareable(new FViewSwitchSection(SectionObject));
}

int32 FViewSwitchSection::OnPaintSection(FSequencerSectionPainter& Painter) const
{
    return Painter.LayerId;
}

#undef LOCTEXT_NAMESPACE