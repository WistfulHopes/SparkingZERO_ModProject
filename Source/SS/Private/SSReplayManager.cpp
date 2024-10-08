#include "SSReplayManager.h"

USSReplayManager::USSReplayManager() {
}

bool USSReplayManager::Stop(UObject* WorldContextObject) {
    return false;
}

bool USSReplayManager::Play(UObject* WorldContextObject) {
    return false;
}

bool USSReplayManager::Pause(UObject* WorldContextObject) {
    return false;
}

FSSReplayUIPlayInfo USSReplayManager::GetPlayState() const {
    return FSSReplayUIPlayInfo{};
}

bool USSReplayManager::ChangeNextPlayCamera(UObject* WorldContextObject) {
    return false;
}


