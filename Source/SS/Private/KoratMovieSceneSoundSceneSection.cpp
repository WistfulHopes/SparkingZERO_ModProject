#include "KoratMovieSceneSoundSceneSection.h"
#include "Channels/MovieSceneByteChannel.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Channels/MovieSceneChannelProxy.h"
#include "ControlTypeParameterNameAndCurve.h"
#include "UObject/EnumProperty.h"

void UKoratMovieSceneSoundSceneSection::ReconstructChannelProxy_Public()
{
#if WITH_EDITOR
    FMovieSceneChannelProxyData Channels;

    {
        FControlTypeParameterNameAndCurve& Param = EnumCurve;

        if (Param.EnumChannel.GetEnum() == nullptr)
        {
            Param.EnumChannel.SetEnum(StaticEnum<EKoratSequenceSoundControlType>());
        }
        TMovieSceneChannelData<uint8> ChannelData = Param.EnumChannel.GetData();
        if (ChannelData.GetTimes().Num() == 0)
        {
            const UEnum* EnumAsset = Param.EnumChannel.GetEnum();
            if (EnumAsset)
            {
                FFrameNumber FrameZero(0);
                int64 FirstEnumValue = EnumAsset->GetValueByIndex(0);
                ChannelData.AddKey(FrameZero, static_cast<uint8>(FirstEnumValue));
            }
        }
        Param.EnumChannel.RemoveDefault();
        FMovieSceneChannelMetaData MetaData;
        MetaData.SetIdentifiers(Param.ParameterName, FText::FromName(Param.ParameterName));
        MetaData.SortOrder = 0;
        MetaData.bCanCollapseToTrack = false;

        TMovieSceneExternalValue<uint8> ExternalValue;
        Channels.Add(Param.EnumChannel, MetaData, ExternalValue);
    }
    // ---------------- Bool ----------------
    int32 BoolSortBase = 100; // base offset so they appear before scalars if you want
    for (int32 Index = 0; Index < BoolParameterNamesAndCurves.Num(); ++Index)
    {
        FBoolParameterNameAndCurve& Param = BoolParameterNamesAndCurves[Index];
        
        Param.ParameterCurve.RemoveDefault();
        {
            TMovieSceneChannelData<bool> ChannelData = Param.ParameterCurve.GetData();
            if (ChannelData.GetTimes().Num() == 0)
            {
                const FFrameNumber FrameZero(0);
                ChannelData.AddKey(FrameZero, false);
            }
        }
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

UKoratMovieSceneSoundSceneSection::UKoratMovieSceneSoundSceneSection() {
    this->SoundCueID = -1;
    this->SoundGroupType = ESSSoundGroupType::UI;
    this->bStopSoundEndPlay = false;
    this->Volume = 100.00f;
    this->TickEvenWhenPaused = false;
}

void UKoratMovieSceneSoundSceneSection::AddControlTypeParameterKey(FName InParameterName, FFrameNumber InTime, EKoratSequenceSoundControlType InValue) {
}

const TArray<FBoolParameterNameAndCurve>& UKoratMovieSceneSoundSceneSection::GetBoolCurves() const
{
    return BoolParameterNamesAndCurves;
}
TArray<FBoolParameterNameAndCurve>& UKoratMovieSceneSoundSceneSection::GetBoolCurves()
{
    return BoolParameterNamesAndCurves;
}

void UKoratMovieSceneSoundSceneSection::PostLoad()
{
    Super::PostLoad();

#if WITH_EDITOR
    ReconstructChannelProxy_Public();
#endif
}
