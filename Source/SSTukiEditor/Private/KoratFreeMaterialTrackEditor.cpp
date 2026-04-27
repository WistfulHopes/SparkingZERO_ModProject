#include "KoratFreeMaterialTrackEditor.h"
#include "MovieSceneKoratFreeMaterialTrack.h"
#include "MovieSceneTrackEditor.h" 
#include "ScopedTransaction.h"
#include "MovieScene.h"
#include "SequencerSectionPainter.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Colors/SColorBlock.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SNumericEntryBox.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/Colors/SColorPicker.h"

#define LOCTEXT_NAMESPACE "FKoratFreeMaterialTrackEditor"

void FKoratFreeMaterialTrackEditor::ExtendObjectBindingTrackMenu(
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
                LOCTEXT("AddKoratFreeMaterialTrackActor", "Korat FreeMaterial Track"),
                LOCTEXT("AddKoratFreeMaterialTrackActorTooltip", "Adds a KoratFreeMaterial Track to this actor."),
                FSlateIcon(),
                FUIAction(FExecuteAction::CreateRaw(this, &FKoratFreeMaterialTrackEditor::HandleAddKoratFreeMaterialTrack, Binding))
            );
        })
    );
}

void FKoratFreeMaterialTrackEditor::BuildTrackContextMenu(FMenuBuilder& MenuBuilder, UMovieSceneTrack* Track)
{
    MenuBuilder.AddSubMenu(
        LOCTEXT("AddKoratParam", "Add Material Parameters"),
        LOCTEXT("AddKoratParamTooltip", "Choose a Material Parameter to add"),
        FNewMenuDelegate::CreateLambda([Track](FMenuBuilder& RootMenu)
        {
            // Scalar parameters
            TArray<FString> ScalarParams = {
                "AfterImageActive","BaseScale","BaseScale_Add","BodyLighting1","BodyLighting2","BodyLighting3",
                "CameraDitherSaturation","CameraDitherTiling","CharacterDitherValue","ChrContrast","ChrDecal_Brightness",
                "ChrLightAdjustment","ChrReflection3OffsetU","ChrReflectionOffsetU","ChrRimlightPower","ChrRimlightSize",
                "ChrSpecularPower","ChrToplightPower","ChrToplight_Intensity","ChrToplight_X_Add","ChrToplight_Y_Add",
                "ChrToplight_Z_Add","ChrUVFlip","ChrVisibilitySwitch","Chr_Rotating","DamageAlpha","DynamicLightAdditive",
                "DynamicLightShadow","EyeColor1Power","EyeColorPower","EyeRotate","EyeSpecularPower","FLTSpecularPower",
                "FaceLighting1","FaceLighting2","FaceLighting3","FaceLighting4","FaceLighting5","FaceLighting6",
                "FaceShadowEnable","ForceDisableDynamicShadows","GradientTexture2Weight","KOKFrequency","KOKWeight",
                "M_ChrToplight_Z_Add","M_Eye_Scale","M_Eye_ScaleU","M_Eye_ScaleV","M_Eye_U_Position","M_Eye_V_Position","M_Eye_U_Position_L","M_Eye_U_Position_R",
                "M_Eye_V_Position_L","M_Eye_V_Position_R","M_Gloss","PerSectionCameraRelativeLightFactor","RefShadowDarkness",
                "ReflectionFlip","ReflectionPower","RimlightBlend","RimlightSize","RimlightSmooth","Rimlight_Intensity",
                "RmilightOffset_Z","SNKWeight","SP1ColorWeight","SP2ColorWeight","SPColorMult1_Weight","ShadowIntensity",
                "ShadowStep","SpecularShininess","SpecularSmooth","ToplightCoverage","Toplight_Mult","TransitionScale",
                "UVAnim","UVOffset_U","UVOffset_V","UseEyeColor_B","UseFaceColor1","UseReflection","UseReflection2",
                "UseReflection3", "ChrOutlineWidth_Add"
            };

            // Color parameters
            TArray<FString> ColorParams = {
                "CameraDitherColor","ChrColorMult","Chr_UVTransform_Scale_R","Color1","Color1Back","Color2","ColorAdd",
                "ColorMult","DamageColor1","DamageColor2","DecalColor","DynamicLightAmbient","DynamicLightColor",
                "DynamicLightDirection","EyeColor","EyeColor2","EyeColor2_B","EyeColor_B","EyeSpecularColor",
                "EyeSpecularColor_B","FaceColor1","GradientAdjust1","GradientAdjust2","HairColorAdd","HairColor_Mult",
                "KOKColorOverride","LineColor","PerSectionCameraRelativeLightDirection","ReflectionColor","RimLightColor",
                "SP1_Color1","SP1_EyeColor","SP1_EyeColor2","SP1_EyeSpecularColor","SP2_Color1","SPColorMult1",
                "Shadow1","Shadow2","SpecularColor","SpecularDirection", "ShellColor"
            };
            
            ScalarParams.Sort();
            // --- Submenu: Scalar ---
            RootMenu.AddSubMenu(
                LOCTEXT("ScalarParams", "Scalar Parameters"),
                LOCTEXT("ScalarParams_Tooltip", "Add a Scalar Parameter"),
                FNewMenuDelegate::CreateLambda([Track, ScalarParams](FMenuBuilder& SubMenu)
                {
                    // Existing scalar param list
                    for (const FString& Param : ScalarParams)
                    {
                        SubMenu.AddMenuEntry(
                            FText::FromString(Param),
                            FText::FromString("Add " + Param + " Scalar Parameter"),
                            FSlateIcon(),
                            FUIAction(FExecuteAction::CreateLambda([Track, Param]()
                            {
                                if (auto* ParamTrack = Cast<UMovieSceneKoratFreeMaterialTrack>(Track))
                                {
                                    UMovieSceneParameterSection* ParamSection = nullptr;
            
                                    if (ParamTrack->GetAllSections().Num() > 0)
                                    {
                                        ParamSection = Cast<UMovieSceneParameterSection>(ParamTrack->GetAllSections()[0]);
                                    }
                                    else
                                    {
                                        ParamSection = Cast<UMovieSceneParameterSection>(ParamTrack->CreateNewSection());
                                        if (ParamSection)
                                        {
                                            ParamTrack->AddSection(*ParamSection);
                                            ParamSection->SetRange(TRange<FFrameNumber>::All());
                                        }
                                    }
            
                                    if (ParamSection)
                                    {
                                        ParamSection->AddScalarParameterKey(*Param, 0, 0.f);
                                    }
                                }
                            }))
                        );
                    }
            
                    // Entry: Add New Scalar Parameter
                    SubMenu.AddMenuEntry(
                        LOCTEXT("AddNewScalarParam", "Add New Scalar Parameter..."),
                        LOCTEXT("AddNewScalarParam_Tooltip", "Type a new scalar parameter name to add."),
                        FSlateIcon(),
                        FUIAction(FExecuteAction::CreateLambda([WeakTrack = TWeakObjectPtr<UMovieSceneTrack>(Track)]()
                        {
                            if (!WeakTrack.IsValid())
                            {
                                return;
                            }
                    
                            const TSharedRef<SEditableTextBox> ScalarInputTextBox = SNew(SEditableTextBox);
                    
                            const TSharedRef<SWindow> ScalarInputWindow = SNew(SWindow)
                                .Title(LOCTEXT("EnterScalarParamName", "Enter Scalar Parameter Name"))
                                .ClientSize(FVector2D(300, 100))
                                .SupportsMinimize(false)
                                .SupportsMaximize(false)
                                .IsPopupWindow(true)
                                [
                                    SNew(SVerticalBox)
                                    + SVerticalBox::Slot().Padding(10).AutoHeight()
                                    [
                                        ScalarInputTextBox
                                    ]
                                    + SVerticalBox::Slot().Padding(10).AutoHeight().HAlign(HAlign_Right)
                                    [
                                        SNew(SButton)
                                        .Text(LOCTEXT("OK", "OK"))
                                        .OnClicked_Lambda([WeakTrack, ScalarInputTextBox, WeakScalarWindow = TWeakPtr<SWindow>(ScalarInputWindow)]()
                                        {
                                            if (!WeakTrack.IsValid())
                                            {
                                                return FReply::Handled();
                                            }
                    
                                            UMovieSceneKoratFreeMaterialTrack* ParamTrack = Cast<UMovieSceneKoratFreeMaterialTrack>(WeakTrack.Get());
                                            if (!ParamTrack)
                                            {
                                                return FReply::Handled();
                                            }
                    
                                            const FString NewParam = ScalarInputTextBox->GetText().ToString().TrimStartAndEnd();
                                            if (NewParam.IsEmpty())
                                            {
                                                return FReply::Handled();
                                            }
                    
                                            UMovieSceneParameterSection* ParamSection = nullptr;
                    
                                            if (ParamTrack->GetAllSections().Num() > 0)
                                            {
                                                ParamSection = Cast<UMovieSceneParameterSection>(ParamTrack->GetAllSections()[0]);
                                            }
                                            else
                                            {
                                                ParamSection = Cast<UMovieSceneParameterSection>(ParamTrack->CreateNewSection());
                                                if (ParamSection)
                                                {
                                                    ParamTrack->AddSection(*ParamSection);
                                                    ParamSection->SetRange(TRange<FFrameNumber>::All());
                                                }
                                            }
                    
                                            if (ParamSection)
                                            {
                                                ParamSection->AddScalarParameterKey(*NewParam, 0, 0.f);
                                            }
                    
                                            TSharedPtr<SWindow> PinnedWindow = WeakScalarWindow.Pin();
                                            if (PinnedWindow.IsValid())
                                            {
                                                FSlateApplication::Get().RequestDestroyWindow(PinnedWindow.ToSharedRef());
                                            }
                    
                                            return FReply::Handled();
                                        })
                                    ]
                                ];
                    
                            // Store result to silence nodiscard warning
                            TSharedPtr<IMenu> DummyMenuRef = FSlateApplication::Get().PushMenu(
                                FSlateApplication::Get().GetActiveTopLevelWindow().ToSharedRef(),
                                FWidgetPath(),
                                ScalarInputWindow,
                                FSlateApplication::Get().GetCursorPos(),
                                FPopupTransitionEffect(FPopupTransitionEffect::ContextMenu)
                            );
                        }))
                    );
                })
            );

            ColorParams.Sort();
            // --- Submenu: Color ---
            RootMenu.AddSubMenu(
                LOCTEXT("ColorParams", "Color Parameters"),
                LOCTEXT("ColorParams_Tooltip", "Add a Color Parameter"),
                FNewMenuDelegate::CreateLambda([Track, ColorParams](FMenuBuilder& SubMenu)
                {
                    for (const FString& Param : ColorParams)
                    {
                        SubMenu.AddMenuEntry(
                            FText::FromString(Param),
                            FText::FromString("Add" + Param + "Color Parameter"),
                            FSlateIcon(),
                            FUIAction(FExecuteAction::CreateLambda([Track, Param]()
                            {
                                if (auto* ParamTrack = Cast<UMovieSceneKoratFreeMaterialTrack>(Track))
                                {
                                    UMovieSceneParameterSection* ParamSection = nullptr;

                                    if (ParamTrack->GetAllSections().Num() > 0)
                                    {
                                        ParamSection = Cast<UMovieSceneParameterSection>(ParamTrack->GetAllSections()[0]);
                                    }
                                    else
                                    {
                                        ParamSection = Cast<UMovieSceneParameterSection>(ParamTrack->CreateNewSection());
                                        ParamTrack->AddSection(*ParamSection);
                                        ParamSection->SetRange(TRange<FFrameNumber>::All());
                                    }

                                    if (ParamSection)
                                    {
                                        ParamSection->AddColorParameterKey(*Param, 0, FLinearColor(0.f, 0.f, 0.f, 1.f));
                                    }
                                }
                            }))
                        );
                    }
                    SubMenu.AddMenuEntry(
                        LOCTEXT("AddNewColorParam", "Add New Color Parameter..."),
                        LOCTEXT("AddNewColorParam_Tooltip", "Type a new color parameter name to add."),
                        FSlateIcon(),
                        FUIAction(FExecuteAction::CreateLambda([WeakTrack = TWeakObjectPtr<UMovieSceneTrack>(Track)]()
                        {
                            if (!WeakTrack.IsValid())
                            {
                                return;
                            }
                    
                            const TSharedRef<SEditableTextBox> ColorInputTextBox = SNew(SEditableTextBox);
                    
                            const TSharedRef<SWindow> ColorInputWindow = SNew(SWindow)
                                .Title(LOCTEXT("EnterColorParamName", "Enter Color Parameter Name"))
                                .ClientSize(FVector2D(300, 100))
                                .SupportsMinimize(false)
                                .SupportsMaximize(false)
                                .IsPopupWindow(true)
                                [
                                    SNew(SVerticalBox)
                                    + SVerticalBox::Slot().Padding(10).AutoHeight()
                                    [
                                        ColorInputTextBox
                                    ]
                                    + SVerticalBox::Slot().Padding(10).AutoHeight().HAlign(HAlign_Right)
                                    [
                                        SNew(SButton)
                                        .Text(LOCTEXT("OK", "OK"))
                                        .OnClicked_Lambda([WeakTrack, ColorInputTextBox, WeakColorWindow = TWeakPtr<SWindow>(ColorInputWindow)]()
                                        {
                                            if (!WeakTrack.IsValid())
                                            {
                                                return FReply::Handled();
                                            }
                    
                                            UMovieSceneKoratFreeMaterialTrack* ParamTrack = Cast<UMovieSceneKoratFreeMaterialTrack>(WeakTrack.Get());
                                            if (!ParamTrack)
                                            {
                                                return FReply::Handled();
                                            }
                    
                                            const FString NewParam = ColorInputTextBox->GetText().ToString().TrimStartAndEnd();
                                            if (NewParam.IsEmpty())
                                            {
                                                return FReply::Handled();
                                            }
                    
                                            UMovieSceneParameterSection* ParamSection = nullptr;
                    
                                            if (ParamTrack->GetAllSections().Num() > 0)
                                            {
                                                ParamSection = Cast<UMovieSceneParameterSection>(ParamTrack->GetAllSections()[0]);
                                            }
                                            else
                                            {
                                                ParamSection = Cast<UMovieSceneParameterSection>(ParamTrack->CreateNewSection());
                                                if (ParamSection)
                                                {
                                                    ParamTrack->AddSection(*ParamSection);
                                                    ParamSection->SetRange(TRange<FFrameNumber>::All());
                                                }
                                            }
                    
                                            if (ParamSection)
                                            {
                                                ParamSection->AddColorParameterKey(*NewParam, 0, FLinearColor(0.f, 0.f, 0.f, 1.f));
                                            }
                    
                                            TSharedPtr<SWindow> PinnedWindow = WeakColorWindow.Pin();
                                            if (PinnedWindow.IsValid())
                                            {
                                                FSlateApplication::Get().RequestDestroyWindow(PinnedWindow.ToSharedRef());
                                            }
                    
                                            return FReply::Handled();
                                        })
                                    ]
                                ];
                    
                            // Store result to silence nodiscard warning
                            TSharedPtr<IMenu> DummyMenuRef = FSlateApplication::Get().PushMenu(
                                FSlateApplication::Get().GetActiveTopLevelWindow().ToSharedRef(),
                                FWidgetPath(),
                                ColorInputWindow,
                                FSlateApplication::Get().GetCursorPos(),
                                FPopupTransitionEffect(FPopupTransitionEffect::ContextMenu)
                            );
                        }))
                    );
                })
            );
        })
    );
}

