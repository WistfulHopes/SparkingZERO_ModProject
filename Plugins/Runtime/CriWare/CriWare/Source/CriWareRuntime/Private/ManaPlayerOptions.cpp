#include "ManaPlayerOptions.h"

FManaPlayerOptions::FManaPlayerOptions() {
    this->PlayOnOpen = EManaPlayerOptionBooleanOverride::UseManaPlayerSetting;
    this->Loop = EManaPlayerOptionBooleanOverride::UseManaPlayerSetting;
    this->PlaybackTimer = EManaPlaybackTimer::Default;
    this->MaxFrameDrop = EManaMaxFrameDrop::Disabled;
    this->EndFrameAction = EManaFrameAction::Default;
    this->TimeSyncedSource = NULL;
}

