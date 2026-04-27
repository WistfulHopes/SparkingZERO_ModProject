#include "SSWarpRequestInfoDataAsset.h"

FSSWarpRequestInfoDataAsset::FSSWarpRequestInfoDataAsset() {
    this->bSaveReturnLocation = false;
    this->bWarpUseSequencerKey = false;
    this->bWarpUseSequencerReturnKey = false;
    this->WarpRequestType = EWarpRequestType::Auto;
    this->WarpRequestReturnType = EWarpRequestReturnType::ReturnAuto;
    this->WarpCtrlReturnWarpBeforeFrame = 0;
    this->bWarpCenterOtherCharacter = false;
    this->bWarpSaveRootMotionOffset = false;
    this->bWarpLoadRootMotionOffset = false;
    this->bWarpSaveAndLoadRootMotionOffset = false;
    this->bWarpReturnWarpRootMotionOffsetAdd = false;
    this->bEnableUpOffset = false;
}

