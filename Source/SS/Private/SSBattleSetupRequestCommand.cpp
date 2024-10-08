#include "SSBattleSetupRequestCommand.h"

FSSBattleSetupRequestCommand::FSSBattleSetupRequestCommand() {
    this->Request = ESSCstRequestCommand::None;
    this->MemberSlot = 0;
    this->CameraTransition = EKoratBattleSetupTransition::None;
}

