#include "SSCharacterWarpCmdTransporter.h"

FSSCharacterWarpCmdTransporter::FSSCharacterWarpCmdTransporter() {
    this->ActiveActionMainType = EKoratActionCategoryType::WaitOrMove;
    this->ActiveActionSubType = EKoratActionSubCategoryType::None;
    this->OwnerCharacter = NULL;
    this->OwnerActor = NULL;
    this->TargetCharacter = NULL;
    this->OtherActor = NULL;
}

