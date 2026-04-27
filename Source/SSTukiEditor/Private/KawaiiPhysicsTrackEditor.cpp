#include "KawaiiPhysicsTrackEditor.h"
#include "MovieSceneKawaiiPhysicsTrack.h"
#include "MovieSceneTrackEditor.h" 
#include "ScopedTransaction.h"
#include "MovieScene.h"
#include "SequencerSectionPainter.h"

#define LOCTEXT_NAMESPACE "FKawaiiPhysicsTrackEditor"

void FKawaiiPhysicsTrackEditor::ExtendObjectBindingTrackMenu(
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
                LOCTEXT("AddKawaiiPhysicsTrackActor", "Kawaii Physics Track"),
                LOCTEXT("AddKawaiiPhysicsTrackActorTooltip", "Adds a Kawaii Physics Track to this actor."),
                FSlateIcon(),
                FUIAction(FExecuteAction::CreateRaw(this, &FKawaiiPhysicsTrackEditor::HandleAddKawaiiPhysicsTrack, Binding))
            );
        })
    );
}

void FKawaiiPhysicsTrackEditor::HandleAddKawaiiPhysicsTrack(FGuid Binding)
{
    UMovieScene* MovieScene = GetFocusedMovieScene();
    if (!MovieScene) return;

    const FScopedTransaction Transaction(LOCTEXT("AddKawaiiPhysicsTrackActor_Transaction", "Add Kawaii Physics Track to Actor"));
    MovieScene->Modify();

    UMovieSceneKawaiiPhysicsTrack* NewTrack = MovieScene->AddTrack<UMovieSceneKawaiiPhysicsTrack>(Binding);
    if (NewTrack)
    {
        NewTrack->Modify();

        UMovieSceneKawaiiPhysicsSection* NewSection = Cast<UMovieSceneKawaiiPhysicsSection>(NewTrack->CreateNewSection());
        if (!NewSection) return;

        NewSection->Modify();
        NewSection->SetRange(TRange<FFrameNumber>(0, 120000));

        NewSection->GetBoolParameterNamesAndCurves().Add(FBoolParameterNameAndCurve("EnableWind"));
        NewSection->GetBoolParameterNamesAndCurves().Add(FBoolParameterNameAndCurve("EnableOverwriteWind"));  
        NewSection->GetScalarParameterNamesAndCurves().Add(FScalarParameterNameAndCurve("WindScale"));
        NewSection->GetScalarParameterNamesAndCurves().Add(FScalarParameterNameAndCurve("OverwriteWindSpeed"));
        NewSection->GetVectorParameterNamesAndCurves().Add(FVectorParameterNameAndCurves("OverwriteWindDirection"));

        // UI will now show these, user can add keys
        NewSection->ReconstructChannelProxy_Public();

        NewTrack->AddSection(*NewSection);

        GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
    }
}

bool FKawaiiPhysicsTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const
{
    return TrackClass == UMovieSceneKawaiiPhysicsTrack::StaticClass();
}

void FKawaiiPhysicsTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        LOCTEXT("AddKawaiiPhysicsTrack", "Kawaii Physics Track"),
        LOCTEXT("AddKawaiiPhysicsTrackTooltip", "Adds a Kawaii Physics Track to this actor."),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FKawaiiPhysicsTrackEditor::HandleAddKawaiiPhysicsTrackForSelectedObjects))
    );
}

void FKawaiiPhysicsTrackEditor::HandleAddKawaiiPhysicsTrackForSelectedObjects()
{
    if (!GetSequencer()) return;

    TArray<FGuid> SelectedObjectGuids;
    GetSequencer()->GetSelectedObjects(SelectedObjectGuids);

    for (const FGuid& Guid : SelectedObjectGuids)
    {
        HandleAddKawaiiPhysicsTrack(Guid);
    }
}

TSharedRef<ISequencerSection> FKawaiiPhysicsTrackEditor::MakeSectionInterface(
    UMovieSceneSection& SectionObject,
    UMovieSceneTrack& Track,
    FGuid ObjectBinding)
{
    return MakeShareable(new FKawaiiPhysicsSection(SectionObject));
}

int32 FKawaiiPhysicsSection::OnPaintSection(FSequencerSectionPainter& Painter) const
{
    return Painter.LayerId;
}

#undef LOCTEXT_NAMESPACE