#include "KoratMovieSceneEventSceneImpactSection.h"
#include "Channels/MovieSceneChannelProxy.h"

UKoratMovieSceneEventSceneImpactSection::UKoratMovieSceneEventSceneImpactSection() 
{
    bSupportsInfiniteRange = true;
#if WITH_EDITOR
    FMovieSceneChannelProxyData Channels;

    Channels.Add(RebindEvent00Reference, FMovieSceneChannelMetaData(FName("RebindEvent00Reference"), NSLOCTEXT("MovieScene", "RebindEvent00Reference", "RebindEvent00Reference")));
    Channels.Add(RebindEvent01Reference, FMovieSceneChannelMetaData(FName("RebindEvent01Reference"), NSLOCTEXT("MovieScene", "RebindEvent01Reference", "RebindEvent01Reference")));

    ChannelProxy = MakeShared<FMovieSceneChannelProxy>(MoveTemp(Channels));
#endif
}