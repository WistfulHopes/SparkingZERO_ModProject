#include "SSCharacterWarpCommandInfo.h"

FSSCharacterWarpCommandInfo::FSSCharacterWarpCommandInfo() {
    this->LinkType = ECharacterWarpLinkType::None;
    this->AfterDirectionType = ECharacterWarpAfterDirectionType::None;
    this->AttachTiming = ECharacterWarpResultAttachTimingType::None;
    this->IndependRequest = ECharacterWarpIndependRequestType::None;
}

