#include "SSTutorialMoviePlayer.h"

ASSTutorialMoviePlayer::ASSTutorialMoviePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MediaPlayer = NULL;
    this->CriMediaPlayer = NULL;
    this->TutorialMovieMenu = NULL;
    this->TutorialMovieWidget = NULL;
    this->FaderHUD = NULL;
    this->bLoaded = false;
    this->bRequestStart = false;
    this->bRequestSkip = false;
    this->bSkipAvailable = false;
    this->bPlayingLoopSection = false;
    this->BlackOutElapsed = 0.00f;
}

void ASSTutorialMoviePlayer::OnSkipButtonHoldProgress(USSMenuButton* InButton, float InProgress) {
}


