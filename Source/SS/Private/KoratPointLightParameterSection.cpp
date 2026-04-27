#include "KoratPointLightParameterSection.h"
#include "EKoratEffectToonPointLightTargetType.h"
#include "ESSLightingPositonMethod.h"
#include "Sections/MovieSceneParameterSection.h"
#include "Channels/MovieSceneChannelData.h"
#include "Channels/MovieSceneChannelEditorData.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Channels/MovieSceneByteChannel.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Channels/MovieSceneChannelProxy.h"
#include "KoratByteParameterNameAndCurve.h"
#include "KoratIntParameterNameAndCurve.h"
#include "UObject/EnumProperty.h"

void UKoratPointLightParameterSection::ReconstructChannelProxy_Public()
{
#if WITH_EDITOR
    FMovieSceneChannelProxyData Channels;
    
    for (FKoratByteParameterNameAndCurve& Param : GetByteParameterNamesAndCurves())
    {
        if (Param.ParameterCurve.GetEnum() == nullptr)
        {
            UE_LOG(LogTemp, Warning, TEXT("Byte parameter '%s' has no Enum set. Skipping."), *Param.ParameterName.ToString());
            continue; // or set a default enum, but only if you want to handle it gracefully
        }
    
        TMovieSceneChannelData<uint8> ChannelData = Param.ParameterCurve.GetData();
        if (ChannelData.GetTimes().Num() == 0)
        {
            const UEnum* EnumAsset = Param.ParameterCurve.GetEnum();
            if (EnumAsset)
            {
                FFrameNumber FrameZero(0);
                int64 FirstEnumValue = EnumAsset->GetValueByIndex(0);
                ChannelData.AddKey(FrameZero, static_cast<uint8>(FirstEnumValue));
            }
        }
    
        FMovieSceneChannelMetaData MetaData;
        MetaData.SetIdentifiers(Param.ParameterName, FText::FromName(Param.ParameterName));
        MetaData.SortOrder = 0;
        MetaData.bCanCollapseToTrack = false;
    
        TMovieSceneExternalValue<uint8> ExternalValue;
        Channels.Add(Param.ParameterCurve, MetaData, ExternalValue);
    }

    for (FKoratIntParameterNameAndCurve& Param : GetIntParameterNamesAndCurves())
    {
        TMovieSceneChannelData<int32> ChannelData = Param.ParameterCurve.GetData();
    
        // If no keyframes exist, add one at frame 0 using the default
        if (ChannelData.GetTimes().Num() == 0)
        {
            FFrameNumber FrameZero(0);
            int32 Value = Param.ParameterCurve.GetDefault().Get(0); // fallback if not set
            ChannelData.AddKey(FrameZero, Value);
        }
    
        // Set up metadata
        FMovieSceneChannelMetaData MetaData;
        MetaData.SetIdentifiers(Param.ParameterName, FText::FromName(Param.ParameterName));
        MetaData.SortOrder = 0;
        MetaData.bCanCollapseToTrack = false;
    
        // ExternalValue could be linked to a UI/preview system
        TMovieSceneExternalValue<int32> ExternalValue;
    
        // Add to channel proxy
        Channels.Add(Param.ParameterCurve, MetaData, ExternalValue);
    }

    // ---------------- Vector2D ----------------
    for (FVector2DParameterNameAndCurves& Param : Vector2DParameterNamesAndCurves)
    {
        const TCHAR* Components[2] = { TEXT("X"), TEXT("Y") };
        FMovieSceneFloatChannel* Curves[2] = { &Param.XCurve, &Param.YCurve };
    
        for (int32 i = 0; i < 2; ++i)
        {
            // Internal unique name: "Scale.X"
            FName CompName = *FString::Printf(TEXT("%s.%s"), *Param.ParameterName.ToString(), Components[i]);
    
            FMovieSceneChannelMetaData MetaData(
                CompName,
                FText::FromString(Components[i]) // show only "X" or "Y"
            );
            MetaData.SortOrder = 100 + i; // adjust offset as needed
            MetaData.Group = FText::FromName(Param.ParameterName); // group under "Scale"
            MetaData.bCanCollapseToTrack = true;
    
            Channels.Add(*Curves[i], MetaData, TMovieSceneExternalValue<float>());
        }
    }
    
    // ---------------- Vector ----------------
    for (FVectorParameterNameAndCurves& Param : VectorParameterNamesAndCurves)
    {
        const TCHAR* Components[3] = { TEXT("X"), TEXT("Y"), TEXT("Z") };
        FMovieSceneFloatChannel* Curves[3] = { &Param.XCurve, &Param.YCurve, &Param.ZCurve };
    
        for (int32 i = 0; i < 3; ++i)
        {
            FName CompName = *FString::Printf(TEXT("%s.%s"), *Param.ParameterName.ToString(), Components[i]);
    
            FMovieSceneChannelMetaData MetaData(
                CompName,
                FText::FromString(Components[i])
            );
            MetaData.SortOrder = 200 + i;
            MetaData.Group = FText::FromName(Param.ParameterName);
            MetaData.bCanCollapseToTrack = true;
    
            Channels.Add(*Curves[i], MetaData, TMovieSceneExternalValue<float>());
        }
    }
    
    // ---------------- Color ----------------
    for (FColorParameterNameAndCurves& Param : ColorParameterNamesAndCurves)
    {
        const TCHAR* Components[4] = { TEXT("R"), TEXT("G"), TEXT("B"), TEXT("A") };
        FMovieSceneFloatChannel* Curves[4] = { &Param.RedCurve, &Param.GreenCurve, &Param.BlueCurve, &Param.AlphaCurve };
    
        for (int32 i = 0; i < 4; ++i)
        {
            FName CompName = *FString::Printf(TEXT("%s.%s"), *Param.ParameterName.ToString(), Components[i]);
    
            FMovieSceneChannelMetaData MetaData(
                CompName,
                FText::FromString(Components[i])
            );
            MetaData.SortOrder = 300 + i;
            MetaData.Group = FText::FromName(Param.ParameterName);
            MetaData.bCanCollapseToTrack = true;
    
            Channels.Add(*Curves[i], MetaData, TMovieSceneExternalValue<float>());
        }
    }
    // ---------------- Scalar (float) ----------------
    int32 ScalarSortBase = 50; // arbitrary starting index
    for (int32 Index = 0; Index < ScalarParameterNamesAndCurves.Num(); ++Index)
    {
        FScalarParameterNameAndCurve& Param = ScalarParameterNamesAndCurves[Index];
    
        FMovieSceneChannelMetaData MetaData(
            Param.ParameterName,
            FText::FromName(Param.ParameterName)
        );
        MetaData.SortOrder = ScalarSortBase + Index; // enforce manual order
        MetaData.bCanCollapseToTrack = false;
    
        Channels.Add(Param.ParameterCurve, MetaData, TMovieSceneExternalValue<float>());
    }
    // ---------------- Bool ----------------
    int32 BoolSortBase = 100; // base offset so they appear before scalars if you want
    for (int32 Index = 0; Index < BoolParameterNamesAndCurves.Num(); ++Index)
    {
        FBoolParameterNameAndCurve& Param = BoolParameterNamesAndCurves[Index];
    
        FMovieSceneChannelMetaData MetaData(
            Param.ParameterName,
            FText::FromName(Param.ParameterName)
        );
        MetaData.SortOrder = BoolSortBase + Index; // preserve add order
        MetaData.bCanCollapseToTrack = false;
    
        Channels.Add(Param.ParameterCurve, MetaData, TMovieSceneExternalValue<bool>());
    }

    // Final proxy
    ChannelProxy = MakeShared<FMovieSceneChannelProxy>(MoveTemp(Channels));
#endif
}
UKoratPointLightParameterSection::UKoratPointLightParameterSection()
{
}

const TArray<FBoolParameterNameAndCurve>& UKoratPointLightParameterSection::GetBoolCurves() const
{
    return BoolParameterNamesAndCurves;
}

const TArray<FScalarParameterNameAndCurve>& UKoratPointLightParameterSection::GetScalarCurves() const
{
    return ScalarParameterNamesAndCurves;
}

const TArray<FVectorParameterNameAndCurves>& UKoratPointLightParameterSection::GetVectorCurves() const
{
    return VectorParameterNamesAndCurves;
}

const TArray<FVector2DParameterNameAndCurves>& UKoratPointLightParameterSection::GetVector2DCurves() const
{
    return Vector2DParameterNamesAndCurves;
}

const TArray<FColorParameterNameAndCurves>& UKoratPointLightParameterSection::GetColorCurves() const
{
    return ColorParameterNamesAndCurves;
}

void UKoratPointLightParameterSection::PostLoad()
{
    Super::PostLoad();

#if WITH_EDITOR
    ReconstructChannelProxy_Public();
#endif
}
