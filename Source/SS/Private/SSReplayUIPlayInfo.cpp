#include "SSReplayUIPlayInfo.h"

FSSReplayUIPlayInfo::FSSReplayUIPlayInfo() {
    this->PlayProgressBar = 0.00f;
    this->PlayState = ESSReplayUIPlayState::None;
    this->PlayCamera = ESSReplayUICamera::None;
}

