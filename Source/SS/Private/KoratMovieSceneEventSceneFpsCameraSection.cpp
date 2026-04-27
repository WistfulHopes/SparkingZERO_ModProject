#include "KoratMovieSceneEventSceneFpsCameraSection.h"
#include "Channels/MovieSceneChannelProxy.h"

UKoratMovieSceneEventSceneFpsCameraSection::UKoratMovieSceneEventSceneFpsCameraSection() {
    bSupportsInfiniteRange = true;
#if WITH_EDITOR
    FMovieSceneChannelProxyData Channels;

    Channels.Add(LookAtReference, FMovieSceneChannelMetaData(FName("LookAtReference"), NSLOCTEXT("MovieScene", "LookAtReference", "LookAt Reference")));
    Channels.AddWithDefaultEditorData(Enable, FMovieSceneChannelMetaData(FName("Enable"), NSLOCTEXT("MovieScene", "Enable", "Enable")));
    Channels.AddWithDefaultEditorData(Alpha, FMovieSceneChannelMetaData(FName("Alpha"), NSLOCTEXT("MovieScene", "Alpha", "Alpha")));

    ChannelProxy = MakeShared<FMovieSceneChannelProxy>(MoveTemp(Channels));
#endif
    
    Enable.SetDefault(true);
    Alpha.SetDefault(1.0f);
}
