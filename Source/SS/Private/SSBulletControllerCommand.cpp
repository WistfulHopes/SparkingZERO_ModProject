#include "SSBulletControllerCommand.h"

FSSBulletControllerCommand::FSSBulletControllerCommand() {
    this->CommandName = EBulletControlCommand::None;
    this->SupporterIndex = 0;
    this->bDisableCommand = false;
}

