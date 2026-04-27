#include "KoratMovieSceneBattleSubtitleSection.h"
#include "KoratMovieSceneBattleSubtitlePayload.h"
#include "EKoratMovieSceneBattleSubtitleTargetType.h"
#include "KoratBattleConversation.h"
#include "EKoratBattleConversationMode.h"

UKoratMovieSceneBattleSubtitleSection::UKoratMovieSceneBattleSubtitleSection()
{
    bSupportsInfiniteRange = true;

    FKoratMovieSceneBattleSubtitlePayload DefaultPayload;

    DefaultPayload.TargetType = EKoratMovieSceneBattleSubtitleTargetType::Myself;
    DefaultPayload.IsBattleVoice = true;
    DefaultPayload.bFateBranchType = false;

    FKoratBattleConversation& Conversation = DefaultPayload.BattleConversation;
    Conversation.Text = FText::FromString(TEXT(""));
    Conversation.BattleConversationMode = EKoratBattleConversationMode::Character;
    Conversation.HiddenSubtitles = false;
    Conversation.Time = 1.5f;
    Conversation.Volume = -1.0f;

    // Add a default keyframe at time 0 (ticks = 0)
    FFrameNumber DefaultTime = FFrameNumber(0);
    EventData.AddKey(DefaultTime, DefaultPayload);

    // Set the range of frames (this could be dynamically changed later)
    SetRange(TRange<FFrameNumber>::All());
}

