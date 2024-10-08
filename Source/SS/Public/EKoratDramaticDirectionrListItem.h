#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticDirectionrListItem.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticDirectionrListItem : uint8 {
    None,
    HPGaugeRecovery,
    SPGaugeRecovery,
    HPGaugeDamage,
    SPGaugeDamage,
    HPGaugeDirectSet,
    SPGaugeDirectSet,
    Conversation,
    CharacterChange,
    CharacteFormChange,
    CharacteCoalescence,
    ZItemEquip,
    ZItemRemove,
    SureToHitBlast1,
    SureToHitBlast2,
    SureToHitUB,
    BlastForbid,
    BlastAllow,
    FormChangeForbid,
    FormChangeAllow,
    CpuLevelChange,
    CpuThinkingChange,
    BGMChange,
    Activate,
    DirectingTableChange,
    EventRequest,
    Emote,
    Buff,
    ResetElapsedTime,
};

