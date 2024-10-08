#pragma once
#include "CoreMinimal.h"
#include "EKoratDestructionObjectType.generated.h"

UENUM(BlueprintType)
enum class EKoratDestructionObjectType : uint8 {
    Uninit,
    RigidSObject,
    FragmentibleSObject,
    SwitchGroundSObject,
    SwitchMObject,
    SwitchGOject,
    SwitchBObject,
    FragmentibleGround,
    Ground,
    FragmentiblePartObject,
    NonDestructive,
    AfterEvacuationSwitchGOject,
    AfterEvacuationSwitchBObject,
    AfterEvacuationRigidSObject,
    AfterEvacuationFragmentibleSObject,
    AfterEvacuationSwitchGroundSObject,
    AfterEvacuationSwitchMObject,
};

