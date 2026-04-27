#pragma once
#include "CoreMinimal.h"
#include "EProcessingOrderPartitionOfPrePhysics.generated.h"

UENUM(BlueprintType)
enum class EProcessingOrderPartitionOfPrePhysics : uint8 {
    PostProccessManagerTicking,
    DestructionManager,
    CharacterWarpCtrl,
    CharacterBuffManager,
    TriggerImpactGameComponent,
    BattleImpactProcedure,
    BattledirectingActor,
    AiComponent1P,
    AiComponent2P,
    CharacterMeshTickStopActor,
    PlayerController,
    PlayerController1P,
    PlayerController2P,
    PlayerControllerNoEntry,
    GameStateBase,
    GameStateBaseAfter,
    PlayerPawn,
    PlayerRootComponet,
    PlayerCapsuleComponent,
};

