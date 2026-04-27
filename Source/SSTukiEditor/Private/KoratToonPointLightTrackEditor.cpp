#include "KoratToonPointLightTrackEditor.h"
#include "MovieSceneKoratToonPointLightTrack.h"
#include "MovieSceneTrackEditor.h" 
#include "ScopedTransaction.h"
#include "MovieScene.h"
#include "SequencerSectionPainter.h"
#include "EKoratEffectToonPointLightTargetType.h"
#include "ESSLightingPositonMethod.h"
#include "KoratByteParameterNameAndCurve.h"
#include "KoratIntParameterNameAndCurve.h"

#define LOCTEXT_NAMESPACE "FKoratToonPointLightTrackEditor"

void FKoratToonPointLightTrackEditor::ExtendObjectBindingTrackMenu(
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
                LOCTEXT("AddKoratToonPointLightTrackActor", "Korat Toon Point Light Track"),
                LOCTEXT("AddKoratToonPointLightTrackActorTooltip", "Adds a Korat Toon Point Light Track to this actor."),
                FSlateIcon(),
                FUIAction(FExecuteAction::CreateRaw(this, &FKoratToonPointLightTrackEditor::HandleAddKoratToonPointLightTrack, Binding))
            );
        })
    );
}

void FKoratToonPointLightTrackEditor::HandleAddKoratToonPointLightTrack(FGuid Binding)
{
    UMovieScene* MovieScene = GetFocusedMovieScene();
    if (!MovieScene) return;

    const FScopedTransaction Transaction(LOCTEXT("AddKoratToonPointLightTrackActor_Transaction", "Add Korat Toon Point Light Track to Actor"));
    MovieScene->Modify();

    UMovieSceneKoratToonPointLightTrack* NewTrack = MovieScene->AddTrack<UMovieSceneKoratToonPointLightTrack>(Binding);
    if (NewTrack)
    {
        NewTrack->Modify();

        UKoratPointLightParameterSection* NewSection = Cast<UKoratPointLightParameterSection>(NewTrack->CreateNewSection());
        if (!NewSection) return;

        NewSection->Modify();
        NewSection->SetRange(TRange<FFrameNumber>(0, 120000));
        NewSection->Easing.EaseIn = nullptr;
        NewSection->Easing.EaseOut = nullptr;
        
        TArray<FKoratByteParameterNameAndCurve>& ByteParams = NewSection->GetByteParameterNamesAndCurves();
        
        FKoratByteParameterNameAndCurve TargetTypeParam;
        TargetTypeParam.ParameterName = FName("TargetType");
        TargetTypeParam.ParameterCurve.SetEnum(StaticEnum<EKoratEffectToonPointLightTargetType>());
        TargetTypeParam.ParameterCurve.SetDefault(0);
        TargetTypeParam.ParameterCurve.GetData().AddKey(FFrameNumber(0), 0);
        ByteParams.Add(TargetTypeParam);
        
        FKoratByteParameterNameAndCurve EvalSpaceParam;
        EvalSpaceParam.ParameterName = FName("EvaluationSpace");
        EvalSpaceParam.ParameterCurve.SetEnum(StaticEnum<ESSLightingPositonMethod>());
        EvalSpaceParam.ParameterCurve.SetDefault(2);
        EvalSpaceParam.ParameterCurve.GetData().AddKey(FFrameNumber(0), 2);
        ByteParams.Add(EvalSpaceParam);
        
        TArray<FKoratIntParameterNameAndCurve>& IntParams = NewSection->GetIntParameterNamesAndCurves();
        
        FKoratIntParameterNameAndCurve PriorityParam;
        PriorityParam.ParameterName = FName("Priority");
        PriorityParam.ParameterCurve.SetDefault(10000);
        PriorityParam.ParameterCurve.GetData().AddKey(FFrameNumber(0), 10000);
        IntParams.Add(PriorityParam);
        
        NewSection->AddBoolParameterKey("OverrideFxParam", 0, true);
        NewSection->AddBoolParameterKey("ActivePointLightSequencerTrack", 0, true);
        NewSection->AddScalarParameterKey("Scale", 0, 0.0f);
        NewSection->AddScalarParameterKey("Intensity", 0, 0.0f);
        NewSection->AddScalarParameterKey("FrequencyValue", 0, 0.0f);
        NewSection->AddScalarParameterKey("WiggleStrength", 0, 0.0f);
        NewSection->AddVector2DParameterKey("WiggleMinMax", 0, FVector2D(0.0f, 0.0f));
        NewSection->AddVectorParameterKey("Location", 0, FVector(0.0f, 0.0f, 0.0f));
        NewSection->AddColorParameterKey("LightColor", 0, FLinearColor(0.0f, 0.0f, 0.0f, 1.0f));
        NewSection->AddColorParameterKey("ShadowColor", 0, FLinearColor(0.0f, 0.0f, 0.0f, 1.0f));
        
        NewSection->ReconstructChannelProxy_Public();

        NewTrack->AddSection(*NewSection);

        GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
    }
}

bool FKoratToonPointLightTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const
{
    return TrackClass == UMovieSceneKoratToonPointLightTrack::StaticClass();
}

void FKoratToonPointLightTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        LOCTEXT("AddKoratToonPointLightTrack", "Korat Toon Point Light Track"),
        LOCTEXT("AddKoratToonPointLightTrackTooltip", "Adds a Korat Toon Point Light Track to this actor."),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FKoratToonPointLightTrackEditor::HandleAddKoratToonPointLightTrackForSelectedObjects))
    );
}

void FKoratToonPointLightTrackEditor::HandleAddKoratToonPointLightTrackForSelectedObjects()
{
    if (!GetSequencer()) return;

    TArray<FGuid> SelectedObjectGuids;
    GetSequencer()->GetSelectedObjects(SelectedObjectGuids);

    for (const FGuid& Guid : SelectedObjectGuids)
    {
        HandleAddKoratToonPointLightTrack(Guid);
    }
}

TSharedRef<ISequencerSection> FKoratToonPointLightTrackEditor::MakeSectionInterface(
    UMovieSceneSection& SectionObject,
    UMovieSceneTrack& Track,
    FGuid ObjectBinding)
{
    return MakeShareable(new FKoratToonPointLightSection(SectionObject));
}

int32 FKoratToonPointLightSection::OnPaintSection(FSequencerSectionPainter& Painter) const
{
    return Painter.LayerId;
}

#undef LOCTEXT_NAMESPACE