void FKoratFreeMaterialTrackEditor::HandleAddKoratFreeMaterialTrack(FGuid Binding)
{
    UMovieScene* MovieScene = GetFocusedMovieScene();
    if (!MovieScene) return;

    const FScopedTransaction Transaction(LOCTEXT("AddKoratFreeMaterialTrackActor_Transaction", "Add KoratFreeMaterial Track to Actor"));
    MovieScene->Modify();

    UMovieSceneKoratFreeMaterialTrack* NewTrack = MovieScene->AddTrack<UMovieSceneKoratFreeMaterialTrack>(Binding);
    if (!NewTrack) return;

    NewTrack->Modify();

    UMovieSceneParameterSection* NewSection = NewObject<UMovieSceneParameterSection>(NewTrack, UMovieSceneParameterSection::StaticClass(), NAME_None, RF_Transactional);
    NewSection->SetRange(TRange<FFrameNumber>(0, 120000));
    NewSection->Modify();

    // Add keyable scalar parameters with default values
    
    // Add to track
    NewTrack->AddSection(*NewSection);

    GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
}

bool FKoratFreeMaterialTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const
{
    return TrackClass == UMovieSceneKoratFreeMaterialTrack::StaticClass();
}

void FKoratFreeMaterialTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        LOCTEXT("AddKoratFreeMaterialTrack", "KoratFreeMaterial Track"),
        LOCTEXT("AddKoratFreeMaterialTrackTooltip", "Adds a KoratFreeMaterial Track to this actor."),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FKoratFreeMaterialTrackEditor::HandleAddKoratFreeMaterialTrackForSelectedObjects))
    );
}

void FKoratFreeMaterialTrackEditor::HandleAddKoratFreeMaterialTrackForSelectedObjects()
{
    if (!GetSequencer()) return;

    TArray<FGuid> SelectedObjectGuids;
    GetSequencer()->GetSelectedObjects(SelectedObjectGuids);

    for (const FGuid& Guid : SelectedObjectGuids)
    {
        HandleAddKoratFreeMaterialTrack(Guid);
    }
}

TSharedRef<ISequencerSection> FKoratFreeMaterialTrackEditor::MakeSectionInterface(
    UMovieSceneSection& SectionObject,
    UMovieSceneTrack& Track,
    FGuid ObjectBinding)
{
    return MakeShareable(new FKoratFreeMaterialSection(SectionObject, GetSequencer().ToSharedRef()));
}

int32 FKoratFreeMaterialSection::OnPaintSection(FSequencerSectionPainter& Painter) const
{
    return Painter.LayerId;
}

#undef LOCTEXT_NAMESPACE