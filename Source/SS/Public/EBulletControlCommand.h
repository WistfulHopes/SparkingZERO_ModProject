#pragma once
#include "CoreMinimal.h"
#include "EBulletControlCommand.generated.h"

UENUM(BlueprintType)
enum class EBulletControlCommand : uint8 {
    None,
    Shot,
    Catch,
    Erase,
    Teleport,
    DirectControlON,
    DirectControlOFF,
    EraseAfterPlayOT,
    ImmediateDeath,
    EndCharge,
};

