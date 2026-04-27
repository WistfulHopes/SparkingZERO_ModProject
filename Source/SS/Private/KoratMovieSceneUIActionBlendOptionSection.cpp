#include "KoratMovieSceneUIActionBlendOptionSection.h"
#include "Channels/MovieSceneChannelProxy.h"

UKoratMovieSceneUIActionBlendOptionSection::UKoratMovieSceneUIActionBlendOptionSection() {
    bSupportsInfiniteRange = true;
    
#if WITH_EDITOR
    FMovieSceneChannelProxyData Channels;
    
    Channels.AddWithDefaultEditorData(OverrideBlendIn, FMovieSceneChannelMetaData(FName("OverrideBlendIn"), NSLOCTEXT("MovieScene", "OverrideBlendIn", "Override Blend In")));
    Channels.AddWithDefaultEditorData(BlendInBlendTime, FMovieSceneChannelMetaData(FName("BlendInBlendTime"), NSLOCTEXT("MovieScene", "BlendInBlendTime", "BlendIn Blend Time")));
    Channels.AddWithDefaultEditorData(BlendInBlendOption, FMovieSceneChannelMetaData(FName("BlendInBlendOption"), NSLOCTEXT("MovieScene", "BlendInBlendOption", "BlendIn Blend Option")));
    Channels.AddWithDefaultEditorData(BlendInCustomCurve, FMovieSceneChannelMetaData(FName("BlendInCustomCurve"), NSLOCTEXT("MovieScene", "BlendInCustomCurve", "BlendIn Custom Curve")));
    Channels.AddWithDefaultEditorData(OverrideBlendOut,  FMovieSceneChannelMetaData(FName("OverrideBlendOut"),  NSLOCTEXT("MovieScene", "OverrideBlendOut",  "Override BlendOut")));
    Channels.AddWithDefaultEditorData(BlendOutBlendTime, FMovieSceneChannelMetaData(FName("BlendOutBlendTime"), NSLOCTEXT("MovieScene", "BlendOutBlendTime", "BlendOut Blend Time")));
    Channels.AddWithDefaultEditorData(BlendOutBlendOption,  FMovieSceneChannelMetaData(FName("BlendOutBlendOption"),  NSLOCTEXT("MovieScene", "BlendOutBlendOption",  "BlendOut Blend Option")));
    Channels.AddWithDefaultEditorData(BlendOutCustomCurve, FMovieSceneChannelMetaData(FName("BlendOutCustomCurve"), NSLOCTEXT("MovieScene", "BlendOutCustomCurve", "BlendOut Custom Curve")));
    Channels.AddWithDefaultEditorData(BlendOutTriggerTime, FMovieSceneChannelMetaData(FName("BlendOutTriggerTime"), NSLOCTEXT("MovieScene", "BlendOutTriggerTime", "BlendOut Trigger Time")));
    Channels.AddWithDefaultEditorData(EnableAutoBlendOut, FMovieSceneChannelMetaData(FName("EnableAutoBlendOut"), NSLOCTEXT("MovieScene", "EnableAutoBlendOut", "Enable Auto BlendOut")));

    ChannelProxy = MakeShared<FMovieSceneChannelProxy>(MoveTemp(Channels));
    
#endif
    BlendInCustomCurve.SetPropertyClass(UCurveFloat::StaticClass());
    BlendOutCustomCurve.SetPropertyClass(UCurveFloat::StaticClass());

    OverrideBlendIn.SetDefault(true);
    BlendInBlendTime.SetDefault(0.0f);
    BlendInBlendOption.SetDefault(0);
    OverrideBlendOut.SetDefault(false);
    BlendOutBlendTime.SetDefault(0.0f);
    BlendOutBlendOption.SetDefault(0);
    BlendOutTriggerTime.SetDefault(0.0f);
    EnableAutoBlendOut.SetDefault(false);
}
