#include "KoratMovieSceneOutlineStencilIndexSection.h"
#include "Channels/MovieSceneChannelProxy.h"

UKoratMovieSceneOutlineStencilIndexSection::UKoratMovieSceneOutlineStencilIndexSection() 
{
    bSupportsInfiniteRange = true;
#if WITH_EDITOR
    FMovieSceneChannelProxyData Channels;

    Channels.AddWithDefaultEditorData(Stencil, FMovieSceneChannelMetaData(FName("Stencil"),   NSLOCTEXT("MovieScene", "Stencil", "Stencil")));

    ChannelProxy = MakeShared<FMovieSceneChannelProxy>(MoveTemp(Channels));
#endif
}