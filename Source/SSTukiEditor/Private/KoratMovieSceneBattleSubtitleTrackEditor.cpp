#include "KoratMovieSceneBattleSubtitleTrackEditor.h"
#include "KoratMovieSceneBattleSubtitleTrack.h"
#include "MovieSceneTrackEditor.h" 
#include "ScopedTransaction.h"
#include "MovieScene.h"
#include "SequencerSectionPainter.h"

#define LOCTEXT_NAMESPACE "FKoratBattleSubtitleTrackEditor"

void FKoratBattleSubtitleTrackEditor::ExtendObjectBindingTrackMenu(
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
                LOCTEXT("AddKoratBattleSubtitleTrackActor", "Korat Battle Subtitle Track"),
                LOCTEXT("AddKoratBattleSubtitleTrackActorTooltip", "Adds a Korat Battle Subtitle Track to this actor."),
                FSlateIcon(),
                FUIAction(FExecuteAction::CreateRaw(this, &FKoratBattleSubtitleTrackEditor::HandleAddKoratBattleSubtitleTrack, Binding))
            );
        })
    );
}

void FKoratBattleSubtitleTrackEditor::HandleAddKoratBattleSubtitleTrack(FGuid Binding)
{
    UMovieScene* MovieScene = GetFocusedMovieScene();
    if (!MovieScene) return;

    const FScopedTransaction Transaction(LOCTEXT("AddKoratBattleSubtitleTrackActor_Transaction", "Add Korat Battle Subtitle Track to Actor"));
    MovieScene->Modify();

    UKoratMovieSceneBattleSubtitleTrack* NewTrack = MovieScene->AddTrack<UKoratMovieSceneBattleSubtitleTrack>(Binding);
    if (NewTrack)
    {
        NewTrack->Modify();

        UMovieSceneSection* NewSection = NewTrack->CreateNewSection();
        NewSection->SetRange(TRange<FFrameNumber>::All());
        NewTrack->AddSection(*NewSection);

        GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
    }
}


bool FKoratBattleSubtitleTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const
{
    return TrackClass == UKoratMovieSceneBattleSubtitleTrack::StaticClass();
}

void FKoratBattleSubtitleTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        LOCTEXT("AddKoratBattleSubtitleTrack", "Korat Battle Subtitle Track"),
        LOCTEXT("AddKoratBattleSubtitleTrackTooltip", "Adds a Korat Battle Subtitle Track to this actor."),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FKoratBattleSubtitleTrackEditor::HandleAddKoratBattleSubtitleTrackForSelectedObjects))
    );
}

void FKoratBattleSubtitleTrackEditor::HandleAddKoratBattleSubtitleTrackForSelectedObjects()
{
    if (!GetSequencer()) return;

    TArray<FGuid> SelectedObjectGuids;
    GetSequencer()->GetSelectedObjects(SelectedObjectGuids);

    for (const FGuid& Guid : SelectedObjectGuids)
    {
        HandleAddKoratBattleSubtitleTrack(Guid);
    }
}

TSharedRef<ISequencerSection> FKoratBattleSubtitleTrackEditor::MakeSectionInterface(
    UMovieSceneSection& SectionObject,
    UMovieSceneTrack& Track,
    FGuid ObjectBinding)
{
    return MakeShareable(new FKoratBattleSubtitleSection(SectionObject));
}

int32 FKoratBattleSubtitleSection::OnPaintSection(FSequencerSectionPainter& Painter) const
{
    return Painter.LayerId;
}

#undef LOCTEXT_NAMESPACE