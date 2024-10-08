#include "SSCharacterBattleAssistStateStruct.h"

FSSCharacterBattleAssistStateStruct::FSSCharacterBattleAssistStateStruct() {
    this->bSparking = false;
    this->RequestComboIndex = 0;
    this->ComboResetCount = 0;
    this->bTargetBulletRunning = false;
    this->bGuardNoHit = false;
    this->GuardTimeLater = 0.00f;
    this->bHoldBattleKey = false;
    this->bIsPursuitExec = false;
    this->PursuitCount = 0;
    this->PursuitType = EKoratPursuitType::None;
    this->bPursuitVanishingAttack = false;
    this->bPursuitDragonHoming = false;
    this->bPursuitDragonHomingExec = false;
    this->PursuitVanishingPossibleRemaining = 0;
    this->PursuitDragonHomingPossibleRemaining = 0;
    this->bTimeSincePushRush = false;
    this->PursuitDragonHomingSafeTime = 0.00f;
    this->DragonDashPadInputTime = 0.00f;
    this->bDragonDashWithAssist = false;
    this->bDragonDashAttackPursuit = false;
}

