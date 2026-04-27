#include "SSBattleSetupRequestCommand.h"

FSSBattleSetupRequestCommand::FSSBattleSetupRequestCommand() {
    this->Request = ESSCstRequestCommand::None;
    this->OverridePlaySide = 0;
    this->MemberSlot = 0;
    this->CameraTransition = EKoratBattleSetupTransition::None;
}

