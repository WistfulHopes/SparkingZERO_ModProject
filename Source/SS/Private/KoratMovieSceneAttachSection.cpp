#include "KoratMovieSceneAttachSection.h"
#include "Channels/MovieSceneChannelProxy.h"

UKoratMovieSceneAttachSection::UKoratMovieSceneAttachSection()
{
    bSupportsInfiniteRange = true;
#if WITH_EDITOR
    FMovieSceneChannelProxyData Channels;

    Channels.Add(PositionReference, FMovieSceneChannelMetaData(FName("PositionReference"),   NSLOCTEXT("MovieScene", "PositionReference", "Position Reference")));
    Channels.Add(RotationReference, FMovieSceneChannelMetaData(FName("RotationReference"),   NSLOCTEXT("MovieScene", "RotationReference", "Rotation Reference")));

    Channels.AddWithDefaultEditorData(PositionFirstSocketName,  FMovieSceneChannelMetaData(FName("PositionFirstSocket"),  NSLOCTEXT("MovieScene", "PositionFirstSocket",  "Position First Socket")));
    Channels.AddWithDefaultEditorData(PositionSecondSocketName, FMovieSceneChannelMetaData(FName("PositionSecondSocket"), NSLOCTEXT("MovieScene", "PositionSecondSocket", "Position Second Socket")));
    Channels.AddWithDefaultEditorData(RotationFirstSocketName,  FMovieSceneChannelMetaData(FName("RotationFirstSocket"),  NSLOCTEXT("MovieScene", "RotationFirstSocket",  "Rotation First Socket")));
    Channels.AddWithDefaultEditorData(RotationSecondSocketName, FMovieSceneChannelMetaData(FName("RotationSecondSocket"), NSLOCTEXT("MovieScene", "RotationSecondSocket", "Rotation Second Socket")));

    Channels.AddWithDefaultEditorData(PositionBlendRate, FMovieSceneChannelMetaData(FName("PositionBlendRate"), NSLOCTEXT("MovieScene", "PositionBlendRate", "Position Blend Rate")));
    Channels.AddWithDefaultEditorData(RotationBlendRate, FMovieSceneChannelMetaData(FName("RotationBlendRate"), NSLOCTEXT("MovieScene", "RotationBlendRate", "Rotation Blend Rate")));

    Channels.AddWithDefaultEditorData(PositionFollowing, FMovieSceneChannelMetaData(FName("PositionFollowing"), NSLOCTEXT("MovieScene", "PositionFollowing", "Follow Position")));
    Channels.AddWithDefaultEditorData(RotationFollowing, FMovieSceneChannelMetaData(FName("RotationFollowing"), NSLOCTEXT("MovieScene", "RotationFollowing", "Follow Rotation")));

    ChannelProxy = MakeShared<FMovieSceneChannelProxy>(MoveTemp(Channels));
#endif
    
    PositionFirstSocketName.SetDefault(TEXT(""));
    PositionSecondSocketName.SetDefault(TEXT(""));
    RotationFirstSocketName.SetDefault(TEXT(""));
    RotationSecondSocketName.SetDefault(TEXT(""));
    PositionBlendRate.SetDefault(0.0f);
    RotationBlendRate.SetDefault(0.0f);
    PositionFollowing.SetDefault(true);
    RotationFollowing.SetDefault(true);

}

