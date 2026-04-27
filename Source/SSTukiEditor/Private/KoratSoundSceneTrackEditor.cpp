#include "KoratSoundSceneTrackEditor.h"
#include "KoratMovieSceneSoundSceneTrack.h"
#include "KoratMovieSceneSoundSceneSection.h"
#include "MovieSceneTrackEditor.h" 
#include "ScopedTransaction.h"
#include "MovieScene.h"
#include "SequencerSectionPainter.h"
#include "ESSSoundGroupType.h"
#include "EKoratSequenceSoundControlType.h"
#include "ControlTypeParameterNameAndCurve.h"

#define LOCTEXT_NAMESPACE "FKoratSoundSceneTrackEditor"

void FKoratSoundSceneTrackEditor::HandleAddKoratSoundSceneTrack()
{
    UMovieScene* MovieScene = GetFocusedMovieScene();
    if (!MovieScene) return;

    const FScopedTransaction Transaction(LOCTEXT("AddKoratSoundSceneTrack_Transaction", "Add Korat Sound Scene Master Track"));
    MovieScene->Modify();

    UKoratMovieSceneSoundSceneTrack* NewTrack = MovieScene->AddMasterTrack<UKoratMovieSceneSoundSceneTrack>();
    if (NewTrack)
    {
        NewTrack->Modify();

        UKoratMovieSceneSoundSceneSection* NewSection = Cast<UKoratMovieSceneSoundSceneSection>(NewTrack->CreateNewSection());
        if (!NewSection) return;

        NewSection->Modify();
        NewSection->SetRange(TRange<FFrameNumber>(0, 120000));
        NewSection->Easing.EaseIn = nullptr;
        NewSection->Easing.EaseOut = nullptr;
        NewSection->EvalOptions.CompletionMode = EMovieSceneCompletionMode::RestoreState;
        
        FControlTypeParameterNameAndCurve ControlTypeParam;
        ControlTypeParam.ParameterName = FName("ControlType");
        ControlTypeParam.EnumChannel.SetEnum(StaticEnum<EKoratSequenceSoundControlType>());
        NewSection->GetEnumCurve() = ControlTypeParam;

        NewSection->GetBoolCurves().Add(FBoolParameterNameAndCurve("Spawn"));
        
        NewSection->ReconstructChannelProxy_Public();

        NewTrack->AddSection(*NewSection);

        GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
    }
}

bool FKoratSoundSceneTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const
{
    return TrackClass == UKoratMovieSceneSoundSceneTrack::StaticClass();
}

void FKoratSoundSceneTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        LOCTEXT("AddKoratSoundSceneTrack", "Korat Sound Scene Track"),
        LOCTEXT("AddKoratSoundSceneTrackTooltip", "Adds a Korat Sound Scene Track to the sequence."),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FKoratSoundSceneTrackEditor::HandleAddKoratSoundSceneTrack))
    );
}

TSharedRef<ISequencerSection> FKoratSoundSceneTrackEditor::MakeSectionInterface(
    UMovieSceneSection& SectionObject,
    UMovieSceneTrack& Track,
    FGuid ObjectBinding)
{
    return MakeShareable(new FKoratSoundSceneSection(SectionObject));
}

int32 FKoratSoundSceneSection::OnPaintSection(FSequencerSectionPainter& Painter) const
{
    return Painter.LayerId;
}

#undef LOCTEXT_NAMESPACE