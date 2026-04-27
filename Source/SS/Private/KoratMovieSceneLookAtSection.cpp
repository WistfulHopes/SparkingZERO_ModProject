#include "KoratMovieSceneLookAtSection.h"
#include "Channels/MovieSceneChannelProxy.h"

UKoratMovieSceneLookAtSection::UKoratMovieSceneLookAtSection() {
    bSupportsInfiniteRange = true;
#if WITH_EDITOR
    FMovieSceneChannelProxyData Channels;

    Channels.AddWithDefaultEditorData(PartFlags, FMovieSceneChannelMetaData(FName("PartFlags"), NSLOCTEXT("MovieScene", "PartFlags", "Part Flags")));
    Channels.AddWithDefaultEditorData(EnableLookat, FMovieSceneChannelMetaData(FName("EnableLookat"), NSLOCTEXT("MovieScene", "EnableLookat", "Enable LookAt")));
    Channels.AddWithDefaultEditorData(UpdateLookAt, FMovieSceneChannelMetaData(FName("UpdateLookAt"), NSLOCTEXT("MovieScene", "UpdateLookAt", "Update LookAt")));
    Channels.Add(Target1stReference, FMovieSceneChannelMetaData(FName("Target1stReference"), NSLOCTEXT("MovieScene", "Target1stReference", "Target 1st Reference")));
    Channels.AddWithDefaultEditorData(Target1stSocketName,  FMovieSceneChannelMetaData(FName("Target1stSocketName"),  NSLOCTEXT("MovieScene", "Target1stSocketName",  "Target First Socket")));
    Channels.Add(Target1stReference, FMovieSceneChannelMetaData(FName("Target2ndReference"), NSLOCTEXT("MovieScene", "Target2ndReference", "Target 2nd Reference")));
    Channels.AddWithDefaultEditorData(Target2ndSocketName,  FMovieSceneChannelMetaData(FName("Target2ndSocketName"),  NSLOCTEXT("MovieScene", "Target2ndSocketName",  "Target Second Socket")));
    Channels.AddWithDefaultEditorData(Alpha, FMovieSceneChannelMetaData(FName("Alpha"), NSLOCTEXT("MovieScene", "Alpha", "Alpha")));
    Channels.AddWithDefaultEditorData(EnableOverrideBlendTime, FMovieSceneChannelMetaData(FName("EnableOverrideBlendTime"), NSLOCTEXT("MovieScene", "EnableOverrideBlendTime", "Enable Override Blend Time")));
    Channels.AddWithDefaultEditorData(OverrideBlendTime, FMovieSceneChannelMetaData(FName("OverrideBlendTime"), NSLOCTEXT("MovieScene", "OverrideBlendTime", "Override Blend Time")));

    ChannelProxy = MakeShared<FMovieSceneChannelProxy>(MoveTemp(Channels));
#endif
    
    Target1stSocketName.SetDefault(TEXT(""));
    Target2ndSocketName.SetDefault(TEXT(""));
    PartFlags.SetDefault(2);
    Alpha.SetDefault(0.0f);
    OverrideBlendTime.SetDefault(0.0f);
    EnableLookat.SetDefault(true);
    UpdateLookAt.SetDefault(true);
    EnableOverrideBlendTime.SetDefault(true);
}

