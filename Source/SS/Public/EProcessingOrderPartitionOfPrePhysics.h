#pragma once
#include "CoreMinimal.h"
#include "EProcessingOrderPartitionOfPrePhysics.generated.h"

UENUM(BlueprintType)
enum class EProcessingOrderPartitionOfPrePhysics : uint8 {
    PostProccessManagerTicking,
    CharacterWarpCtrl,
    BattleImpactProcedure,
    BattledirectingActor,
    PadGenerationComponent,
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

